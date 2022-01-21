
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
*  @file gsiDeclQCommandLineParser.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QCoreApplication>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCommandLineParser

//  Constructor QCommandLineParser::QCommandLineParser()


static void _init_ctor_QCommandLineParser_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCommandLineParser> ();
}

static void _call_ctor_QCommandLineParser_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCommandLineParser *> (new QCommandLineParser ());
}


// QCommandLineOption QCommandLineParser::addHelpOption()


static void _init_f_addHelpOption_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QCommandLineOption > ();
}

static void _call_f_addHelpOption_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCommandLineOption > ((QCommandLineOption)((QCommandLineParser *)cls)->addHelpOption ());
}


// bool QCommandLineParser::addOption(const QCommandLineOption &commandLineOption)


static void _init_f_addOption_3122 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("commandLineOption");
  decl->add_arg<const QCommandLineOption & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_addOption_3122 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCommandLineOption &arg1 = gsi::arg_reader<const QCommandLineOption & >() (args, heap);
  ret.write<bool > ((bool)((QCommandLineParser *)cls)->addOption (arg1));
}


// bool QCommandLineParser::addOptions(const QList<QCommandLineOption> &options)


static void _init_f_addOptions_3737 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<const QList<QCommandLineOption> & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_addOptions_3737 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QCommandLineOption> &arg1 = gsi::arg_reader<const QList<QCommandLineOption> & >() (args, heap);
  ret.write<bool > ((bool)((QCommandLineParser *)cls)->addOptions (arg1));
}


// void QCommandLineParser::addPositionalArgument(const QString &name, const QString &description, const QString &syntax)


static void _init_f_addPositionalArgument_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("description");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("syntax", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_addPositionalArgument_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->addPositionalArgument (arg1, arg2, arg3);
}


// QCommandLineOption QCommandLineParser::addVersionOption()


static void _init_f_addVersionOption_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QCommandLineOption > ();
}

static void _call_f_addVersionOption_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCommandLineOption > ((QCommandLineOption)((QCommandLineParser *)cls)->addVersionOption ());
}


// QString QCommandLineParser::applicationDescription()


static void _init_f_applicationDescription_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_applicationDescription_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCommandLineParser *)cls)->applicationDescription ());
}


// void QCommandLineParser::clearPositionalArguments()


static void _init_f_clearPositionalArguments_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearPositionalArguments_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->clearPositionalArguments ();
}


// QString QCommandLineParser::errorText()


static void _init_f_errorText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCommandLineParser *)cls)->errorText ());
}


// QString QCommandLineParser::helpText()


static void _init_f_helpText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_helpText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCommandLineParser *)cls)->helpText ());
}


// bool QCommandLineParser::isSet(const QString &name)


static void _init_f_isSet_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isSet_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QCommandLineParser *)cls)->isSet (arg1));
}


// bool QCommandLineParser::isSet(const QCommandLineOption &option)


static void _init_f_isSet_c3122 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QCommandLineOption & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isSet_c3122 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCommandLineOption &arg1 = gsi::arg_reader<const QCommandLineOption & >() (args, heap);
  ret.write<bool > ((bool)((QCommandLineParser *)cls)->isSet (arg1));
}


// QStringList QCommandLineParser::optionNames()


static void _init_f_optionNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_optionNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QCommandLineParser *)cls)->optionNames ());
}


// bool QCommandLineParser::parse(const QStringList &arguments)


static void _init_f_parse_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arguments");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_parse_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  ret.write<bool > ((bool)((QCommandLineParser *)cls)->parse (arg1));
}


// QStringList QCommandLineParser::positionalArguments()


static void _init_f_positionalArguments_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_positionalArguments_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QCommandLineParser *)cls)->positionalArguments ());
}


// void QCommandLineParser::process(const QStringList &arguments)


static void _init_f_process_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arguments");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_process_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->process (arg1);
}


// void QCommandLineParser::process(const QCoreApplication &app)


static void _init_f_process_2927 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("app");
  decl->add_arg<const QCoreApplication & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_process_2927 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCoreApplication &arg1 = gsi::arg_reader<const QCoreApplication & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->process (arg1);
}


// void QCommandLineParser::setApplicationDescription(const QString &description)


static void _init_f_setApplicationDescription_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("description");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setApplicationDescription_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->setApplicationDescription (arg1);
}


