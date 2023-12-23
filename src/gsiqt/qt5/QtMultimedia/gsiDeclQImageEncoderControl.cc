
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
*  @file gsiDeclQImageEncoderControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageEncoderControl>
#include <QChildEvent>
#include <QEvent>
#include <QImageEncoderSettings>
#include <QMetaMethod>
#include <QObject>
#include <QSize>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageEncoderControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QImageEncoderControl::staticMetaObject);
}


// QString QImageEncoderControl::imageCodecDescription(const QString &codec)


static void _init_f_imageCodecDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_imageCodecDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QImageEncoderControl *)cls)->imageCodecDescription (arg1));
}


// QImageEncoderSettings QImageEncoderControl::imageSettings()


static void _init_f_imageSettings_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QImageEncoderSettings > ();
}

static void _call_f_imageSettings_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageEncoderSettings > ((QImageEncoderSettings)((QImageEncoderControl *)cls)->imageSettings ());
}


// void QImageEncoderControl::setImageSettings(const QImageEncoderSettings &settings)


static void _init_f_setImageSettings_3430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setImageSettings_3430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = gsi::arg_reader<const QImageEncoderSettings & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderControl *)cls)->setImageSettings (arg1);
}


// QStringList QImageEncoderControl::supportedImageCodecs()


static void _init_f_supportedImageCodecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_supportedImageCodecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QImageEncoderControl *)cls)->supportedImageCodecs ());
}


// QList<QSize> QImageEncoderControl::supportedResolutions(const QImageEncoderSettings &settings, bool *continuous)


static void _init_f_supportedResolutions_c4372 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("continuous", true, "nullptr");
  decl->add_arg<bool * > (argspec_1);
  decl->set_return<QList<QSize> > ();
}

static void _call_f_supportedResolutions_c4372 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = gsi::arg_reader<const QImageEncoderSettings & >() (args, heap);
  bool *arg2 = args ? gsi::arg_reader<bool * >() (args, heap) : gsi::arg_maker<bool * >() (nullptr, heap);
  ret.write<QList<QSize> > ((QList<QSize>)((QImageEncoderControl *)cls)->supportedResolutions (arg1, arg2));
}


// static QString QImageEncoderControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QImageEncoderControl::tr (arg1, arg2, arg3));
}


// static QString QImageEncoderControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QImageEncoderControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QImageEncoderControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("imageCodecDescription", "@brief Method QString QImageEncoderControl::imageCodecDescription(const QString &codec)\n", true, &_init_f_imageCodecDescription_c2025, &_call_f_imageCodecDescription_c2025);
  methods += new qt_gsi::GenericMethod (":imageSettings", "@brief Method QImageEncoderSettings QImageEncoderControl::imageSettings()\n", true, &_init_f_imageSettings_c0, &_call_f_imageSettings_c0);
  methods += new qt_gsi::GenericMethod ("setImageSettings|imageSettings=", "@brief Method void QImageEncoderControl::setImageSettings(const QImageEncoderSettings &settings)\n", false, &_init_f_setImageSettings_3430, &_call_f_setImageSettings_3430);
  methods += new qt_gsi::GenericMethod ("supportedImageCodecs", "@brief Method QStringList QImageEncoderControl::supportedImageCodecs()\n", true, &_init_f_supportedImageCodecs_c0, &_call_f_supportedImageCodecs_c0);
  methods += new qt_gsi::GenericMethod ("supportedResolutions", "@brief Method QList<QSize> QImageEncoderControl::supportedResolutions(const QImageEncoderSettings &settings, bool *continuous)\n", true, &_init_f_supportedResolutions_c4372, &_call_f_supportedResolutions_c4372);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QImageEncoderControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QImageEncoderControl::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QImageEncoderControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QImageEncoderControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QImageEncoderControl> decl_QImageEncoderControl (qtdecl_QMediaControl (), "QtMultimedia", "QImageEncoderControl_Native",
  methods_QImageEncoderControl (),
  "@hide\n@alias QImageEncoderControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QImageEncoderControl> &qtdecl_QImageEncoderControl () { return decl_QImageEncoderControl; }

}


