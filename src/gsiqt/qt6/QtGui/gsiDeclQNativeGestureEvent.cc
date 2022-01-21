
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
*  @file gsiDeclQNativeGestureEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNativeGestureEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QPointingDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNativeGestureEvent

// QNativeGestureEvent *QNativeGestureEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNativeGestureEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNativeGestureEvent * > ((QNativeGestureEvent *)((QNativeGestureEvent *)cls)->clone ());
}


// QPointF QNativeGestureEvent::delta()


static void _init_f_delta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_delta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QNativeGestureEvent *)cls)->delta ());
}


// int QNativeGestureEvent::fingerCount()


static void _init_f_fingerCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_fingerCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QNativeGestureEvent *)cls)->fingerCount ());
}


// Qt::NativeGestureType QNativeGestureEvent::gestureType()


static void _init_f_gestureType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::NativeGestureType>::target_type > ();
}

static void _call_f_gestureType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::NativeGestureType>::target_type > ((qt_gsi::Converter<Qt::NativeGestureType>::target_type)qt_gsi::CppToQtAdaptor<Qt::NativeGestureType>(((QNativeGestureEvent *)cls)->gestureType ()));
}


// const QPoint QNativeGestureEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint > ((const QPoint)((QNativeGestureEvent *)cls)->globalPos ());
}


// QPointF QNativeGestureEvent::localPos()


static void _init_f_localPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_localPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QNativeGestureEvent *)cls)->localPos ());
}


// const QPoint QNativeGestureEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint > ((const QPoint)((QNativeGestureEvent *)cls)->pos ());
}


// QPointF QNativeGestureEvent::screenPos()


static void _init_f_screenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_screenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QNativeGestureEvent *)cls)->screenPos ());
}


// double QNativeGestureEvent::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QNativeGestureEvent *)cls)->value ());
}


// QPointF QNativeGestureEvent::windowPos()


static void _init_f_windowPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_windowPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QNativeGestureEvent *)cls)->windowPos ());
}


namespace gsi
{

static gsi::Methods methods_QNativeGestureEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QNativeGestureEvent *QNativeGestureEvent::clone()\nThis is a reimplementation of QSinglePointEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("delta", "@brief Method QPointF QNativeGestureEvent::delta()\n", true, &_init_f_delta_c0, &_call_f_delta_c0);
  methods += new qt_gsi::GenericMethod ("fingerCount", "@brief Method int QNativeGestureEvent::fingerCount()\n", true, &_init_f_fingerCount_c0, &_call_f_fingerCount_c0);
  methods += new qt_gsi::GenericMethod ("gestureType", "@brief Method Qt::NativeGestureType QNativeGestureEvent::gestureType()\n", true, &_init_f_gestureType_c0, &_call_f_gestureType_c0);
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method const QPoint QNativeGestureEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("localPos", "@brief Method QPointF QNativeGestureEvent::localPos()\n", true, &_init_f_localPos_c0, &_call_f_localPos_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint QNativeGestureEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("screenPos", "@brief Method QPointF QNativeGestureEvent::screenPos()\n", true, &_init_f_screenPos_c0, &_call_f_screenPos_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method double QNativeGestureEvent::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  methods += new qt_gsi::GenericMethod ("windowPos", "@brief Method QPointF QNativeGestureEvent::windowPos()\n", true, &_init_f_windowPos_c0, &_call_f_windowPos_c0);
  return methods;
}

gsi::Class<QSinglePointEvent> &qtdecl_QSinglePointEvent ();

gsi::Class<QNativeGestureEvent> decl_QNativeGestureEvent (qtdecl_QSinglePointEvent (), "QtGui", "QNativeGestureEvent_Native",
  methods_QNativeGestureEvent (),
  "@hide\n@alias QNativeGestureEvent");

GSI_QTGUI_PUBLIC gsi::Class<QNativeGestureEvent> &qtdecl_QNativeGestureEvent () { return decl_QNativeGestureEvent; }

}


class QNativeGestureEvent_Adaptor : public QNativeGestureEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QNativeGestureEvent_Adaptor();

  //  [adaptor ctor] QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, quint64 sequenceId, quint64 intArgument)
  QNativeGestureEvent_Adaptor(Qt::NativeGestureType type, const QPointingDevice *dev, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, quint64 sequenceId, quint64 intArgument) : QNativeGestureEvent(type, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, int fingerCount, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, const QPointF &delta, quint64 sequenceId)
  QNativeGestureEvent_Adaptor(Qt::NativeGestureType type, const QPointingDevice *dev, int fingerCount, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, const QPointF &delta) : QNativeGestureEvent(type, dev, fingerCount, localPos, scenePos, globalPos, value, delta)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, int fingerCount, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, const QPointF &delta, quint64 sequenceId)
  QNativeGestureEvent_Adaptor(Qt::NativeGestureType type, const QPointingDevice *dev, int fingerCount, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, const QPointF &delta, quint64 sequenceId) : QNativeGestureEvent(type, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QNativeGestureEvent *QNativeGestureEvent::clone()
  QNativeGestureEvent * cbs_clone_c0_0() const
  {
    return QNativeGestureEvent::clone();
  }

  virtual QNativeGestureEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QNativeGestureEvent_Adaptor, QNativeGestureEvent *>(&QNativeGestureEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QNativeGestureEvent::clone();
    }
  }

  //  [adaptor impl] bool QNativeGestureEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QNativeGestureEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QNativeGestureEvent_Adaptor, bool>(&QNativeGestureEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QNativeGestureEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QNativeGestureEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QNativeGestureEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QNativeGestureEvent_Adaptor, bool>(&QNativeGestureEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QNativeGestureEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QNativeGestureEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QNativeGestureEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QNativeGestureEvent_Adaptor, bool>(&QNativeGestureEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QNativeGestureEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QNativeGestureEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QNativeGestureEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QNativeGestureEvent_Adaptor, bool>(&QNativeGestureEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QNativeGestureEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QNativeGestureEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QNativeGestureEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QNativeGestureEvent_Adaptor, quint64>(&QNativeGestureEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QNativeGestureEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QNativeGestureEvent_Adaptor::~QNativeGestureEvent_Adaptor() { }

