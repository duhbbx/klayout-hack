
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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

/**
*  @file gsiDeclQDesktopServices.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDesktopServices>
#include <QObject>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDesktopServices

//  Constructor QDesktopServices::QDesktopServices()


static void _init_ctor_QDesktopServices_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDesktopServices> ();
}

static void _call_ctor_QDesktopServices_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDesktopServices *> (new QDesktopServices ());
}


// static QString QDesktopServices::displayName(QDesktopServices::StandardLocation type)


static void _init_f_displayName_3841 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QDesktopServices::StandardLocation>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_displayName_3841 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDesktopServices::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDesktopServices::StandardLocation>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QDesktopServices::displayName (qt_gsi::QtToCppAdaptor<QDesktopServices::StandardLocation>(arg1).cref()));
}


// static bool QDesktopServices::openUrl(const QUrl &url)


static void _init_f_openUrl_1701 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_openUrl_1701 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  ret.write<bool > ((bool)QDesktopServices::openUrl (arg1));
}


// static void QDesktopServices::setUrlHandler(const QString &scheme, QObject *receiver, const char *method)


static void _init_f_setUrlHandler_4842 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("scheme");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("receiver");
  decl->add_arg<QObject * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("method");
  decl->add_arg<const char * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setUrlHandler_4842 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QDesktopServices::setUrlHandler (arg1, arg2, arg3);
}


// static QString QDesktopServices::storageLocation(QDesktopServices::StandardLocation type)


static void _init_f_storageLocation_3841 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QDesktopServices::StandardLocation>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_storageLocation_3841 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDesktopServices::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDesktopServices::StandardLocation>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QDesktopServices::storageLocation (qt_gsi::QtToCppAdaptor<QDesktopServices::StandardLocation>(arg1).cref()));
}


// static void QDesktopServices::unsetUrlHandler(const QString &scheme)


static void _init_f_unsetUrlHandler_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("scheme");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_unsetUrlHandler_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QDesktopServices::unsetUrlHandler (arg1);
}



namespace gsi
{

static gsi::Methods methods_QDesktopServices () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDesktopServices::QDesktopServices()\nThis method creates an object of class QDesktopServices.", &_init_ctor_QDesktopServices_0, &_call_ctor_QDesktopServices_0);
  methods += new qt_gsi::GenericStaticMethod ("displayName", "@brief Static method QString QDesktopServices::displayName(QDesktopServices::StandardLocation type)\nThis method is static and can be called without an instance.", &_init_f_displayName_3841, &_call_f_displayName_3841);
  methods += new qt_gsi::GenericStaticMethod ("openUrl", "@brief Static method bool QDesktopServices::openUrl(const QUrl &url)\nThis method is static and can be called without an instance.", &_init_f_openUrl_1701, &_call_f_openUrl_1701);
  methods += new qt_gsi::GenericStaticMethod ("setUrlHandler", "@brief Static method void QDesktopServices::setUrlHandler(const QString &scheme, QObject *receiver, const char *method)\nThis method is static and can be called without an instance.", &_init_f_setUrlHandler_4842, &_call_f_setUrlHandler_4842);
  methods += new qt_gsi::GenericStaticMethod ("storageLocation", "@brief Static method QString QDesktopServices::storageLocation(QDesktopServices::StandardLocation type)\nThis method is static and can be called without an instance.", &_init_f_storageLocation_3841, &_call_f_storageLocation_3841);
  methods += new qt_gsi::GenericStaticMethod ("unsetUrlHandler", "@brief Static method void QDesktopServices::unsetUrlHandler(const QString &scheme)\nThis method is static and can be called without an instance.", &_init_f_unsetUrlHandler_2025, &_call_f_unsetUrlHandler_2025);
  return methods;
}

gsi::Class<QDesktopServices> decl_QDesktopServices ("QtGui", "QDesktopServices",
  methods_QDesktopServices (),
  "@qt\n@brief Binding of QDesktopServices");


GSI_QTGUI_PUBLIC gsi::Class<QDesktopServices> &qtdecl_QDesktopServices () { return decl_QDesktopServices; }

}


//  Implementation of the enum wrapper class for QDesktopServices::StandardLocation
namespace qt_gsi
{

static gsi::Enum<QDesktopServices::StandardLocation> decl_QDesktopServices_StandardLocation_Enum ("QtGui", "QDesktopServices_StandardLocation",
    gsi::enum_const ("DesktopLocation", QDesktopServices::DesktopLocation, "@brief Enum constant QDesktopServices::DesktopLocation") +
    gsi::enum_const ("DocumentsLocation", QDesktopServices::DocumentsLocation, "@brief Enum constant QDesktopServices::DocumentsLocation") +
    gsi::enum_const ("FontsLocation", QDesktopServices::FontsLocation, "@brief Enum constant QDesktopServices::FontsLocation") +
    gsi::enum_const ("ApplicationsLocation", QDesktopServices::ApplicationsLocation, "@brief Enum constant QDesktopServices::ApplicationsLocation") +
    gsi::enum_const ("MusicLocation", QDesktopServices::MusicLocation, "@brief Enum constant QDesktopServices::MusicLocation") +
    gsi::enum_const ("MoviesLocation", QDesktopServices::MoviesLocation, "@brief Enum constant QDesktopServices::MoviesLocation") +
    gsi::enum_const ("PicturesLocation", QDesktopServices::PicturesLocation, "@brief Enum constant QDesktopServices::PicturesLocation") +
    gsi::enum_const ("TempLocation", QDesktopServices::TempLocation, "@brief Enum constant QDesktopServices::TempLocation") +
    gsi::enum_const ("HomeLocation", QDesktopServices::HomeLocation, "@brief Enum constant QDesktopServices::HomeLocation") +
    gsi::enum_const ("DataLocation", QDesktopServices::DataLocation, "@brief Enum constant QDesktopServices::DataLocation") +
    gsi::enum_const ("CacheLocation", QDesktopServices::CacheLocation, "@brief Enum constant QDesktopServices::CacheLocation"),
  "@qt\n@brief This class represents the QDesktopServices::StandardLocation enum");

static gsi::QFlagsClass<QDesktopServices::StandardLocation > decl_QDesktopServices_StandardLocation_Enums ("QtGui", "QDesktopServices_QFlags_StandardLocation",
  "@qt\n@brief This class represents the QFlags<QDesktopServices::StandardLocation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDesktopServices> inject_QDesktopServices_StandardLocation_Enum_in_parent (decl_QDesktopServices_StandardLocation_Enum.defs ());
static gsi::ClassExt<QDesktopServices> decl_QDesktopServices_StandardLocation_Enum_as_child (decl_QDesktopServices_StandardLocation_Enum, "StandardLocation");
static gsi::ClassExt<QDesktopServices> decl_QDesktopServices_StandardLocation_Enums_as_child (decl_QDesktopServices_StandardLocation_Enums, "QFlags_StandardLocation");

}