class QImageEncoderControl_Adaptor : public QImageEncoderControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QImageEncoderControl_Adaptor();

  //  [adaptor ctor] QImageEncoderControl::QImageEncoderControl()
  QImageEncoderControl_Adaptor() : QImageEncoderControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QImageEncoderControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QImageEncoderControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QImageEncoderControl::isSignalConnected(signal);
  }

  //  [expose] int QImageEncoderControl::receivers(const char *signal)
  int fp_QImageEncoderControl_receivers_c1731 (const char *signal) const {
    return QImageEncoderControl::receivers(signal);
  }

  //  [expose] QObject *QImageEncoderControl::sender()
  QObject * fp_QImageEncoderControl_sender_c0 () const {
    return QImageEncoderControl::sender();
  }

  //  [expose] int QImageEncoderControl::senderSignalIndex()
  int fp_QImageEncoderControl_senderSignalIndex_c0 () const {
    return QImageEncoderControl::senderSignalIndex();
  }

  //  [emitter impl] void QImageEncoderControl::destroyed(QObject *)
  void emitter_QImageEncoderControl_destroyed_1302(QObject *arg1)
  {
    emit QImageEncoderControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QImageEncoderControl::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QImageEncoderControl::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QImageEncoderControl_Adaptor, bool, QEvent *>(&QImageEncoderControl_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QImageEncoderControl::event(_event);
    }
  }

  //  [adaptor impl] bool QImageEncoderControl::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QImageEncoderControl::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QImageEncoderControl_Adaptor, bool, QObject *, QEvent *>(&QImageEncoderControl_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QImageEncoderControl::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] QString QImageEncoderControl::imageCodecDescription(const QString &codec)
  QString cbs_imageCodecDescription_c2025_0(const QString &codec) const
  {
    __SUPPRESS_UNUSED_WARNING (codec);
    throw qt_gsi::AbstractMethodCalledException("imageCodecDescription");
  }

  virtual QString imageCodecDescription(const QString &codec) const
  {
    if (cb_imageCodecDescription_c2025_0.can_issue()) {
      return cb_imageCodecDescription_c2025_0.issue<QImageEncoderControl_Adaptor, QString, const QString &>(&QImageEncoderControl_Adaptor::cbs_imageCodecDescription_c2025_0, codec);
    } else {
      throw qt_gsi::AbstractMethodCalledException("imageCodecDescription");
    }
  }

  //  [adaptor impl] QImageEncoderSettings QImageEncoderControl::imageSettings()
  QImageEncoderSettings cbs_imageSettings_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("imageSettings");
  }

  virtual QImageEncoderSettings imageSettings() const
  {
    if (cb_imageSettings_c0_0.can_issue()) {
      return cb_imageSettings_c0_0.issue<QImageEncoderControl_Adaptor, QImageEncoderSettings>(&QImageEncoderControl_Adaptor::cbs_imageSettings_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("imageSettings");
    }
  }

  //  [emitter impl] void QImageEncoderControl::objectNameChanged(const QString &objectName)
  void emitter_QImageEncoderControl_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QImageEncoderControl::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QImageEncoderControl::setImageSettings(const QImageEncoderSettings &settings)
  void cbs_setImageSettings_3430_0(const QImageEncoderSettings &settings)
  {
    __SUPPRESS_UNUSED_WARNING (settings);
    throw qt_gsi::AbstractMethodCalledException("setImageSettings");
  }

  virtual void setImageSettings(const QImageEncoderSettings &settings)
  {
    if (cb_setImageSettings_3430_0.can_issue()) {
      cb_setImageSettings_3430_0.issue<QImageEncoderControl_Adaptor, const QImageEncoderSettings &>(&QImageEncoderControl_Adaptor::cbs_setImageSettings_3430_0, settings);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setImageSettings");
    }
  }

  //  [adaptor impl] QStringList QImageEncoderControl::supportedImageCodecs()
  QStringList cbs_supportedImageCodecs_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedImageCodecs");
  }

  virtual QStringList supportedImageCodecs() const
  {
    if (cb_supportedImageCodecs_c0_0.can_issue()) {
      return cb_supportedImageCodecs_c0_0.issue<QImageEncoderControl_Adaptor, QStringList>(&QImageEncoderControl_Adaptor::cbs_supportedImageCodecs_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedImageCodecs");
    }
  }

  //  [adaptor impl] QList<QSize> QImageEncoderControl::supportedResolutions(const QImageEncoderSettings &settings, bool *continuous)
  QList<QSize> cbs_supportedResolutions_c4372_1(const QImageEncoderSettings &settings, bool *continuous) const
  {
    __SUPPRESS_UNUSED_WARNING (settings);
    __SUPPRESS_UNUSED_WARNING (continuous);
    throw qt_gsi::AbstractMethodCalledException("supportedResolutions");
  }

  virtual QList<QSize> supportedResolutions(const QImageEncoderSettings &settings, bool *continuous) const
  {
    if (cb_supportedResolutions_c4372_1.can_issue()) {
      return cb_supportedResolutions_c4372_1.issue<QImageEncoderControl_Adaptor, QList<QSize>, const QImageEncoderSettings &, bool *>(&QImageEncoderControl_Adaptor::cbs_supportedResolutions_c4372_1, settings, continuous);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedResolutions");
    }
  }

  //  [adaptor impl] void QImageEncoderControl::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QImageEncoderControl::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QImageEncoderControl_Adaptor, QChildEvent *>(&QImageEncoderControl_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QImageEncoderControl::childEvent(event);
    }
  }

  //  [adaptor impl] void QImageEncoderControl::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QImageEncoderControl::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QImageEncoderControl_Adaptor, QEvent *>(&QImageEncoderControl_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QImageEncoderControl::customEvent(event);
    }
  }

  //  [adaptor impl] void QImageEncoderControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QImageEncoderControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QImageEncoderControl_Adaptor, const QMetaMethod &>(&QImageEncoderControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QImageEncoderControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QImageEncoderControl::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QImageEncoderControl::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QImageEncoderControl_Adaptor, QTimerEvent *>(&QImageEncoderControl_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QImageEncoderControl::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_imageCodecDescription_c2025_0;
  gsi::Callback cb_imageSettings_c0_0;
  gsi::Callback cb_setImageSettings_3430_0;
  gsi::Callback cb_supportedImageCodecs_c0_0;
  gsi::Callback cb_supportedResolutions_c4372_1;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QImageEncoderControl_Adaptor::~QImageEncoderControl_Adaptor() { }

