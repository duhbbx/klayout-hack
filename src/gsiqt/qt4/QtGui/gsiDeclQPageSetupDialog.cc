
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQPageSetupDialog.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPageSetupDialog>
#include <QObject>
#include <QPrinter>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPageSetupDialog

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QPageSetupDialog::staticMetaObject);
}


// void QPageSetupDialog::addEnabledOption(QPageSetupDialog::PageSetupDialogOption option)


static void _init_f_addEnabledOption_4270 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addEnabledOption_4270 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->addEnabledOption (qt_gsi::QtToCppAdaptor<QPageSetupDialog::PageSetupDialogOption>(arg1).cref());
}


// QFlags<QPageSetupDialog::PageSetupDialogOption> QPageSetupDialog::enabledOptions()


static void _init_f_enabledOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QPageSetupDialog::PageSetupDialogOption> > ();
}

static void _call_f_enabledOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QPageSetupDialog::PageSetupDialogOption> > ((QFlags<QPageSetupDialog::PageSetupDialogOption>)((QPageSetupDialog *)cls)->enabledOptions ());
}


// int QPageSetupDialog::exec()


static void _init_f_exec_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_exec_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPageSetupDialog *)cls)->exec ());
}


// bool QPageSetupDialog::isOptionEnabled(QPageSetupDialog::PageSetupDialogOption option)


static void _init_f_isOptionEnabled_c4270 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isOptionEnabled_c4270 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QPageSetupDialog *)cls)->isOptionEnabled (qt_gsi::QtToCppAdaptor<QPageSetupDialog::PageSetupDialogOption>(arg1).cref()));
}


// void QPageSetupDialog::open()


static void _init_f_open_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_open_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->open ();
}


// void QPageSetupDialog::open(QObject *receiver, const char *member)


static void _init_f_open_2925 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("receiver");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("member");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_open_2925 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->open (arg1, arg2);
}


// QFlags<QPageSetupDialog::PageSetupDialogOption> QPageSetupDialog::options()


static void _init_f_options_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QPageSetupDialog::PageSetupDialogOption> > ();
}

static void _call_f_options_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QPageSetupDialog::PageSetupDialogOption> > ((QFlags<QPageSetupDialog::PageSetupDialogOption>)((QPageSetupDialog *)cls)->options ());
}


// void QPageSetupDialog::setEnabledOptions(QFlags<QPageSetupDialog::PageSetupDialogOption> options)


static void _init_f_setEnabledOptions_4966 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<QFlags<QPageSetupDialog::PageSetupDialogOption> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEnabledOptions_4966 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QPageSetupDialog::PageSetupDialogOption> arg1 = gsi::arg_reader<QFlags<QPageSetupDialog::PageSetupDialogOption> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->setEnabledOptions (arg1);
}


// void QPageSetupDialog::setOption(QPageSetupDialog::PageSetupDialogOption option, bool on)


static void _init_f_setOption_5026 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("on", true, "true");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setOption_5026 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & >() (args, heap);
  bool arg2 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (true, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->setOption (qt_gsi::QtToCppAdaptor<QPageSetupDialog::PageSetupDialogOption>(arg1).cref(), arg2);
}


// void QPageSetupDialog::setOptions(QFlags<QPageSetupDialog::PageSetupDialogOption> options)


static void _init_f_setOptions_4966 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<QFlags<QPageSetupDialog::PageSetupDialogOption> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOptions_4966 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QPageSetupDialog::PageSetupDialogOption> arg1 = gsi::arg_reader<QFlags<QPageSetupDialog::PageSetupDialogOption> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->setOptions (arg1);
}


// bool QPageSetupDialog::testOption(QPageSetupDialog::PageSetupDialogOption option)


static void _init_f_testOption_c4270 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_testOption_c4270 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPageSetupDialog::PageSetupDialogOption>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QPageSetupDialog *)cls)->testOption (qt_gsi::QtToCppAdaptor<QPageSetupDialog::PageSetupDialogOption>(arg1).cref()));
}


// static QString QPageSetupDialog::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QPageSetupDialog::tr (arg1, arg2));
}


// static QString QPageSetupDialog::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QPageSetupDialog::tr (arg1, arg2, arg3));
}


// static QString QPageSetupDialog::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QPageSetupDialog::trUtf8 (arg1, arg2));
}


