
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
*  @file gsiDeclQAudioSink.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioSink>
#include <QAudioDevice>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioSink

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioSink::staticMetaObject);
}


// qsizetype QAudioSink::bufferSize()


static void _init_f_bufferSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_bufferSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAudioSink *)cls)->bufferSize ());
}


// qsizetype QAudioSink::bytesFree()


static void _init_f_bytesFree_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_bytesFree_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAudioSink *)cls)->bytesFree ());
}


// qint64 QAudioSink::elapsedUSecs()


static void _init_f_elapsedUSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_elapsedUSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioSink *)cls)->elapsedUSecs ());
}


// QAudio::Error QAudioSink::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::Error>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::Error>::target_type > ((qt_gsi::Converter<QAudio::Error>::target_type)qt_gsi::CppToQtAdaptor<QAudio::Error>(((QAudioSink *)cls)->error ()));
}


// QAudioFormat QAudioSink::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat > ((QAudioFormat)((QAudioSink *)cls)->format ());
}


// bool QAudioSink::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioSink *)cls)->isNull ());
}


// qint64 QAudioSink::processedUSecs()


static void _init_f_processedUSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_processedUSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioSink *)cls)->processedUSecs ());
}


// void QAudioSink::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->reset ();
}


// void QAudioSink::resume()


static void _init_f_resume_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_resume_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->resume ();
}


// void QAudioSink::setBufferSize(qsizetype bytes)


static void _init_f_setBufferSize_1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bytes");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBufferSize_1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->setBufferSize (arg1);
}


// void QAudioSink::setVolume(double)


static void _init_f_setVolume_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVolume_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->setVolume (arg1);
}


// void QAudioSink::start(QIODevice *device)


static void _init_f_start_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_start_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->start (arg1);
}


// QIODevice *QAudioSink::start()


static void _init_f_start_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_start_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QAudioSink *)cls)->start ());
}


// QAudio::State QAudioSink::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::State>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::State>::target_type > ((qt_gsi::Converter<QAudio::State>::target_type)qt_gsi::CppToQtAdaptor<QAudio::State>(((QAudioSink *)cls)->state ()));
}


// void QAudioSink::stop()


static void _init_f_stop_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_stop_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->stop ();
}


// void QAudioSink::suspend()


static void _init_f_suspend_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_suspend_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSink *)cls)->suspend ();
}


// double QAudioSink::volume()


static void _init_f_volume_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_volume_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QAudioSink *)cls)->volume ());
}


