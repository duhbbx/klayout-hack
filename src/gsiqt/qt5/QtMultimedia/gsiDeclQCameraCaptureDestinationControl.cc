
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
*  @file gsiDeclQCameraCaptureDestinationControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraCaptureDestinationControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraCaptureDestinationControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraCaptureDestinationControl::staticMetaObject);
}


// QFlags<QCameraImageCapture::CaptureDestination> QCameraCaptureDestinationControl::captureDestination()


static void _init_f_captureDestination_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QCameraImageCapture::CaptureDestination> > ();
}

static void _call_f_captureDestination_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QCameraImageCapture::CaptureDestination> > ((QFlags<QCameraImageCapture::CaptureDestination>)((QCameraCaptureDestinationControl *)cls)->captureDestination ());
}


// void QCameraCaptureDestinationControl::captureDestinationChanged(QFlags<QCameraImageCapture::CaptureDestination>)


static void _init_f_captureDestinationChanged_4999 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QFlags<QCameraImageCapture::CaptureDestination> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_captureDestinationChanged_4999 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraImageCapture::CaptureDestination> arg1 = gsi::arg_reader<QFlags<QCameraImageCapture::CaptureDestination> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureDestinationControl *)cls)->captureDestinationChanged (arg1);
}


// bool QCameraCaptureDestinationControl::isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination)


static void _init_f_isCaptureDestinationSupported_c4999 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("destination");
  decl->add_arg<QFlags<QCameraImageCapture::CaptureDestination> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isCaptureDestinationSupported_c4999 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraImageCapture::CaptureDestination> arg1 = gsi::arg_reader<QFlags<QCameraImageCapture::CaptureDestination> >() (args, heap);
  ret.write<bool > ((bool)((QCameraCaptureDestinationControl *)cls)->isCaptureDestinationSupported (arg1));
}


// void QCameraCaptureDestinationControl::setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)


static void _init_f_setCaptureDestination_4999 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("destination");
  decl->add_arg<QFlags<QCameraImageCapture::CaptureDestination> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCaptureDestination_4999 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraImageCapture::CaptureDestination> arg1 = gsi::arg_reader<QFlags<QCameraImageCapture::CaptureDestination> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureDestinationControl *)cls)->setCaptureDestination (arg1);
}


// static QString QCameraCaptureDestinationControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
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
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraCaptureDestinationControl::tr (arg1, arg2, arg3));
}


// static QString QCameraCaptureDestinationControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
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
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraCaptureDestinationControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QCameraCaptureDestinationControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":captureDestination", "@brief Method QFlags<QCameraImageCapture::CaptureDestination> QCameraCaptureDestinationControl::captureDestination()\n", true, &_init_f_captureDestination_c0, &_call_f_captureDestination_c0);
  methods += new qt_gsi::GenericMethod ("captureDestinationChanged", "@brief Method void QCameraCaptureDestinationControl::captureDestinationChanged(QFlags<QCameraImageCapture::CaptureDestination>)\n", false, &_init_f_captureDestinationChanged_4999, &_call_f_captureDestinationChanged_4999);
  methods += new qt_gsi::GenericMethod ("isCaptureDestinationSupported?", "@brief Method bool QCameraCaptureDestinationControl::isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination)\n", true, &_init_f_isCaptureDestinationSupported_c4999, &_call_f_isCaptureDestinationSupported_c4999);
  methods += new qt_gsi::GenericMethod ("setCaptureDestination|captureDestination=", "@brief Method void QCameraCaptureDestinationControl::setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)\n", false, &_init_f_setCaptureDestination_4999, &_call_f_setCaptureDestination_4999);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraCaptureDestinationControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraCaptureDestinationControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QCameraCaptureDestinationControl> decl_QCameraCaptureDestinationControl (qtdecl_QMediaControl (), "QtMultimedia", "QCameraCaptureDestinationControl_Native",
  methods_QCameraCaptureDestinationControl (),
  "@hide\n@alias QCameraCaptureDestinationControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraCaptureDestinationControl> &qtdecl_QCameraCaptureDestinationControl () { return decl_QCameraCaptureDestinationControl; }

}