//  Constructor QImageEncoderControl::QImageEncoderControl() (adaptor class)

static void _init_ctor_QImageEncoderControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QImageEncoderControl_Adaptor> ();
}

static void _call_ctor_QImageEncoderControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageEncoderControl_Adaptor *> (new QImageEncoderControl_Adaptor ());
}


// void QImageEncoderControl::childEvent(QChildEvent *event)

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
  ((QImageEncoderControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QImageEncoderControl::customEvent(QEvent *event)

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
  ((QImageEncoderControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QImageEncoderControl::destroyed(QObject *)

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
  ((QImageEncoderControl_Adaptor *)cls)->emitter_QImageEncoderControl_destroyed_1302 (arg1);
}


// void QImageEncoderControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QImageEncoderControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QImageEncoderControl::event(QEvent *event)

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
  ret.write<bool > ((bool)((QImageEncoderControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QImageEncoderControl::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QImageEncoderControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QString QImageEncoderControl::imageCodecDescription(const QString &codec)

static void _init_cbs_imageCodecDescription_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_imageCodecDescription_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QImageEncoderControl_Adaptor *)cls)->cbs_imageCodecDescription_c2025_0 (arg1));
}

static void _set_callback_cbs_imageCodecDescription_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_imageCodecDescription_c2025_0 = cb;
}


// QImageEncoderSettings QImageEncoderControl::imageSettings()

static void _init_cbs_imageSettings_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QImageEncoderSettings > ();
}

static void _call_cbs_imageSettings_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageEncoderSettings > ((QImageEncoderSettings)((QImageEncoderControl_Adaptor *)cls)->cbs_imageSettings_c0_0 ());
}

static void _set_callback_cbs_imageSettings_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_imageSettings_c0_0 = cb;
}


// exposed bool QImageEncoderControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QImageEncoderControl_Adaptor *)cls)->fp_QImageEncoderControl_isSignalConnected_c2394 (arg1));
}


// emitter void QImageEncoderControl::objectNameChanged(const QString &objectName)

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
  ((QImageEncoderControl_Adaptor *)cls)->emitter_QImageEncoderControl_objectNameChanged_4567 (arg1);
}


// exposed int QImageEncoderControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QImageEncoderControl_Adaptor *)cls)->fp_QImageEncoderControl_receivers_c1731 (arg1));
}


// exposed QObject *QImageEncoderControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QImageEncoderControl_Adaptor *)cls)->fp_QImageEncoderControl_sender_c0 ());
}


// exposed int QImageEncoderControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageEncoderControl_Adaptor *)cls)->fp_QImageEncoderControl_senderSignalIndex_c0 ());
}


// void QImageEncoderControl::setImageSettings(const QImageEncoderSettings &settings)

static void _init_cbs_setImageSettings_3430_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setImageSettings_3430_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = args.read<const QImageEncoderSettings & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderControl_Adaptor *)cls)->cbs_setImageSettings_3430_0 (arg1);
}