// static QString QPageSetupDialog::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QPageSetupDialog::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QPageSetupDialog () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("addEnabledOption", "@brief Method void QPageSetupDialog::addEnabledOption(QPageSetupDialog::PageSetupDialogOption option)\n", false, &_init_f_addEnabledOption_4270, &_call_f_addEnabledOption_4270);
  methods += new qt_gsi::GenericMethod (":enabledOptions", "@brief Method QFlags<QPageSetupDialog::PageSetupDialogOption> QPageSetupDialog::enabledOptions()\n", true, &_init_f_enabledOptions_c0, &_call_f_enabledOptions_c0);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method int QPageSetupDialog::exec()\n", false, &_init_f_exec_0, &_call_f_exec_0);
  methods += new qt_gsi::GenericMethod ("isOptionEnabled?", "@brief Method bool QPageSetupDialog::isOptionEnabled(QPageSetupDialog::PageSetupDialogOption option)\n", true, &_init_f_isOptionEnabled_c4270, &_call_f_isOptionEnabled_c4270);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method void QPageSetupDialog::open()\n", false, &_init_f_open_0, &_call_f_open_0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method void QPageSetupDialog::open(QObject *receiver, const char *member)\n", false, &_init_f_open_2925, &_call_f_open_2925);
  methods += new qt_gsi::GenericMethod (":options", "@brief Method QFlags<QPageSetupDialog::PageSetupDialogOption> QPageSetupDialog::options()\n", true, &_init_f_options_c0, &_call_f_options_c0);
  methods += new qt_gsi::GenericMethod ("setEnabledOptions|enabledOptions=", "@brief Method void QPageSetupDialog::setEnabledOptions(QFlags<QPageSetupDialog::PageSetupDialogOption> options)\n", false, &_init_f_setEnabledOptions_4966, &_call_f_setEnabledOptions_4966);
  methods += new qt_gsi::GenericMethod ("setOption", "@brief Method void QPageSetupDialog::setOption(QPageSetupDialog::PageSetupDialogOption option, bool on)\n", false, &_init_f_setOption_5026, &_call_f_setOption_5026);
  methods += new qt_gsi::GenericMethod ("setOptions|options=", "@brief Method void QPageSetupDialog::setOptions(QFlags<QPageSetupDialog::PageSetupDialogOption> options)\n", false, &_init_f_setOptions_4966, &_call_f_setOptions_4966);
  methods += new qt_gsi::GenericMethod ("testOption", "@brief Method bool QPageSetupDialog::testOption(QPageSetupDialog::PageSetupDialogOption option)\n", true, &_init_f_testOption_c4270, &_call_f_testOption_c4270);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPageSetupDialog::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPageSetupDialog::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QPageSetupDialog::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QPageSetupDialog::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QPageSetupDialog> decl_QPageSetupDialog ("QtGui", "QPageSetupDialog_Native",
  methods_QPageSetupDialog (),
  "@hide\n@alias QPageSetupDialog");

GSI_QTGUI_PUBLIC gsi::Class<QPageSetupDialog> &qtdecl_QPageSetupDialog () { return decl_QPageSetupDialog; }

}


class QPageSetupDialog_Adaptor : public QPageSetupDialog, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPageSetupDialog_Adaptor();

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent)
  QPageSetupDialog_Adaptor(QPrinter *printer) : QPageSetupDialog(printer)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent)
  QPageSetupDialog_Adaptor(QPrinter *printer, QWidget *parent) : QPageSetupDialog(printer, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QWidget *parent)
  QPageSetupDialog_Adaptor() : QPageSetupDialog()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QWidget *parent)
  QPageSetupDialog_Adaptor(QWidget *parent) : QPageSetupDialog(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] int QPageSetupDialog::exec()
  int cbs_exec_0_0()
  {
    return QPageSetupDialog::exec();
  }

  virtual int exec()
  {
    if (cb_exec_0_0.can_issue()) {
      return cb_exec_0_0.issue<QPageSetupDialog_Adaptor, int>(&QPageSetupDialog_Adaptor::cbs_exec_0_0);
    } else {
      return QPageSetupDialog::exec();
    }
  }

  gsi::Callback cb_exec_0_0;
};

QPageSetupDialog_Adaptor::~QPageSetupDialog_Adaptor() { }

//  Constructor QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent) (adaptor class)

static void _init_ctor_QPageSetupDialog_Adaptor_2650 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("printer");
  decl->add_arg<QPrinter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return_new<QPageSetupDialog_Adaptor> ();
}