//  Constructor QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, quint64 sequenceId, quint64 intArgument) (adaptor class)

static void _init_ctor_QNativeGestureEvent_Adaptor_13826 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<Qt::NativeGestureType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dev");
  decl->add_arg<const QPointingDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("localPos");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("scenePos");
  decl->add_arg<const QPointF & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("value");
  decl->add_arg<double > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("sequenceId");
  decl->add_arg<quint64 > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("intArgument");
  decl->add_arg<quint64 > (argspec_7);
  decl->set_return_new<QNativeGestureEvent_Adaptor> ();
}

static void _call_ctor_QNativeGestureEvent_Adaptor_13826 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::NativeGestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::NativeGestureType>::target_type & >() (args, heap);
  const QPointingDevice *arg2 = gsi::arg_reader<const QPointingDevice * >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg5 = gsi::arg_reader<const QPointF & >() (args, heap);
  double arg6 = gsi::arg_reader<double >() (args, heap);
  quint64 arg7 = gsi::arg_reader<quint64 >() (args, heap);
  quint64 arg8 = gsi::arg_reader<quint64 >() (args, heap);
  ret.write<QNativeGestureEvent_Adaptor *> (new QNativeGestureEvent_Adaptor (qt_gsi::QtToCppAdaptor<Qt::NativeGestureType>(arg1).cref(), arg2, arg3, arg4, arg5, arg6, arg7, arg8));
}


//  Constructor QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, int fingerCount, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, const QPointF &delta, quint64 sequenceId) (adaptor class)

static void _init_ctor_QNativeGestureEvent_Adaptor_15368 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<Qt::NativeGestureType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dev");
  decl->add_arg<const QPointingDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("fingerCount");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("localPos");
  decl->add_arg<const QPointF & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("scenePos");
  decl->add_arg<const QPointF & > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("value");
  decl->add_arg<double > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("delta");
  decl->add_arg<const QPointF & > (argspec_7);
  static gsi::ArgSpecBase argspec_8 ("sequenceId", true, "(18446744073709551615UL)");
  decl->add_arg<quint64 > (argspec_8);
  decl->set_return_new<QNativeGestureEvent_Adaptor> ();
}

static void _call_ctor_QNativeGestureEvent_Adaptor_15368 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::NativeGestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::NativeGestureType>::target_type & >() (args, heap);
  const QPointingDevice *arg2 = gsi::arg_reader<const QPointingDevice * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg5 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg6 = gsi::arg_reader<const QPointF & >() (args, heap);
  double arg7 = gsi::arg_reader<double >() (args, heap);
  const QPointF &arg8 = gsi::arg_reader<const QPointF & >() (args, heap);
  quint64 arg9 = args ? gsi::arg_reader<quint64 >() (args, heap) : gsi::arg_maker<quint64 >() ((18446744073709551615UL), heap);
  ret.write<QNativeGestureEvent_Adaptor *> (new QNativeGestureEvent_Adaptor (qt_gsi::QtToCppAdaptor<Qt::NativeGestureType>(arg1).cref(), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9));
}


// QNativeGestureEvent *QNativeGestureEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNativeGestureEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNativeGestureEvent * > ((QNativeGestureEvent *)((QNativeGestureEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QNativeGestureEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// bool QNativeGestureEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNativeGestureEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QNativeGestureEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QNativeGestureEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNativeGestureEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QNativeGestureEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QNativeGestureEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNativeGestureEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QNativeGestureEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QNativeGestureEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNativeGestureEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QNativeGestureEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QNativeGestureEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNativeGestureEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QNativeGestureEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QNativeGestureEvent> &qtdecl_QNativeGestureEvent ();

static gsi::Methods methods_QNativeGestureEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, quint64 sequenceId, quint64 intArgument)\nThis method creates an object of class QNativeGestureEvent.", &_init_ctor_QNativeGestureEvent_Adaptor_13826, &_call_ctor_QNativeGestureEvent_Adaptor_13826);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNativeGestureEvent::QNativeGestureEvent(Qt::NativeGestureType type, const QPointingDevice *dev, int fingerCount, const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, double value, const QPointF &delta, quint64 sequenceId)\nThis method creates an object of class QNativeGestureEvent.", &_init_ctor_QNativeGestureEvent_Adaptor_15368, &_call_ctor_QNativeGestureEvent_Adaptor_15368);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QNativeGestureEvent *QNativeGestureEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QNativeGestureEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QNativeGestureEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QNativeGestureEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QNativeGestureEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QNativeGestureEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QNativeGestureEvent_Adaptor> decl_QNativeGestureEvent_Adaptor (qtdecl_QNativeGestureEvent (), "QtGui", "QNativeGestureEvent",
  methods_QNativeGestureEvent_Adaptor (),
  "@qt\n@brief Binding of QNativeGestureEvent");

}