class QCameraCaptureDestinationControl_Adaptor : public QCameraCaptureDestinationControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCameraCaptureDestinationControl_Adaptor();

  //  [adaptor ctor] QCameraCaptureDestinationControl::QCameraCaptureDestinationControl()
  QCameraCaptureDestinationControl_Adaptor() : QCameraCaptureDestinationControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QCameraCaptureDestinationControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QCameraCaptureDestinationControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QCameraCaptureDestinationControl::isSignalConnected(signal);
  }

  //  [expose] int QCameraCaptureDestinationControl::receivers(const char *signal)
  int fp_QCameraCaptureDestinationControl_receivers_c1731 (const char *signal) const {
    return QCameraCaptureDestinationControl::receivers(signal);
  }

  //  [expose] QObject *QCameraCaptureDestinationControl::sender()
  QObject * fp_QCameraCaptureDestinationControl_sender_c0 () const {
    return QCameraCaptureDestinationControl::sender();
  }

  //  [expose] int QCameraCaptureDestinationControl::senderSignalIndex()
  int fp_QCameraCaptureDestinationControl_senderSignalIndex_c0 () const {
    return QCameraCaptureDestinationControl::senderSignalIndex();
  }

  //  [adaptor impl] QFlags<QCameraImageCapture::CaptureDestination> QCameraCaptureDestinationControl::captureDestination()
  QFlags<QCameraImageCapture::CaptureDestination> cbs_captureDestination_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("captureDestination");
  }

  virtual QFlags<QCameraImageCapture::CaptureDestination> captureDestination() const
  {
    if (cb_captureDestination_c0_0.can_issue()) {
      return cb_captureDestination_c0_0.issue<QCameraCaptureDestinationControl_Adaptor, QFlags<QCameraImageCapture::CaptureDestination> >(&QCameraCaptureDestinationControl_Adaptor::cbs_captureDestination_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("captureDestination");
    }
  }

  //  [adaptor impl] bool QCameraCaptureDestinationControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QCameraCaptureDestinationControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QCameraCaptureDestinationControl_Adaptor, bool, QEvent *>(&QCameraCaptureDestinationControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QCameraCaptureDestinationControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QCameraCaptureDestinationControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QCameraCaptureDestinationControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QCameraCaptureDestinationControl_Adaptor, bool, QObject *, QEvent *>(&QCameraCaptureDestinationControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QCameraCaptureDestinationControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] bool QCameraCaptureDestinationControl::isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination)
  bool cbs_isCaptureDestinationSupported_c4999_0(QFlags<QCameraImageCapture::CaptureDestination> destination) const
  {
    __SUPPRESS_UNUSED_WARNING (destination);
    throw qt_gsi::AbstractMethodCalledException("isCaptureDestinationSupported");
  }

  virtual bool isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination) const
  {
    if (cb_isCaptureDestinationSupported_c4999_0.can_issue()) {
      return cb_isCaptureDestinationSupported_c4999_0.issue<QCameraCaptureDestinationControl_Adaptor, bool, QFlags<QCameraImageCapture::CaptureDestination> >(&QCameraCaptureDestinationControl_Adaptor::cbs_isCaptureDestinationSupported_c4999_0, destination);
    } else {
      throw qt_gsi::AbstractMethodCalledException("isCaptureDestinationSupported");
    }
  }

  //  [adaptor impl] void QCameraCaptureDestinationControl::setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)
  void cbs_setCaptureDestination_4999_0(QFlags<QCameraImageCapture::CaptureDestination> destination)
  {
    __SUPPRESS_UNUSED_WARNING (destination);
    throw qt_gsi::AbstractMethodCalledException("setCaptureDestination");
  }

  virtual void setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)
  {
    if (cb_setCaptureDestination_4999_0.can_issue()) {
      cb_setCaptureDestination_4999_0.issue<QCameraCaptureDestinationControl_Adaptor, QFlags<QCameraImageCapture::CaptureDestination> >(&QCameraCaptureDestinationControl_Adaptor::cbs_setCaptureDestination_4999_0, destination);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setCaptureDestination");
    }
  }

  //  [adaptor impl] void QCameraCaptureDestinationControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QCameraCaptureDestinationControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QCameraCaptureDestinationControl_Adaptor, QChildEvent *>(&QCameraCaptureDestinationControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QCameraCaptureDestinationControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraCaptureDestinationControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QCameraCaptureDestinationControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QCameraCaptureDestinationControl_Adaptor, QEvent *>(&QCameraCaptureDestinationControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QCameraCaptureDestinationControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraCaptureDestinationControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QCameraCaptureDestinationControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QCameraCaptureDestinationControl_Adaptor, const QMetaMethod &>(&QCameraCaptureDestinationControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QCameraCaptureDestinationControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QCameraCaptureDestinationControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QCameraCaptureDestinationControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QCameraCaptureDestinationControl_Adaptor, QTimerEvent *>(&QCameraCaptureDestinationControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QCameraCaptureDestinationControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_captureDestination_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_isCaptureDestinationSupported_c4999_0;
  gsi::Callback cb_setCaptureDestination_4999_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QCameraCaptureDestinationControl_Adaptor::~QCameraCaptureDestinationControl_Adaptor() { }

//  Constructor QCameraCaptureDestinationControl::QCameraCaptureDestinationControl() (adaptor class)

static void _init_ctor_QCameraCaptureDestinationControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraCaptureDestinationControl_Adaptor> ();
}

static void _call_ctor_QCameraCaptureDestinationControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraCaptureDestinationControl_Adaptor *> (new QCameraCaptureDestinationControl_Adaptor ());
}


// QFlags<QCameraImageCapture::CaptureDestination> QCameraCaptureDestinationControl::captureDestination()

static void _init_cbs_captureDestination_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QCameraImageCapture::CaptureDestination> > ();
}

static void _call_cbs_captureDestination_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QCameraImageCapture::CaptureDestination> > ((QFlags<QCameraImageCapture::CaptureDestination>)((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_captureDestination_c0_0 ());
}

static void _set_callback_cbs_captureDestination_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_captureDestination_c0_0 = cb;
}