// void QCommandLineParser::setOptionsAfterPositionalArgumentsMode(QCommandLineParser::OptionsAfterPositionalArgumentsMode mode)


static void _init_f_setOptionsAfterPositionalArgumentsMode_5992 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QCommandLineParser::OptionsAfterPositionalArgumentsMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOptionsAfterPositionalArgumentsMode_5992 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCommandLineParser::OptionsAfterPositionalArgumentsMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCommandLineParser::OptionsAfterPositionalArgumentsMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->setOptionsAfterPositionalArgumentsMode (qt_gsi::QtToCppAdaptor<QCommandLineParser::OptionsAfterPositionalArgumentsMode>(arg1).cref());
}


// void QCommandLineParser::setSingleDashWordOptionMode(QCommandLineParser::SingleDashWordOptionMode parsingMode)


static void _init_f_setSingleDashWordOptionMode_4777 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parsingMode");
  decl->add_arg<const qt_gsi::Converter<QCommandLineParser::SingleDashWordOptionMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSingleDashWordOptionMode_4777 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCommandLineParser::SingleDashWordOptionMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCommandLineParser::SingleDashWordOptionMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->setSingleDashWordOptionMode (qt_gsi::QtToCppAdaptor<QCommandLineParser::SingleDashWordOptionMode>(arg1).cref());
}


// void QCommandLineParser::showHelp(int exitCode)


static void _init_f_showHelp_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exitCode", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_showHelp_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->showHelp (arg1);
}


// void QCommandLineParser::showVersion()


static void _init_f_showVersion_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_showVersion_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineParser *)cls)->showVersion ();
}


// QStringList QCommandLineParser::unknownOptionNames()


static void _init_f_unknownOptionNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_unknownOptionNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QCommandLineParser *)cls)->unknownOptionNames ());
}


// QString QCommandLineParser::value(const QString &name)


static void _init_f_value_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_value_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QCommandLineParser *)cls)->value (arg1));
}


// QString QCommandLineParser::value(const QCommandLineOption &option)


static void _init_f_value_c3122 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QCommandLineOption & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_value_c3122 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCommandLineOption &arg1 = gsi::arg_reader<const QCommandLineOption & >() (args, heap);
  ret.write<QString > ((QString)((QCommandLineParser *)cls)->value (arg1));
}


// QStringList QCommandLineParser::values(const QString &name)


static void _init_f_values_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_values_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStringList > ((QStringList)((QCommandLineParser *)cls)->values (arg1));
}


// QStringList QCommandLineParser::values(const QCommandLineOption &option)


static void _init_f_values_c3122 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QCommandLineOption & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_values_c3122 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCommandLineOption &arg1 = gsi::arg_reader<const QCommandLineOption & >() (args, heap);
  ret.write<QStringList > ((QStringList)((QCommandLineParser *)cls)->values (arg1));
}


