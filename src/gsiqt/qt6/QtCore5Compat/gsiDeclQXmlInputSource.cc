
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

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
*  @file gsiDeclQXmlInputSource.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlInputSource>
#include <QIODevice>
#include "gsiQt.h"
#include "gsiQtCore5CompatCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlInputSource

// QString QXmlInputSource::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlInputSource *)cls)->data ());
}


// void QXmlInputSource::fetchData()


static void _init_f_fetchData_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_fetchData_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlInputSource *)cls)->fetchData ();
}


// QChar QXmlInputSource::next()


static void _init_f_next_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_next_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(((QXmlInputSource *)cls)->next ()));
}


// void QXmlInputSource::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlInputSource *)cls)->reset ();
}


// void QXmlInputSource::setData(const QString &dat)


static void _init_f_setData_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dat");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setData_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlInputSource *)cls)->setData (arg1);
}


namespace gsi
{

static gsi::Methods methods_QXmlInputSource () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("data", "@brief Method QString QXmlInputSource::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("fetchData", "@brief Method void QXmlInputSource::fetchData()\n", false, &_init_f_fetchData_0, &_call_f_fetchData_0);
  methods += new qt_gsi::GenericMethod ("next", "@brief Method QChar QXmlInputSource::next()\n", false, &_init_f_next_0, &_call_f_next_0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QXmlInputSource::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("setData", "@brief Method void QXmlInputSource::setData(const QString &dat)\n", false, &_init_f_setData_2025, &_call_f_setData_2025);
  return methods;
}

gsi::Class<QXmlInputSource> decl_QXmlInputSource ("QtCore5Compat", "QXmlInputSource_Native",
  methods_QXmlInputSource (),
  "@hide\n@alias QXmlInputSource");

GSI_QTCORE5COMPAT_PUBLIC gsi::Class<QXmlInputSource> &qtdecl_QXmlInputSource () { return decl_QXmlInputSource; }

}


class QXmlInputSource_Adaptor : public QXmlInputSource, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlInputSource_Adaptor();

  //  [adaptor ctor] QXmlInputSource::QXmlInputSource()
  QXmlInputSource_Adaptor() : QXmlInputSource()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QXmlInputSource::QXmlInputSource(QIODevice *dev)
  QXmlInputSource_Adaptor(QIODevice *dev) : QXmlInputSource(dev)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QString QXmlInputSource::data()
  QString cbs_data_c0_0() const
  {
    return QXmlInputSource::data();
  }

  virtual QString data() const
  {
    if (cb_data_c0_0.can_issue()) {
      return cb_data_c0_0.issue<QXmlInputSource_Adaptor, QString>(&QXmlInputSource_Adaptor::cbs_data_c0_0);
    } else {
      return QXmlInputSource::data();
    }
  }

  //  [adaptor impl] void QXmlInputSource::fetchData()
  void cbs_fetchData_0_0()
  {
    QXmlInputSource::fetchData();
  }

  virtual void fetchData()
  {
    if (cb_fetchData_0_0.can_issue()) {
      cb_fetchData_0_0.issue<QXmlInputSource_Adaptor>(&QXmlInputSource_Adaptor::cbs_fetchData_0_0);
    } else {
      QXmlInputSource::fetchData();
    }
  }

  //  [adaptor impl] QChar QXmlInputSource::next()
  qt_gsi::Converter<QChar>::target_type cbs_next_0_0()
  {
    return qt_gsi::CppToQtAdaptor<QChar>(QXmlInputSource::next());
  }

  virtual QChar next()
  {
    if (cb_next_0_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QChar>(cb_next_0_0.issue<QXmlInputSource_Adaptor, qt_gsi::Converter<QChar>::target_type>(&QXmlInputSource_Adaptor::cbs_next_0_0)).cref();
    } else {
      return QXmlInputSource::next();
    }
  }

  //  [adaptor impl] void QXmlInputSource::reset()
  void cbs_reset_0_0()
  {
    QXmlInputSource::reset();
  }

