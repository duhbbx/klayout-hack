
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

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
*  @file gsiDeclQSignalMapper.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSignalMapper>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSignalMapper

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSignalMapper::staticMetaObject);
}


// void QSignalMapper::map()


static void _init_f_map_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_map_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->map ();
}


// void QSignalMapper::map(QObject *sender)


static void _init_f_map_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_map_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->map (arg1);
}


// QObject *QSignalMapper::mapping(int id)


static void _init_f_mapping_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QObject * > ();
}

static void _call_f_mapping_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QObject * > ((QObject *)((QSignalMapper *)cls)->mapping (arg1));
}


// QObject *QSignalMapper::mapping(const QString &text)


static void _init_f_mapping_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QObject * > ();
}

static void _call_f_mapping_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QObject * > ((QObject *)((QSignalMapper *)cls)->mapping (arg1));
}


// QObject *QSignalMapper::mapping(QWidget *widget)


static void _init_f_mapping_c1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("widget");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<QObject * > ();
}

static void _call_f_mapping_c1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ret.write<QObject * > ((QObject *)((QSignalMapper *)cls)->mapping (arg1));
}


// QObject *QSignalMapper::mapping(QObject *object)


static void _init_f_mapping_c1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<QObject * > ();
}

static void _call_f_mapping_c1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QObject * > ((QObject *)((QSignalMapper *)cls)->mapping (arg1));
}


// void QSignalMapper::removeMappings(QObject *sender)


static void _init_f_removeMappings_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeMappings_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->removeMappings (arg1);
}


// void QSignalMapper::setMapping(QObject *sender, int id)


static void _init_f_setMapping_1961 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("id");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setMapping_1961 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->setMapping (arg1, arg2);
}


// void QSignalMapper::setMapping(QObject *sender, const QString &text)


static void _init_f_setMapping_3219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setMapping_3219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->setMapping (arg1, arg2);
}


// void QSignalMapper::setMapping(QObject *sender, QWidget *widget)


static void _init_f_setMapping_2509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("widget");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setMapping_2509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  QWidget *arg2 = gsi::arg_reader<QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->setMapping (arg1, arg2);
}


// void QSignalMapper::setMapping(QObject *sender, QObject *object)


static void _init_f_setMapping_2496 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("object");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setMapping_2496 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper *)cls)->setMapping (arg1, arg2);
}


// static QString QSignalMapper::tr(const char *s, const char *c)


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
  ret.write<QString > ((QString)QSignalMapper::tr (arg1, arg2));
}


// static QString QSignalMapper::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSignalMapper::tr (arg1, arg2, arg3));
}


// static QString QSignalMapper::trUtf8(const char *s, const char *c)


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
  ret.write<QString > ((QString)QSignalMapper::trUtf8 (arg1, arg2));
}