// static QString QAudioSink::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioSink::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioSink () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":bufferSize", "@brief Method qsizetype QAudioSink::bufferSize()\n", true, &_init_f_bufferSize_c0, &_call_f_bufferSize_c0);
  methods += new qt_gsi::GenericMethod ("bytesFree", "@brief Method qsizetype QAudioSink::bytesFree()\n", true, &_init_f_bytesFree_c0, &_call_f_bytesFree_c0);
  methods += new qt_gsi::GenericMethod ("elapsedUSecs", "@brief Method qint64 QAudioSink::elapsedUSecs()\n", true, &_init_f_elapsedUSecs_c0, &_call_f_elapsedUSecs_c0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QAudio::Error QAudioSink::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("format", "@brief Method QAudioFormat QAudioSink::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QAudioSink::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("processedUSecs", "@brief Method qint64 QAudioSink::processedUSecs()\n", true, &_init_f_processedUSecs_c0, &_call_f_processedUSecs_c0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QAudioSink::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("resume", "@brief Method void QAudioSink::resume()\n", false, &_init_f_resume_0, &_call_f_resume_0);
  methods += new qt_gsi::GenericMethod ("setBufferSize|bufferSize=", "@brief Method void QAudioSink::setBufferSize(qsizetype bytes)\n", false, &_init_f_setBufferSize_1442, &_call_f_setBufferSize_1442);
  methods += new qt_gsi::GenericMethod ("setVolume|volume=", "@brief Method void QAudioSink::setVolume(double)\n", false, &_init_f_setVolume_1071, &_call_f_setVolume_1071);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QAudioSink::start(QIODevice *device)\n", false, &_init_f_start_1447, &_call_f_start_1447);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method QIODevice *QAudioSink::start()\n", false, &_init_f_start_0, &_call_f_start_0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QAudio::State QAudioSink::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("stop", "@brief Method void QAudioSink::stop()\n", false, &_init_f_stop_0, &_call_f_stop_0);
  methods += new qt_gsi::GenericMethod ("suspend", "@brief Method void QAudioSink::suspend()\n", false, &_init_f_suspend_0, &_call_f_suspend_0);
  methods += new qt_gsi::GenericMethod (":volume", "@brief Method double QAudioSink::volume()\n", true, &_init_f_volume_c0, &_call_f_volume_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAudioSink::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QAudioSink::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QAudio::State>::target_type & > ("stateChanged(QAudio::State)", "stateChanged", gsi::arg("state"), "@brief Signal declaration for QAudioSink::stateChanged(QAudio::State state)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioSink::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAudioSink> decl_QAudioSink (qtdecl_QObject (), "QtMultimedia", "QAudioSink_Native",
  methods_QAudioSink (),
  "@hide\n@alias QAudioSink");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioSink> &qtdecl_QAudioSink () { return decl_QAudioSink; }

}


class QAudioSink_Adaptor : public QAudioSink, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioSink_Adaptor();

  //  [adaptor ctor] QAudioSink::QAudioSink(const QAudioFormat &format, QObject *parent)
  QAudioSink_Adaptor() : QAudioSink()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSink::QAudioSink(const QAudioFormat &format, QObject *parent)
  QAudioSink_Adaptor(const QAudioFormat &format) : QAudioSink(format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSink::QAudioSink(const QAudioFormat &format, QObject *parent)
  QAudioSink_Adaptor(const QAudioFormat &format, QObject *parent) : QAudioSink(format, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSink::QAudioSink(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioSink_Adaptor(const QAudioDevice &audioDeviceInfo) : QAudioSink(audioDeviceInfo)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSink::QAudioSink(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioSink_Adaptor(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format) : QAudioSink(audioDeviceInfo, format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSink::QAudioSink(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioSink_Adaptor(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent) : QAudioSink(audioDeviceInfo, format, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioSink::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioSink_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioSink::isSignalConnected(signal);
  }

  //  [expose] int QAudioSink::receivers(const char *signal)
  int fp_QAudioSink_receivers_c1731 (const char *signal) const {
    return QAudioSink::receivers(signal);
  }

  //  [expose] QObject *QAudioSink::sender()
  QObject * fp_QAudioSink_sender_c0 () const {
    return QAudioSink::sender();
  }

  //  [expose] int QAudioSink::senderSignalIndex()
  int fp_QAudioSink_senderSignalIndex_c0 () const {
    return QAudioSink::senderSignalIndex();
  }

  //  [emitter impl] void QAudioSink::destroyed(QObject *)
  void emitter_QAudioSink_destroyed_1302(QObject *arg1)
  {
    emit QAudioSink::destroyed(arg1);
  }

  //  [adaptor impl] bool QAudioSink::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QAudioSink::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioSink_Adaptor, bool, QEvent *>(&QAudioSink_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QAudioSink::event(_event);
    }
  }

  //  [adaptor impl] bool QAudioSink::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QAudioSink::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioSink_Adaptor, bool, QObject *, QEvent *>(&QAudioSink_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QAudioSink::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QAudioSink::objectNameChanged(const QString &objectName)
  void emitter_QAudioSink_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QAudioSink::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QAudioSink::stateChanged(QAudio::State state)
  void emitter_QAudioSink_stateChanged_1644(QAudio::State state)
  {
    emit QAudioSink::stateChanged(state);
  }

  //  [adaptor impl] void QAudioSink::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QAudioSink::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioSink_Adaptor, QChildEvent *>(&QAudioSink_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QAudioSink::childEvent(event);
    }
  }

  //  [adaptor impl] void QAudioSink::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QAudioSink::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioSink_Adaptor, QEvent *>(&QAudioSink_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QAudioSink::customEvent(event);
    }
  }

  //  [adaptor impl] void QAudioSink::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioSink::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioSink_Adaptor, const QMetaMethod &>(&QAudioSink_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioSink::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioSink::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QAudioSink::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioSink_Adaptor, QTimerEvent *>(&QAudioSink_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QAudioSink::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioSink_Adaptor::~QAudioSink_Adaptor() { }

//  Constructor QAudioSink::QAudioSink(const QAudioFormat &format, QObject *parent) (adaptor class)

static void _init_ctor_QAudioSink_Adaptor_3703 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format", true, "QAudioFormat()");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QAudioSink_Adaptor> ();
}

static void _call_ctor_QAudioSink_Adaptor_3703 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = args ? gsi::arg_reader<const QAudioFormat & >() (args, heap) : gsi::arg_maker<const QAudioFormat & >() (QAudioFormat(), heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioSink_Adaptor *> (new QAudioSink_Adaptor (arg1, arg2));
}


//  Constructor QAudioSink::QAudioSink(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent) (adaptor class)

static void _init_ctor_QAudioSink_Adaptor_6079 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("audioDeviceInfo");
  decl->add_arg<const QAudioDevice & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QAudioFormat()");
  decl->add_arg<const QAudioFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return_new<QAudioSink_Adaptor> ();
}

