
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#include "ImageExportOption.h"
#include "layApplication.h"
#include "layFileDialog.h"
#include "layVersion.h"
#include "laySignalHandler.h"
#include "tlExceptions.h"
#include "tlInternational.h"
#include "tlException.h"
#include "tlLog.h"
#include "tlStaticObjects.h"
#include "rba.h"
#include "pya.h"
#include "gsiExternalMain.h"

#include "tlArch.h"

#include "version.h"

//  required to force linking of the "ext" and "lib" module
#include "libForceLink.h"
#include "antForceLink.h"
#include "imgForceLink.h"
#include "docForceLink.h"
#include "iconsForceLink.h"
#if defined(HAVE_RUBY)
#include "drcForceLink.h"
#include "lvsForceLink.h"
#endif

#if defined(HAVE_QTBINDINGS)

//  pulls in the Qt GSI binding modules
# include "gsiQtGuiExternals.h"
# include "gsiQtWidgetsExternals.h"
# include "gsiQtCoreExternals.h"
# include "gsiQtMultimediaExternals.h"
# include "gsiQtPrintSupportExternals.h"
# include "gsiQtXmlExternals.h"
# include "gsiQtXmlPatternsExternals.h"
# include "gsiQtSqlExternals.h"
# include "gsiQtSvgExternals.h"
# include "gsiQtNetworkExternals.h"
# include "gsiQtDesignerExternals.h"
# include "gsiQtUiToolsExternals.h"

FORCE_LINK_GSI_QTCORE
FORCE_LINK_GSI_QTGUI
FORCE_LINK_GSI_QTWIDGETS
FORCE_LINK_GSI_QTMULTIMEDIA
FORCE_LINK_GSI_QTPRINTSUPPORT
FORCE_LINK_GSI_QTXML
FORCE_LINK_GSI_QTXMLPATTERNS
FORCE_LINK_GSI_QTDESIGNER
FORCE_LINK_GSI_QTNETWORK
FORCE_LINK_GSI_QTSQL
FORCE_LINK_GSI_QTSVG
FORCE_LINK_GSI_QTUITOOLS

#else
# define QT_EXTERNAL_BASE(x)
#endif

#include <QTranslator>
#include <QLocale>
#include <QTextCodec>

#include <iostream>
#include <fstream>
#include <memory>
#include <cstdlib>


#if QT_VERSION >= 0x050000
void api_custom_message_handler(QtMsgType type, const QMessageLogContext & /*ctx*/, const QString &msg)
{
  switch (type) {
  case QtDebugMsg:
    fprintf(stderr, "Debug: %s\n", msg.toLocal8Bit ().constData ());
    break;
  case QtWarningMsg:
    if (tl::verbosity () > 0) {
      fprintf(stderr, "Warning: %s\n", msg.toLocal8Bit ().constData ());
    }
    break;
  case QtCriticalMsg:
    fprintf(stderr, "Critical: %s\n", msg.toLocal8Bit ().constData ());
    break;
  case QtFatalMsg:
    fprintf(stderr, "Fatal: %s\n", msg.toLocal8Bit ().constData ());
    abort();
  case QtInfoMsg:
    fprintf(stderr, "Info: %s\n", msg.toLocal8Bit ().constData ());
    break;
  }
}
#else
void api_custom_message_handler(QtMsgType type, const char *msg)
{
  switch (type) {
  case QtDebugMsg:
    fprintf(stderr, "Debug: %s\n", msg);
    break;
  case QtWarningMsg:
    if (tl::verbosity () > 0) {
      fprintf(stderr, "Warning: %s\n", msg);
    }
    break;
  case QtCriticalMsg:
    fprintf(stderr, "Critical: %s\n", msg);
    break;
  case QtFatalMsg:
    fprintf(stderr, "Fatal: %s\n", msg);
    abort();
  }
}
#endif