// static QString QSignalMapper::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSignalMapper::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QSignalMapper () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method void QSignalMapper::map()\n", false, &_init_f_map_0, &_call_f_map_0);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method void QSignalMapper::map(QObject *sender)\n", false, &_init_f_map_1302, &_call_f_map_1302);
  methods += new qt_gsi::GenericMethod ("mapping", "@brief Method QObject *QSignalMapper::mapping(int id)\n", true, &_init_f_mapping_c767, &_call_f_mapping_c767);
  methods += new qt_gsi::GenericMethod ("mapping", "@brief Method QObject *QSignalMapper::mapping(const QString &text)\n", true, &_init_f_mapping_c2025, &_call_f_mapping_c2025);
  methods += new qt_gsi::GenericMethod ("mapping", "@brief Method QObject *QSignalMapper::mapping(QWidget *widget)\n", true, &_init_f_mapping_c1315, &_call_f_mapping_c1315);
  methods += new qt_gsi::GenericMethod ("mapping", "@brief Method QObject *QSignalMapper::mapping(QObject *object)\n", true, &_init_f_mapping_c1302, &_call_f_mapping_c1302);
  methods += new qt_gsi::GenericMethod ("removeMappings", "@brief Method void QSignalMapper::removeMappings(QObject *sender)\n", false, &_init_f_removeMappings_1302, &_call_f_removeMappings_1302);
  methods += new qt_gsi::GenericMethod ("setMapping", "@brief Method void QSignalMapper::setMapping(QObject *sender, int id)\n", false, &_init_f_setMapping_1961, &_call_f_setMapping_1961);
  methods += new qt_gsi::GenericMethod ("setMapping", "@brief Method void QSignalMapper::setMapping(QObject *sender, const QString &text)\n", false, &_init_f_setMapping_3219, &_call_f_setMapping_3219);
  methods += new qt_gsi::GenericMethod ("setMapping", "@brief Method void QSignalMapper::setMapping(QObject *sender, QWidget *widget)\n", false, &_init_f_setMapping_2509, &_call_f_setMapping_2509);
  methods += new qt_gsi::GenericMethod ("setMapping", "@brief Method void QSignalMapper::setMapping(QObject *sender, QObject *object)\n", false, &_init_f_setMapping_2496, &_call_f_setMapping_2496);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QSignalMapper::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("mapped(int)", "mapped", gsi::arg("arg1"), "@brief Signal declaration for QSignalMapper::mapped(int)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("mapped(const QString &)", "mapped_qs", gsi::arg("arg1"), "@brief Signal declaration for QSignalMapper::mapped(const QString &)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QWidget * > ("mapped(QWidget *)", "mapped_qw", gsi::arg("arg1"), "@brief Signal declaration for QSignalMapper::mapped(QWidget *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("mapped(QObject *)", "mapped_qo", gsi::arg("arg1"), "@brief Signal declaration for QSignalMapper::mapped(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSignalMapper::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSignalMapper::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSignalMapper::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSignalMapper::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QSignalMapper> decl_QSignalMapper (qtdecl_QObject (), "QtCore", "QSignalMapper_Native",
  methods_QSignalMapper (),
  "@hide\n@alias QSignalMapper");

GSI_QTCORE_PUBLIC gsi::Class<QSignalMapper> &qtdecl_QSignalMapper () { return decl_QSignalMapper; }

}


class QSignalMapper_Adaptor : public QSignalMapper, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSignalMapper_Adaptor();

  //  [adaptor ctor] QSignalMapper::QSignalMapper(QObject *parent)
  QSignalMapper_Adaptor() : QSignalMapper()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSignalMapper::QSignalMapper(QObject *parent)
  QSignalMapper_Adaptor(QObject *parent) : QSignalMapper(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QSignalMapper::receivers(const char *signal)
  int fp_QSignalMapper_receivers_c1731 (const char *signal) const {
    return QSignalMapper::receivers(signal);
  }

  //  [expose] QObject *QSignalMapper::sender()
  QObject * fp_QSignalMapper_sender_c0 () const {
    return QSignalMapper::sender();
  }

  //  [adaptor impl] bool QSignalMapper::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QSignalMapper::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QSignalMapper_Adaptor, bool, QEvent *>(&QSignalMapper_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QSignalMapper::event(arg1);
    }
  }

  //  [adaptor impl] bool QSignalMapper::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QSignalMapper::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QSignalMapper_Adaptor, bool, QObject *, QEvent *>(&QSignalMapper_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QSignalMapper::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QSignalMapper::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QSignalMapper::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QSignalMapper_Adaptor, QChildEvent *>(&QSignalMapper_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QSignalMapper::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QSignalMapper::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QSignalMapper::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QSignalMapper_Adaptor, QEvent *>(&QSignalMapper_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QSignalMapper::customEvent(arg1);
    }
  }

  //  [emitter impl] void QSignalMapper::destroyed(QObject *)
  void emitter_QSignalMapper_destroyed_1302(QObject *arg1)
  {
    emit QSignalMapper::destroyed(arg1);
  }

  //  [adaptor impl] void QSignalMapper::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QSignalMapper::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QSignalMapper_Adaptor, const char *>(&QSignalMapper_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QSignalMapper::disconnectNotify(signal);
    }
  }

  //  [emitter impl] void QSignalMapper::mapped(int)
  void emitter_QSignalMapper_mapped_767(int arg1)
  {
    emit QSignalMapper::mapped(arg1);
  }

  //  [emitter impl] void QSignalMapper::mapped(const QString &)
  void emitter_QSignalMapper_mapped_2025(const QString &arg1)
  {
    emit QSignalMapper::mapped(arg1);
  }

  //  [emitter impl] void QSignalMapper::mapped(QWidget *)
  void emitter_QSignalMapper_mapped_1315(QWidget *arg1)
  {
    emit QSignalMapper::mapped(arg1);
  }

  //  [emitter impl] void QSignalMapper::mapped(QObject *)
  void emitter_QSignalMapper_mapped_1302(QObject *arg1)
  {
    emit QSignalMapper::mapped(arg1);
  }

  //  [adaptor impl] void QSignalMapper::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QSignalMapper::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QSignalMapper_Adaptor, QTimerEvent *>(&QSignalMapper_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QSignalMapper::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QSignalMapper_Adaptor::~QSignalMapper_Adaptor() { }

