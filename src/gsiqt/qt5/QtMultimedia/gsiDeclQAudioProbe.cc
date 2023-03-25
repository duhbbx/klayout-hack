
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
*  @file gsiDeclQAudioProbe.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioProbe>
#include <QAudioBuffer>
#include <QChildEvent>
#include <QEvent>
#include <QMediaObject>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioProbe

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioProbe::staticMetaObject);
}


// bool QAudioProbe::isActive()


static void _init_f_isActive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isActive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioProbe *)cls)->isActive ());
}


// bool QAudioProbe::setSource(QMediaObject *source)


static void _init_f_setSource_1782 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QMediaObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setSource_1782 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaObject *arg1 = gsi::arg_reader<QMediaObject * >() (args, heap);
  ret.write<bool > ((bool)((QAudioProbe *)cls)->setSource (arg1));
}


// bool QAudioProbe::setSource(QMediaRecorder *source)


static void _init_f_setSource_2005 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QMediaRecorder * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setSource_2005 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaRecorder *arg1 = gsi::arg_reader<QMediaRecorder * >() (args, heap);
  ret.write<bool > ((bool)((QAudioProbe *)cls)->setSource (arg1));
}


// static QString QAudioProbe::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
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
  ret.write<QString > ((QString)QAudioProbe::tr (arg1, arg2, arg3));
}


// static QString QAudioProbe::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAudioProbe::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioProbe () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("isActive?", "@brief Method bool QAudioProbe::isActive()\n", true, &_init_f_isActive_c0, &_call_f_isActive_c0);
  methods += new qt_gsi::GenericMethod ("setSource", "@brief Method bool QAudioProbe::setSource(QMediaObject *source)\n", false, &_init_f_setSource_1782, &_call_f_setSource_1782);
  methods += new qt_gsi::GenericMethod ("setSource", "@brief Method bool QAudioProbe::setSource(QMediaRecorder *source)\n", false, &_init_f_setSource_2005, &_call_f_setSource_2005);
  methods += gsi::qt_signal<const QAudioBuffer & > ("audioBufferProbed(const QAudioBuffer &)", "audioBufferProbed", gsi::arg("buffer"), "@brief Signal declaration for QAudioProbe::audioBufferProbed(const QAudioBuffer &buffer)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAudioProbe::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("flush()", "flush", "@brief Signal declaration for QAudioProbe::flush()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QAudioProbe::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioProbe::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioProbe::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAudioProbe> decl_QAudioProbe (qtdecl_QObject (), "QtMultimedia", "QAudioProbe_Native",
  methods_QAudioProbe (),
  "@hide\n@alias QAudioProbe");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioProbe> &qtdecl_QAudioProbe () { return decl_QAudioProbe; }

}


class QAudioProbe_Adaptor : public QAudioProbe, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioProbe_Adaptor();

  //  [adaptor ctor] QAudioProbe::QAudioProbe(QObject *parent)
  QAudioProbe_Adaptor() : QAudioProbe()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioProbe::QAudioProbe(QObject *parent)
  QAudioProbe_Adaptor(QObject *parent) : QAudioProbe(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioProbe::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioProbe_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioProbe::isSignalConnected(signal);
  }

  //  [expose] int QAudioProbe::receivers(const char *signal)
  int fp_QAudioProbe_receivers_c1731 (const char *signal) const {
    return QAudioProbe::receivers(signal);
  }

  //  [expose] QObject *QAudioProbe::sender()
  QObject * fp_QAudioProbe_sender_c0 () const {
    return QAudioProbe::sender();
  }

  //  [expose] int QAudioProbe::senderSignalIndex()
  int fp_QAudioProbe_senderSignalIndex_c0 () const {
    return QAudioProbe::senderSignalIndex();
  }

  //  [emitter impl] void QAudioProbe::audioBufferProbed(const QAudioBuffer &buffer)
  void emitter_QAudioProbe_audioBufferProbed_2494(const QAudioBuffer &buffer)
  {
    emit QAudioProbe::audioBufferProbed(buffer);
  }

  //  [emitter impl] void QAudioProbe::destroyed(QObject *)
  void emitter_QAudioProbe_destroyed_1302(QObject *arg1)
  {
    emit QAudioProbe::destroyed(arg1);
  }

  //  [adaptor impl] bool QAudioProbe::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QAudioProbe::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioProbe_Adaptor, bool, QEvent *>(&QAudioProbe_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QAudioProbe::event(_event);
    }
  }

  //  [adaptor impl] bool QAudioProbe::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QAudioProbe::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioProbe_Adaptor, bool, QObject *, QEvent *>(&QAudioProbe_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QAudioProbe::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QAudioProbe::flush()
  void emitter_QAudioProbe_flush_0()
  {
    emit QAudioProbe::flush();
  }

  //  [emitter impl] void QAudioProbe::objectNameChanged(const QString &objectName)
  void emitter_QAudioProbe_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QAudioProbe::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QAudioProbe::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QAudioProbe::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioProbe_Adaptor, QChildEvent *>(&QAudioProbe_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QAudioProbe::childEvent(event);
    }
  }

  //  [adaptor impl] void QAudioProbe::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QAudioProbe::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioProbe_Adaptor, QEvent *>(&QAudioProbe_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QAudioProbe::customEvent(event);
    }
  }

  //  [adaptor impl] void QAudioProbe::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioProbe::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioProbe_Adaptor, const QMetaMethod &>(&QAudioProbe_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioProbe::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioProbe::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QAudioProbe::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioProbe_Adaptor, QTimerEvent *>(&QAudioProbe_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QAudioProbe::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioProbe_Adaptor::~QAudioProbe_Adaptor() { }