// void QCameraCaptureDestinationControl::childEvent(QChildEvent *)

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
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QCameraCaptureDestinationControl::customEvent(QEvent *)

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
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QCameraCaptureDestinationControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QCameraCaptureDestinationControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QCameraCaptureDestinationControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QCameraCaptureDestinationControl::isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination)

static void _init_cbs_isCaptureDestinationSupported_c4999_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("destination");
  decl->add_arg<QFlags<QCameraImageCapture::CaptureDestination> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_isCaptureDestinationSupported_c4999_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraImageCapture::CaptureDestination> arg1 = args.read<QFlags<QCameraImageCapture::CaptureDestination> > (heap);
  ret.write<bool > ((bool)((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_isCaptureDestinationSupported_c4999_0 (arg1));
}

static void _set_callback_cbs_isCaptureDestinationSupported_c4999_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_isCaptureDestinationSupported_c4999_0 = cb;
}


// exposed bool QCameraCaptureDestinationControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QCameraCaptureDestinationControl_Adaptor *)cls)->fp_QCameraCaptureDestinationControl_isSignalConnected_c2394 (arg1));
}


// exposed int QCameraCaptureDestinationControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QCameraCaptureDestinationControl_Adaptor *)cls)->fp_QCameraCaptureDestinationControl_receivers_c1731 (arg1));
}


// exposed QObject *QCameraCaptureDestinationControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QCameraCaptureDestinationControl_Adaptor *)cls)->fp_QCameraCaptureDestinationControl_sender_c0 ());
}


// exposed int QCameraCaptureDestinationControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QCameraCaptureDestinationControl_Adaptor *)cls)->fp_QCameraCaptureDestinationControl_senderSignalIndex_c0 ());
}


// void QCameraCaptureDestinationControl::setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)

static void _init_cbs_setCaptureDestination_4999_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("destination");
  decl->add_arg<QFlags<QCameraImageCapture::CaptureDestination> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setCaptureDestination_4999_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraImageCapture::CaptureDestination> arg1 = args.read<QFlags<QCameraImageCapture::CaptureDestination> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_setCaptureDestination_4999_0 (arg1);
}

static void _set_callback_cbs_setCaptureDestination_4999_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_setCaptureDestination_4999_0 = cb;
}


// void QCameraCaptureDestinationControl::timerEvent(QTimerEvent *)

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
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureDestinationControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QCameraCaptureDestinationControl> &qtdecl_QCameraCaptureDestinationControl ();

static gsi::Methods methods_QCameraCaptureDestinationControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraCaptureDestinationControl::QCameraCaptureDestinationControl()\nThis method creates an object of class QCameraCaptureDestinationControl.", &_init_ctor_QCameraCaptureDestinationControl_Adaptor_0, &_call_ctor_QCameraCaptureDestinationControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("captureDestination", "@brief Virtual method QFlags<QCameraImageCapture::CaptureDestination> QCameraCaptureDestinationControl::captureDestination()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_captureDestination_c0_0, &_call_cbs_captureDestination_c0_0);
  methods += new qt_gsi::GenericMethod ("captureDestination", "@hide", true, &_init_cbs_captureDestination_c0_0, &_call_cbs_captureDestination_c0_0, &_set_callback_cbs_captureDestination_c0_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QCameraCaptureDestinationControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QCameraCaptureDestinationControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QCameraCaptureDestinationControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QCameraCaptureDestinationControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QCameraCaptureDestinationControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("isCaptureDestinationSupported", "@brief Virtual method bool QCameraCaptureDestinationControl::isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isCaptureDestinationSupported_c4999_0, &_call_cbs_isCaptureDestinationSupported_c4999_0);
  methods += new qt_gsi::GenericMethod ("isCaptureDestinationSupported", "@hide", true, &_init_cbs_isCaptureDestinationSupported_c4999_0, &_call_cbs_isCaptureDestinationSupported_c4999_0, &_set_callback_cbs_isCaptureDestinationSupported_c4999_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QCameraCaptureDestinationControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QCameraCaptureDestinationControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QCameraCaptureDestinationControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QCameraCaptureDestinationControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setCaptureDestination", "@brief Virtual method void QCameraCaptureDestinationControl::setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setCaptureDestination_4999_0, &_call_cbs_setCaptureDestination_4999_0);
  methods += new qt_gsi::GenericMethod ("setCaptureDestination", "@hide", false, &_init_cbs_setCaptureDestination_4999_0, &_call_cbs_setCaptureDestination_4999_0, &_set_callback_cbs_setCaptureDestination_4999_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QCameraCaptureDestinationControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QCameraCaptureDestinationControl_Adaptor> decl_QCameraCaptureDestinationControl_Adaptor (qtdecl_QCameraCaptureDestinationControl (), "QtMultimedia", "QCameraCaptureDestinationControl",
  methods_QCameraCaptureDestinationControl_Adaptor (),
  "@qt\n@brief Binding of QCameraCaptureDestinationControl");

}