// static QString QCommandLineParser::tr(const char *sourceText, const char *disambiguation, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceText");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("disambiguation", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCommandLineParser::tr (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QCommandLineParser () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCommandLineParser::QCommandLineParser()\nThis method creates an object of class QCommandLineParser.", &_init_ctor_QCommandLineParser_0, &_call_ctor_QCommandLineParser_0);
  methods += new qt_gsi::GenericMethod ("addHelpOption", "@brief Method QCommandLineOption QCommandLineParser::addHelpOption()\n", false, &_init_f_addHelpOption_0, &_call_f_addHelpOption_0);
  methods += new qt_gsi::GenericMethod ("addOption", "@brief Method bool QCommandLineParser::addOption(const QCommandLineOption &commandLineOption)\n", false, &_init_f_addOption_3122, &_call_f_addOption_3122);
  methods += new qt_gsi::GenericMethod ("addOptions", "@brief Method bool QCommandLineParser::addOptions(const QList<QCommandLineOption> &options)\n", false, &_init_f_addOptions_3737, &_call_f_addOptions_3737);
  methods += new qt_gsi::GenericMethod ("addPositionalArgument", "@brief Method void QCommandLineParser::addPositionalArgument(const QString &name, const QString &description, const QString &syntax)\n", false, &_init_f_addPositionalArgument_5859, &_call_f_addPositionalArgument_5859);
  methods += new qt_gsi::GenericMethod ("addVersionOption", "@brief Method QCommandLineOption QCommandLineParser::addVersionOption()\n", false, &_init_f_addVersionOption_0, &_call_f_addVersionOption_0);
  methods += new qt_gsi::GenericMethod (":applicationDescription", "@brief Method QString QCommandLineParser::applicationDescription()\n", true, &_init_f_applicationDescription_c0, &_call_f_applicationDescription_c0);
  methods += new qt_gsi::GenericMethod ("clearPositionalArguments", "@brief Method void QCommandLineParser::clearPositionalArguments()\n", false, &_init_f_clearPositionalArguments_0, &_call_f_clearPositionalArguments_0);
  methods += new qt_gsi::GenericMethod ("errorText", "@brief Method QString QCommandLineParser::errorText()\n", true, &_init_f_errorText_c0, &_call_f_errorText_c0);
  methods += new qt_gsi::GenericMethod ("helpText", "@brief Method QString QCommandLineParser::helpText()\n", true, &_init_f_helpText_c0, &_call_f_helpText_c0);
  methods += new qt_gsi::GenericMethod ("isSet?", "@brief Method bool QCommandLineParser::isSet(const QString &name)\n", true, &_init_f_isSet_c2025, &_call_f_isSet_c2025);
  methods += new qt_gsi::GenericMethod ("isSet?", "@brief Method bool QCommandLineParser::isSet(const QCommandLineOption &option)\n", true, &_init_f_isSet_c3122, &_call_f_isSet_c3122);
  methods += new qt_gsi::GenericMethod ("optionNames", "@brief Method QStringList QCommandLineParser::optionNames()\n", true, &_init_f_optionNames_c0, &_call_f_optionNames_c0);
  methods += new qt_gsi::GenericMethod ("parse", "@brief Method bool QCommandLineParser::parse(const QStringList &arguments)\n", false, &_init_f_parse_2437, &_call_f_parse_2437);
  methods += new qt_gsi::GenericMethod ("positionalArguments", "@brief Method QStringList QCommandLineParser::positionalArguments()\n", true, &_init_f_positionalArguments_c0, &_call_f_positionalArguments_c0);
  methods += new qt_gsi::GenericMethod ("process", "@brief Method void QCommandLineParser::process(const QStringList &arguments)\n", false, &_init_f_process_2437, &_call_f_process_2437);
  methods += new qt_gsi::GenericMethod ("process", "@brief Method void QCommandLineParser::process(const QCoreApplication &app)\n", false, &_init_f_process_2927, &_call_f_process_2927);
  methods += new qt_gsi::GenericMethod ("setApplicationDescription|applicationDescription=", "@brief Method void QCommandLineParser::setApplicationDescription(const QString &description)\n", false, &_init_f_setApplicationDescription_2025, &_call_f_setApplicationDescription_2025);
  methods += new qt_gsi::GenericMethod ("setOptionsAfterPositionalArgumentsMode", "@brief Method void QCommandLineParser::setOptionsAfterPositionalArgumentsMode(QCommandLineParser::OptionsAfterPositionalArgumentsMode mode)\n", false, &_init_f_setOptionsAfterPositionalArgumentsMode_5992, &_call_f_setOptionsAfterPositionalArgumentsMode_5992);
  methods += new qt_gsi::GenericMethod ("setSingleDashWordOptionMode", "@brief Method void QCommandLineParser::setSingleDashWordOptionMode(QCommandLineParser::SingleDashWordOptionMode parsingMode)\n", false, &_init_f_setSingleDashWordOptionMode_4777, &_call_f_setSingleDashWordOptionMode_4777);
  methods += new qt_gsi::GenericMethod ("showHelp", "@brief Method void QCommandLineParser::showHelp(int exitCode)\n", false, &_init_f_showHelp_767, &_call_f_showHelp_767);
  methods += new qt_gsi::GenericMethod ("showVersion", "@brief Method void QCommandLineParser::showVersion()\n", false, &_init_f_showVersion_0, &_call_f_showVersion_0);
  methods += new qt_gsi::GenericMethod ("unknownOptionNames", "@brief Method QStringList QCommandLineParser::unknownOptionNames()\n", true, &_init_f_unknownOptionNames_c0, &_call_f_unknownOptionNames_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QCommandLineParser::value(const QString &name)\n", true, &_init_f_value_c2025, &_call_f_value_c2025);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QCommandLineParser::value(const QCommandLineOption &option)\n", true, &_init_f_value_c3122, &_call_f_value_c3122);
  methods += new qt_gsi::GenericMethod ("values", "@brief Method QStringList QCommandLineParser::values(const QString &name)\n", true, &_init_f_values_c2025, &_call_f_values_c2025);
  methods += new qt_gsi::GenericMethod ("values", "@brief Method QStringList QCommandLineParser::values(const QCommandLineOption &option)\n", true, &_init_f_values_c3122, &_call_f_values_c3122);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCommandLineParser::tr(const char *sourceText, const char *disambiguation, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QCommandLineParser> decl_QCommandLineParser ("QtCore", "QCommandLineParser",
  methods_QCommandLineParser (),
  "@qt\n@brief Binding of QCommandLineParser");


GSI_QTCORE_PUBLIC gsi::Class<QCommandLineParser> &qtdecl_QCommandLineParser () { return decl_QCommandLineParser; }

}