static void _call_ctor_QPageSetupDialog_Adaptor_2650 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPrinter *arg1 = gsi::arg_reader<QPrinter * >() (args, heap);
  QWidget *arg2 = args ? gsi::arg_reader<QWidget * >() (args, heap) : gsi::arg_maker<QWidget * >() (0, heap);
  ret.write<QPageSetupDialog_Adaptor *> (new QPageSetupDialog_Adaptor (arg1, arg2));
}


//  Constructor QPageSetupDialog::QPageSetupDialog(QWidget *parent) (adaptor class)

static void _init_ctor_QPageSetupDialog_Adaptor_1315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return_new<QPageSetupDialog_Adaptor> ();
}

static void _call_ctor_QPageSetupDialog_Adaptor_1315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args ? gsi::arg_reader<QWidget * >() (args, heap) : gsi::arg_maker<QWidget * >() (0, heap);
  ret.write<QPageSetupDialog_Adaptor *> (new QPageSetupDialog_Adaptor (arg1));
}


// int QPageSetupDialog::exec()

static void _init_cbs_exec_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_exec_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPageSetupDialog_Adaptor *)cls)->cbs_exec_0_0 ());
}

static void _set_callback_cbs_exec_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPageSetupDialog_Adaptor *)cls)->cb_exec_0_0 = cb;
}


namespace gsi
{

gsi::Class<QPageSetupDialog> &qtdecl_QPageSetupDialog ();

static gsi::Methods methods_QPageSetupDialog_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent)\nThis method creates an object of class QPageSetupDialog.", &_init_ctor_QPageSetupDialog_Adaptor_2650, &_call_ctor_QPageSetupDialog_Adaptor_2650);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageSetupDialog::QPageSetupDialog(QWidget *parent)\nThis method creates an object of class QPageSetupDialog.", &_init_ctor_QPageSetupDialog_Adaptor_1315, &_call_ctor_QPageSetupDialog_Adaptor_1315);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Virtual method int QPageSetupDialog::exec()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_exec_0_0, &_call_cbs_exec_0_0);
  methods += new qt_gsi::GenericMethod ("exec", "@hide", false, &_init_cbs_exec_0_0, &_call_cbs_exec_0_0, &_set_callback_cbs_exec_0_0);
  return methods;
}

gsi::Class<QPageSetupDialog_Adaptor> decl_QPageSetupDialog_Adaptor (qtdecl_QPageSetupDialog (), "QtGui", "QPageSetupDialog",
  methods_QPageSetupDialog_Adaptor (),
  "@qt\n@brief Binding of QPageSetupDialog");

}


//  Implementation of the enum wrapper class for QPageSetupDialog::PageSetupDialogOption
namespace qt_gsi
{

static gsi::Enum<QPageSetupDialog::PageSetupDialogOption> decl_QPageSetupDialog_PageSetupDialogOption_Enum ("QtGui", "QPageSetupDialog_PageSetupDialogOption",
    gsi::enum_const ("None", QPageSetupDialog::None, "@brief Enum constant QPageSetupDialog::None") +
    gsi::enum_const ("DontUseSheet", QPageSetupDialog::DontUseSheet, "@brief Enum constant QPageSetupDialog::DontUseSheet") +
    gsi::enum_const ("OwnsPrinter", QPageSetupDialog::OwnsPrinter, "@brief Enum constant QPageSetupDialog::OwnsPrinter"),
  "@qt\n@brief This class represents the QPageSetupDialog::PageSetupDialogOption enum");

static gsi::QFlagsClass<QPageSetupDialog::PageSetupDialogOption > decl_QPageSetupDialog_PageSetupDialogOption_Enums ("QtGui", "QPageSetupDialog_QFlags_PageSetupDialogOption",
  "@qt\n@brief This class represents the QFlags<QPageSetupDialog::PageSetupDialogOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPageSetupDialog> inject_QPageSetupDialog_PageSetupDialogOption_Enum_in_parent (decl_QPageSetupDialog_PageSetupDialogOption_Enum.defs ());
static gsi::ClassExt<QPageSetupDialog> decl_QPageSetupDialog_PageSetupDialogOption_Enum_as_child (decl_QPageSetupDialog_PageSetupDialogOption_Enum, "PageSetupDialogOption");
static gsi::ClassExt<QPageSetupDialog> decl_QPageSetupDialog_PageSetupDialogOption_Enums_as_child (decl_QPageSetupDialog_PageSetupDialogOption_Enums, "QFlags_PageSetupDialogOption");

}