  virtual void reset()
  {
    if (cb_reset_0_0.can_issue()) {
      cb_reset_0_0.issue<QXmlInputSource_Adaptor>(&QXmlInputSource_Adaptor::cbs_reset_0_0);
    } else {
      QXmlInputSource::reset();
    }
  }

  //  [adaptor impl] void QXmlInputSource::setData(const QString &dat)
  void cbs_setData_2025_0(const QString &dat)
  {
    QXmlInputSource::setData(dat);
  }

  virtual void setData(const QString &dat)
  {
    if (cb_setData_2025_0.can_issue()) {
      cb_setData_2025_0.issue<QXmlInputSource_Adaptor, const QString &>(&QXmlInputSource_Adaptor::cbs_setData_2025_0, dat);
    } else {
      QXmlInputSource::setData(dat);
    }
  }

  //  [adaptor impl] QString QXmlInputSource::fromRawData(const QByteArray &data, bool beginning)
  QString cbs_fromRawData_3065_1(const QByteArray &data, bool beginning)
  {
    return QXmlInputSource::fromRawData(data, beginning);
  }

  virtual QString fromRawData(const QByteArray &data, bool beginning)
  {
    if (cb_fromRawData_3065_1.can_issue()) {
      return cb_fromRawData_3065_1.issue<QXmlInputSource_Adaptor, QString, const QByteArray &, bool>(&QXmlInputSource_Adaptor::cbs_fromRawData_3065_1, data, beginning);
    } else {
      return QXmlInputSource::fromRawData(data, beginning);
    }
  }

  gsi::Callback cb_data_c0_0;
  gsi::Callback cb_fetchData_0_0;
  gsi::Callback cb_next_0_0;
  gsi::Callback cb_reset_0_0;
  gsi::Callback cb_setData_2025_0;
  gsi::Callback cb_fromRawData_3065_1;
};

QXmlInputSource_Adaptor::~QXmlInputSource_Adaptor() { }

//  Constructor QXmlInputSource::QXmlInputSource() (adaptor class)

static void _init_ctor_QXmlInputSource_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlInputSource_Adaptor> ();
}

static void _call_ctor_QXmlInputSource_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlInputSource_Adaptor *> (new QXmlInputSource_Adaptor ());
}


//  Constructor QXmlInputSource::QXmlInputSource(QIODevice *dev) (adaptor class)

static void _init_ctor_QXmlInputSource_Adaptor_1447 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return_new<QXmlInputSource_Adaptor> ();
}

static void _call_ctor_QXmlInputSource_Adaptor_1447 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<QXmlInputSource_Adaptor *> (new QXmlInputSource_Adaptor (arg1));
}


// QString QXmlInputSource::data()

static void _init_cbs_data_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_data_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlInputSource_Adaptor *)cls)->cbs_data_c0_0 ());
}

static void _set_callback_cbs_data_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlInputSource_Adaptor *)cls)->cb_data_c0_0 = cb;
}


// void QXmlInputSource::fetchData()

static void _init_cbs_fetchData_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_fetchData_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlInputSource_Adaptor *)cls)->cbs_fetchData_0_0 ();
}

static void _set_callback_cbs_fetchData_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlInputSource_Adaptor *)cls)->cb_fetchData_0_0 = cb;
}


// QString QXmlInputSource::fromRawData(const QByteArray &data, bool beginning)

static void _init_cbs_fromRawData_3065_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("beginning");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_cbs_fromRawData_3065_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  bool arg2 = args.read<bool > (heap);
  ret.write<QString > ((QString)((QXmlInputSource_Adaptor *)cls)->cbs_fromRawData_3065_1 (arg1, arg2));
}

static void _set_callback_cbs_fromRawData_3065_1 (void *cls, const gsi::Callback &cb)
{
  ((QXmlInputSource_Adaptor *)cls)->cb_fromRawData_3065_1 = cb;
}


// QChar QXmlInputSource::next()

static void _init_cbs_next_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_cbs_next_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)((QXmlInputSource_Adaptor *)cls)->cbs_next_0_0 ());
}