//  Implementation of the enum wrapper class for QCommandLineParser::OptionsAfterPositionalArgumentsMode
namespace qt_gsi
{

static gsi::Enum<QCommandLineParser::OptionsAfterPositionalArgumentsMode> decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enum ("QtCore", "QCommandLineParser_OptionsAfterPositionalArgumentsMode",
    gsi::enum_const ("ParseAsOptions", QCommandLineParser::ParseAsOptions, "@brief Enum constant QCommandLineParser::ParseAsOptions") +
    gsi::enum_const ("ParseAsPositionalArguments", QCommandLineParser::ParseAsPositionalArguments, "@brief Enum constant QCommandLineParser::ParseAsPositionalArguments"),
  "@qt\n@brief This class represents the QCommandLineParser::OptionsAfterPositionalArgumentsMode enum");

static gsi::QFlagsClass<QCommandLineParser::OptionsAfterPositionalArgumentsMode > decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enums ("QtCore", "QCommandLineParser_QFlags_OptionsAfterPositionalArgumentsMode",
  "@qt\n@brief This class represents the QFlags<QCommandLineParser::OptionsAfterPositionalArgumentsMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCommandLineParser> inject_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enum_in_parent (decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enum.defs ());
static gsi::ClassExt<QCommandLineParser> decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enum_as_child (decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enum, "OptionsAfterPositionalArgumentsMode");
static gsi::ClassExt<QCommandLineParser> decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enums_as_child (decl_QCommandLineParser_OptionsAfterPositionalArgumentsMode_Enums, "QFlags_OptionsAfterPositionalArgumentsMode");

}


//  Implementation of the enum wrapper class for QCommandLineParser::SingleDashWordOptionMode
namespace qt_gsi
{

static gsi::Enum<QCommandLineParser::SingleDashWordOptionMode> decl_QCommandLineParser_SingleDashWordOptionMode_Enum ("QtCore", "QCommandLineParser_SingleDashWordOptionMode",
    gsi::enum_const ("ParseAsCompactedShortOptions", QCommandLineParser::ParseAsCompactedShortOptions, "@brief Enum constant QCommandLineParser::ParseAsCompactedShortOptions") +
    gsi::enum_const ("ParseAsLongOptions", QCommandLineParser::ParseAsLongOptions, "@brief Enum constant QCommandLineParser::ParseAsLongOptions"),
  "@qt\n@brief This class represents the QCommandLineParser::SingleDashWordOptionMode enum");

static gsi::QFlagsClass<QCommandLineParser::SingleDashWordOptionMode > decl_QCommandLineParser_SingleDashWordOptionMode_Enums ("QtCore", "QCommandLineParser_QFlags_SingleDashWordOptionMode",
  "@qt\n@brief This class represents the QFlags<QCommandLineParser::SingleDashWordOptionMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCommandLineParser> inject_QCommandLineParser_SingleDashWordOptionMode_Enum_in_parent (decl_QCommandLineParser_SingleDashWordOptionMode_Enum.defs ());
static gsi::ClassExt<QCommandLineParser> decl_QCommandLineParser_SingleDashWordOptionMode_Enum_as_child (decl_QCommandLineParser_SingleDashWordOptionMode_Enum, "SingleDashWordOptionMode");
static gsi::ClassExt<QCommandLineParser> decl_QCommandLineParser_SingleDashWordOptionMode_Enums_as_child (decl_QCommandLineParser_SingleDashWordOptionMode_Enums, "QFlags_SingleDashWordOptionMode");

}