namespace {

class ApiLogFileWriter
  : public tl::Channel
{
public:
  static std::unique_ptr<std::ofstream> m_os;

  ApiLogFileWriter (int min_verbosity, const std::string &prefix)
    : m_min_verbosity (min_verbosity), m_prefix (prefix), m_new_line (true)
  { }

  static bool open (const std::string &path)
  {
    m_os.reset (new std::ofstream (path));
    return m_os->good ();
  }

  void puts (const char *s)
  {
    if (m_os && tl::verbosity () >= m_min_verbosity) {
      m_os->write (s, strlen (s));
    }
  }

  void endl ()
  {
    puts ("\n");
    m_new_line = true;
  }

  void end ()
  {
    if (m_os && tl::verbosity () >= m_min_verbosity) {
      m_os->flush ();
    }
  }

  void begin ()
  {
    if (m_new_line) {
      puts (m_prefix.c_str ());
      m_new_line = false;
    }
  }

  void yield () { }

private:
  int m_min_verbosity;
  std::string m_prefix;
  bool m_new_line;
};

std::unique_ptr<std::ofstream> ApiLogFileWriter::m_os;

}

static void api_set_log_file (const std::string &log_file)
{
  if (ApiLogFileWriter::open (log_file)) {
    tl::info.add (new ApiLogFileWriter (0, std::string ()), true);
    tl::log.add (new ApiLogFileWriter (10, std::string ()), true);
    tl::warn.add (new ApiLogFileWriter (0, std::string ("Warning: ")), true);
    tl::error.add (new ApiLogFileWriter (0, std::string ("ERROR: ")), true);
  }
}


#ifdef _WIN32
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT
#endif

bool api_debug = false;

extern "C" {

DLL_EXPORT
int CreateHandle(HANDLE* handle, bool debug) {
  api_debug = true;
  int result = 0;
  try {
    if (!handle) {
      DEBUG_PRINTF("init handle for output is nullptr, %p", static_cast<void*>(handle));
      return INIT_HANDLE_IS_NOT_NULLPTR;
    }
    //  this registers the gsi definitions
    gsi::initialize_external ();
    DEBUG_PRINTF("this registers the gsi definitions: gsi::initialize_external ()");
    int argc = 0;
    lay::NonGuiApplication* app = new lay::NonGuiApplication (argc, nullptr);
    DEBUG_PRINTF("CREATE non gui application instance.............................");
    app->init_app ();
    DEBUG_PRINTF("app->init_app () SUCCESS");
    app->reset_config ();
    DEBUG_PRINTF("reset_config () SUCCESS");
    DEBUG_PRINTF("SET no grid, no ruler...............SUCCESS");
    *handle = app;
    return (*handle != nullptr) ? SUCCESS : HANDLE_INSTANCE_IS_NULLPTR;
  } catch (tl::ExitException &ex) {
    DEBUG_PRINTF("tl::ExitException &ex, status = %d", ex.status ());
    result = EXCEPTION_1;
  } catch (std::exception &ex) {
    DEBUG_PRINTF("std::exception &ex, ex.what () = %s", ex.what ());
    result = EXCEPTION_2;
  } catch (tl::Exception &ex) {
    tl::error << ex.msg ();
    DEBUG_PRINTF("tl::Exception &ex, ex.msg () = %s", ex.msg ());
    result = EXCEPTION_3;
  } catch (...) {
    tl::error << tl::to_string (QObject::tr ("unspecific error"));
    DEBUG_PRINTF("tl::to_string (QObject::tr (\"unspecific error\")) = %s", tl::to_string (QObject::tr ("unspecific error")).c_str());
    result = EXCEPTION_4;
  }
}

// 获取对象的值
DLL_EXPORT
int loadFile(HANDLE handle, const char* file) {
  lay::NonGuiApplication* app = (lay::NonGuiApplication*) handle;
  return app->loadFileForApi(file);
}

DLL_EXPORT
int getBox(HANDLE handle, ApiBox* outApiBox) {
    lay::NonGuiApplication* app = (lay::NonGuiApplication*) handle;
    return app->getBoxForApi(outApiBox);
}

DLL_EXPORT
int exportToImage(HANDLE handle, const struct ImageExportOption * option) {
  lay::NonGuiApplication* app = (lay::NonGuiApplication*) handle;
  return app->exportToImageForApi(option);
}

DLL_EXPORT
int ReleaseHandle(HANDLE handle) {
  if (!handle) {
    return 1;
  }
  lay::NonGuiApplication* app = (lay::NonGuiApplication*) handle;
  app->run();
  delete app;
  tl::StaticObjects::cleanup ();
  return 0;
}
}