static void _set_callback_cbs_setImageSettings_3430_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_setImageSettings_3430_0 = cb;
}


// QStringList QImageEncoderControl::supportedImageCodecs()

static void _init_cbs_supportedImageCodecs_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_supportedImageCodecs_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QImageEncoderControl_Adaptor *)cls)->cbs_supportedImageCodecs_c0_0 ());
}

static void _set_callback_cbs_supportedImageCodecs_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_supportedImageCodecs_c0_0 = cb;
}


// QList<QSize> QImageEncoderControl::supportedResolutions(const QImageEncoderSettings &settings, bool *continuous)

static void _init_cbs_supportedResolutions_c4372_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("continuous");
  decl->add_arg<bool * > (argspec_1);
  decl->set_return<QList<QSize> > ();
}

static void _call_cbs_supportedResolutions_c4372_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = args.read<const QImageEncoderSettings & > (heap);
  bool *arg2 = args.read<bool * > (heap);
  ret.write<QList<QSize> > ((QList<QSize>)((QImageEncoderControl_Adaptor *)cls)->cbs_supportedResolutions_c4372_1 (arg1, arg2));
}

static void _set_callback_cbs_supportedResolutions_c4372_1 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_supportedResolutions_c4372_1 = cb;
}


// void QImageEncoderControl::timerEvent(QTimerEvent *event)

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
  ((QImageEncoderControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageEncoderControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QImageEncoderControl> &qtdecl_QImageEncoderControl ();

static gsi::Methods methods_QImageEncoderControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageEncoderControl::QImageEncoderControl()\nThis method creates an object of class QImageEncoderControl.", &_init_ctor_QImageEncoderControl_Adaptor_0, &_call_ctor_QImageEncoderControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QImageEncoderControl::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QImageEncoderControl::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QImageEncoderControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QImageEncoderControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QImageEncoderControl::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QImageEncoderControl::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("imageCodecDescription", "@brief Virtual method QString QImageEncoderControl::imageCodecDescription(const QString &codec)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_imageCodecDescription_c2025_0, &_call_cbs_imageCodecDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("imageCodecDescription", "@hide", true, &_init_cbs_imageCodecDescription_c2025_0, &_call_cbs_imageCodecDescription_c2025_0, &_set_callback_cbs_imageCodecDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("imageSettings", "@brief Virtual method QImageEncoderSettings QImageEncoderControl::imageSettings()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_imageSettings_c0_0, &_call_cbs_imageSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("imageSettings", "@hide", true, &_init_cbs_imageSettings_c0_0, &_call_cbs_imageSettings_c0_0, &_set_callback_cbs_imageSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QImageEncoderControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QImageEncoderControl::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QImageEncoderControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QImageEncoderControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QImageEncoderControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setImageSettings", "@brief Virtual method void QImageEncoderControl::setImageSettings(const QImageEncoderSettings &settings)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setImageSettings_3430_0, &_call_cbs_setImageSettings_3430_0);
  methods += new qt_gsi::GenericMethod ("setImageSettings", "@hide", false, &_init_cbs_setImageSettings_3430_0, &_call_cbs_setImageSettings_3430_0, &_set_callback_cbs_setImageSettings_3430_0);
  methods += new qt_gsi::GenericMethod ("supportedImageCodecs", "@brief Virtual method QStringList QImageEncoderControl::supportedImageCodecs()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedImageCodecs_c0_0, &_call_cbs_supportedImageCodecs_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedImageCodecs", "@hide", true, &_init_cbs_supportedImageCodecs_c0_0, &_call_cbs_supportedImageCodecs_c0_0, &_set_callback_cbs_supportedImageCodecs_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedResolutions", "@brief Virtual method QList<QSize> QImageEncoderControl::supportedResolutions(const QImageEncoderSettings &settings, bool *continuous)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedResolutions_c4372_1, &_call_cbs_supportedResolutions_c4372_1);
  methods += new qt_gsi::GenericMethod ("supportedResolutions", "@hide", true, &_init_cbs_supportedResolutions_c4372_1, &_call_cbs_supportedResolutions_c4372_1, &_set_callback_cbs_supportedResolutions_c4372_1);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QImageEncoderControl::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QImageEncoderControl_Adaptor> decl_QImageEncoderControl_Adaptor (qtdecl_QImageEncoderControl (), "QtMultimedia", "QImageEncoderControl",
  methods_QImageEncoderControl_Adaptor (),
  "@qt\n@brief Binding of QImageEncoderControl");

}