//  Constructor QAudioProbe::QAudioProbe(QObject *parent) (adaptor class)

static void _init_ctor_QAudioProbe_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QAudioProbe_Adaptor> ();
}

static void _call_ctor_QAudioProbe_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioProbe_Adaptor *> (new QAudioProbe_Adaptor (arg1));
}


// emitter void QAudioProbe::audioBufferProbed(const QAudioBuffer &buffer)

static void _init_emitter_audioBufferProbed_2494 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("buffer");
  decl->add_arg<const QAudioBuffer & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_audioBufferProbed_2494 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioBuffer &arg1 = gsi::arg_reader<const QAudioBuffer & >() (args, heap);
  ((QAudioProbe_Adaptor *)cls)->emitter_QAudioProbe_audioBufferProbed_2494 (arg1);
}


// void QAudioProbe::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioProbe_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioProbe_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioProbe::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioProbe_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioProbe_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QAudioProbe::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QAudioProbe_Adaptor *)cls)->emitter_QAudioProbe_destroyed_1302 (arg1);
}


// void QAudioProbe::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioProbe_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioProbe_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioProbe::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioProbe_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioProbe_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioProbe::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioProbe_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioProbe_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QAudioProbe::flush()

static void _init_emitter_flush_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_flush_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QAudioProbe_Adaptor *)cls)->emitter_QAudioProbe_flush_0 ();
}


// exposed bool QAudioProbe::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QAudioProbe_Adaptor *)cls)->fp_QAudioProbe_isSignalConnected_c2394 (arg1));
}


// emitter void QAudioProbe::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QAudioProbe_Adaptor *)cls)->emitter_QAudioProbe_objectNameChanged_4567 (arg1);
}


// exposed int QAudioProbe::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioProbe_Adaptor *)cls)->fp_QAudioProbe_receivers_c1731 (arg1));
}


// exposed QObject *QAudioProbe::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioProbe_Adaptor *)cls)->fp_QAudioProbe_sender_c0 ());
}


// exposed int QAudioProbe::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioProbe_Adaptor *)cls)->fp_QAudioProbe_senderSignalIndex_c0 ());
}


// void QAudioProbe::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioProbe_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioProbe_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioProbe> &qtdecl_QAudioProbe ();

static gsi::Methods methods_QAudioProbe_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioProbe::QAudioProbe(QObject *parent)\nThis method creates an object of class QAudioProbe.", &_init_ctor_QAudioProbe_Adaptor_1302, &_call_ctor_QAudioProbe_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("emit_audioBufferProbed", "@brief Emitter for signal void QAudioProbe::audioBufferProbed(const QAudioBuffer &buffer)\nCall this method to emit this signal.", false, &_init_emitter_audioBufferProbed_2494, &_call_emitter_audioBufferProbed_2494);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioProbe::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioProbe::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAudioProbe::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioProbe::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioProbe::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioProbe::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_flush", "@brief Emitter for signal void QAudioProbe::flush()\nCall this method to emit this signal.", false, &_init_emitter_flush_0, &_call_emitter_flush_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioProbe::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QAudioProbe::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioProbe::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioProbe::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioProbe::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioProbe::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioProbe_Adaptor> decl_QAudioProbe_Adaptor (qtdecl_QAudioProbe (), "QtMultimedia", "QAudioProbe",
  methods_QAudioProbe_Adaptor (),
  "@qt\n@brief Binding of QAudioProbe");

}