static void _set_callback_cbs_next_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlInputSource_Adaptor *)cls)->cb_next_0_0 = cb;
}


// void QXmlInputSource::reset()

static void _init_cbs_reset_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_reset_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlInputSource_Adaptor *)cls)->cbs_reset_0_0 ();
}

static void _set_callback_cbs_reset_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlInputSource_Adaptor *)cls)->cb_reset_0_0 = cb;
}


// void QXmlInputSource::setData(const QString &dat)

static void _init_cbs_setData_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dat");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setData_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlInputSource_Adaptor *)cls)->cbs_setData_2025_0 (arg1);
}

static void _set_callback_cbs_setData_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlInputSource_Adaptor *)cls)->cb_setData_2025_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlInputSource> &qtdecl_QXmlInputSource ();

static gsi::Methods methods_QXmlInputSource_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlInputSource::QXmlInputSource()\nThis method creates an object of class QXmlInputSource.", &_init_ctor_QXmlInputSource_Adaptor_0, &_call_ctor_QXmlInputSource_Adaptor_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlInputSource::QXmlInputSource(QIODevice *dev)\nThis method creates an object of class QXmlInputSource.", &_init_ctor_QXmlInputSource_Adaptor_1447, &_call_ctor_QXmlInputSource_Adaptor_1447);
  methods += new qt_gsi::GenericMethod ("data", "@brief Virtual method QString QXmlInputSource::data()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_data_c0_0, &_call_cbs_data_c0_0);
  methods += new qt_gsi::GenericMethod ("data", "@hide", true, &_init_cbs_data_c0_0, &_call_cbs_data_c0_0, &_set_callback_cbs_data_c0_0);
  methods += new qt_gsi::GenericMethod ("fetchData", "@brief Virtual method void QXmlInputSource::fetchData()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_fetchData_0_0, &_call_cbs_fetchData_0_0);
  methods += new qt_gsi::GenericMethod ("fetchData", "@hide", false, &_init_cbs_fetchData_0_0, &_call_cbs_fetchData_0_0, &_set_callback_cbs_fetchData_0_0);
  methods += new qt_gsi::GenericMethod ("*fromRawData", "@brief Virtual method QString QXmlInputSource::fromRawData(const QByteArray &data, bool beginning)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_fromRawData_3065_1, &_call_cbs_fromRawData_3065_1);
  methods += new qt_gsi::GenericMethod ("*fromRawData", "@hide", false, &_init_cbs_fromRawData_3065_1, &_call_cbs_fromRawData_3065_1, &_set_callback_cbs_fromRawData_3065_1);
  methods += new qt_gsi::GenericMethod ("next", "@brief Virtual method QChar QXmlInputSource::next()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_next_0_0, &_call_cbs_next_0_0);
  methods += new qt_gsi::GenericMethod ("next", "@hide", false, &_init_cbs_next_0_0, &_call_cbs_next_0_0, &_set_callback_cbs_next_0_0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Virtual method void QXmlInputSource::reset()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_reset_0_0, &_call_cbs_reset_0_0);
  methods += new qt_gsi::GenericMethod ("reset", "@hide", false, &_init_cbs_reset_0_0, &_call_cbs_reset_0_0, &_set_callback_cbs_reset_0_0);
  methods += new qt_gsi::GenericMethod ("setData", "@brief Virtual method void QXmlInputSource::setData(const QString &dat)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setData_2025_0, &_call_cbs_setData_2025_0);
  methods += new qt_gsi::GenericMethod ("setData", "@hide", false, &_init_cbs_setData_2025_0, &_call_cbs_setData_2025_0, &_set_callback_cbs_setData_2025_0);
  return methods;
}

gsi::Class<QXmlInputSource_Adaptor> decl_QXmlInputSource_Adaptor (qtdecl_QXmlInputSource (), "QtCore5Compat", "QXmlInputSource",
  methods_QXmlInputSource_Adaptor (),
  "@qt\n@brief Binding of QXmlInputSource");

}