//  Constructor QSignalMapper::QSignalMapper(QObject *parent) (adaptor class)

static void _init_ctor_QSignalMapper_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QSignalMapper_Adaptor> ();
}

static void _call_ctor_QSignalMapper_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QSignalMapper_Adaptor *> (new QSignalMapper_Adaptor (arg1));
}


// void QSignalMapper::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalMapper_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QSignalMapper::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalMapper_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QSignalMapper::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QSignalMapper_Adaptor *)cls)->emitter_QSignalMapper_destroyed_1302 (arg1);
}


// void QSignalMapper::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalMapper_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QSignalMapper::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QSignalMapper_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalMapper_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QSignalMapper::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QSignalMapper_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalMapper_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QSignalMapper::mapped(int)

static void _init_emitter_mapped_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_mapped_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QSignalMapper_Adaptor *)cls)->emitter_QSignalMapper_mapped_767 (arg1);
}


// emitter void QSignalMapper::mapped(const QString &)

static void _init_emitter_mapped_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_mapped_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QSignalMapper_Adaptor *)cls)->emitter_QSignalMapper_mapped_2025 (arg1);
}


// emitter void QSignalMapper::mapped(QWidget *)

static void _init_emitter_mapped_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_mapped_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ((QSignalMapper_Adaptor *)cls)->emitter_QSignalMapper_mapped_1315 (arg1);
}


// emitter void QSignalMapper::mapped(QObject *)

static void _init_emitter_mapped_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_mapped_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ((QSignalMapper_Adaptor *)cls)->emitter_QSignalMapper_mapped_1302 (arg1);
}


// exposed int QSignalMapper::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QSignalMapper_Adaptor *)cls)->fp_QSignalMapper_receivers_c1731 (arg1));
}


// exposed QObject *QSignalMapper::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSignalMapper_Adaptor *)cls)->fp_QSignalMapper_sender_c0 ());
}


// void QSignalMapper::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalMapper_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalMapper_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QSignalMapper> &qtdecl_QSignalMapper ();

static gsi::Methods methods_QSignalMapper_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSignalMapper::QSignalMapper(QObject *parent)\nThis method creates an object of class QSignalMapper.", &_init_ctor_QSignalMapper_Adaptor_1302, &_call_ctor_QSignalMapper_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QSignalMapper::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QSignalMapper::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QSignalMapper::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QSignalMapper::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QSignalMapper::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QSignalMapper::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_mapped", "@brief Emitter for signal void QSignalMapper::mapped(int)\nCall this method to emit this signal.", false, &_init_emitter_mapped_767, &_call_emitter_mapped_767);
  methods += new qt_gsi::GenericMethod ("emit_mapped_qs", "@brief Emitter for signal void QSignalMapper::mapped(const QString &)\nCall this method to emit this signal.", false, &_init_emitter_mapped_2025, &_call_emitter_mapped_2025);
  methods += new qt_gsi::GenericMethod ("emit_mapped_qw", "@brief Emitter for signal void QSignalMapper::mapped(QWidget *)\nCall this method to emit this signal.", false, &_init_emitter_mapped_1315, &_call_emitter_mapped_1315);
  methods += new qt_gsi::GenericMethod ("emit_mapped_qo", "@brief Emitter for signal void QSignalMapper::mapped(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_mapped_1302, &_call_emitter_mapped_1302);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QSignalMapper::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QSignalMapper::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QSignalMapper::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QSignalMapper_Adaptor> decl_QSignalMapper_Adaptor (qtdecl_QSignalMapper (), "QtCore", "QSignalMapper",
  methods_QSignalMapper_Adaptor (),
  "@qt\n@brief Binding of QSignalMapper");

}