static void _call_ctor_QAudioSink_Adaptor_6079 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDevice &arg1 = gsi::arg_reader<const QAudioDevice & >() (args, heap);
  const QAudioFormat &arg2 = args ? gsi::arg_reader<const QAudioFormat & >() (args, heap) : gsi::arg_maker<const QAudioFormat & >() (QAudioFormat(), heap);
  QObject *arg3 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioSink_Adaptor *> (new QAudioSink_Adaptor (arg1, arg2, arg3));
}


// void QAudioSink::childEvent(QChildEvent *event)

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
  ((QAudioSink_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSink_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioSink::customEvent(QEvent *event)

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
  ((QAudioSink_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSink_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QAudioSink::destroyed(QObject *)

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
  ((QAudioSink_Adaptor *)cls)->emitter_QAudioSink_destroyed_1302 (arg1);
}


// void QAudioSink::disconnectNotify(const QMetaMethod &signal)

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
  ((QAudioSink_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSink_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioSink::event(QEvent *event)

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
  ret.write<bool > ((bool)((QAudioSink_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSink_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioSink::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QAudioSink_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSink_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioSink::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAudioSink_Adaptor *)cls)->fp_QAudioSink_isSignalConnected_c2394 (arg1));
}


// emitter void QAudioSink::objectNameChanged(const QString &objectName)

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
  ((QAudioSink_Adaptor *)cls)->emitter_QAudioSink_objectNameChanged_4567 (arg1);
}


// exposed int QAudioSink::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioSink_Adaptor *)cls)->fp_QAudioSink_receivers_c1731 (arg1));
}


// exposed QObject *QAudioSink::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioSink_Adaptor *)cls)->fp_QAudioSink_sender_c0 ());
}


// exposed int QAudioSink::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioSink_Adaptor *)cls)->fp_QAudioSink_senderSignalIndex_c0 ());
}


// emitter void QAudioSink::stateChanged(QAudio::State state)

static void _init_emitter_stateChanged_1644 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<const qt_gsi::Converter<QAudio::State>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_stateChanged_1644 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::State>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudio::State>::target_type & >() (args, heap);
  ((QAudioSink_Adaptor *)cls)->emitter_QAudioSink_stateChanged_1644 (arg1);
}


// void QAudioSink::timerEvent(QTimerEvent *event)

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
  ((QAudioSink_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSink_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioSink> &qtdecl_QAudioSink ();

static gsi::Methods methods_QAudioSink_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioSink::QAudioSink(const QAudioFormat &format, QObject *parent)\nThis method creates an object of class QAudioSink.", &_init_ctor_QAudioSink_Adaptor_3703, &_call_ctor_QAudioSink_Adaptor_3703);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioSink::QAudioSink(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)\nThis method creates an object of class QAudioSink.", &_init_ctor_QAudioSink_Adaptor_6079, &_call_ctor_QAudioSink_Adaptor_6079);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioSink::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioSink::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAudioSink::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioSink::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioSink::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioSink::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioSink::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QAudioSink::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioSink::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioSink::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioSink::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("emit_stateChanged", "@brief Emitter for signal void QAudioSink::stateChanged(QAudio::State state)\nCall this method to emit this signal.", false, &_init_emitter_stateChanged_1644, &_call_emitter_stateChanged_1644);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioSink::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioSink_Adaptor> decl_QAudioSink_Adaptor (qtdecl_QAudioSink (), "QtMultimedia", "QAudioSink",
  methods_QAudioSink_Adaptor (),
  "@qt\n@brief Binding of QAudioSink");

}

