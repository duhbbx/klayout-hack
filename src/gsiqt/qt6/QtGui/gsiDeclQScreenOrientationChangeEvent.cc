
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
*  @file gsiDeclQScreenOrientationChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QScreenOrientationChangeEvent>
#include <QScreen>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QScreenOrientationChangeEvent

// QScreenOrientationChangeEvent *QScreenOrientationChangeEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QScreenOrientationChangeEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QScreenOrientationChangeEvent * > ((QScreenOrientationChangeEvent *)((QScreenOrientationChangeEvent *)cls)->clone ());
}


// Qt::ScreenOrientation QScreenOrientationChangeEvent::orientation()


static void _init_f_orientation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ScreenOrientation>::target_type > ();
}

static void _call_f_orientation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ScreenOrientation>::target_type > ((qt_gsi::Converter<Qt::ScreenOrientation>::target_type)qt_gsi::CppToQtAdaptor<Qt::ScreenOrientation>(((QScreenOrientationChangeEvent *)cls)->orientation ()));
}


// QScreen *QScreenOrientationChangeEvent::screen()


static void _init_f_screen_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QScreen * > ();
}

static void _call_f_screen_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QScreen * > ((QScreen *)((QScreenOrientationChangeEvent *)cls)->screen ());
}


namespace gsi
{

static gsi::Methods methods_QScreenOrientationChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QScreenOrientationChangeEvent *QScreenOrientationChangeEvent::clone()\nThis is a reimplementation of QEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("orientation", "@brief Method Qt::ScreenOrientation QScreenOrientationChangeEvent::orientation()\n", true, &_init_f_orientation_c0, &_call_f_orientation_c0);
  methods += new qt_gsi::GenericMethod ("screen", "@brief Method QScreen *QScreenOrientationChangeEvent::screen()\n", true, &_init_f_screen_c0, &_call_f_screen_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QScreenOrientationChangeEvent> decl_QScreenOrientationChangeEvent (qtdecl_QEvent (), "QtGui", "QScreenOrientationChangeEvent_Native",
  methods_QScreenOrientationChangeEvent (),
  "@hide\n@alias QScreenOrientationChangeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QScreenOrientationChangeEvent> &qtdecl_QScreenOrientationChangeEvent () { return decl_QScreenOrientationChangeEvent; }

}


class QScreenOrientationChangeEvent_Adaptor : public QScreenOrientationChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QScreenOrientationChangeEvent_Adaptor();

  //  [adaptor ctor] QScreenOrientationChangeEvent::QScreenOrientationChangeEvent(QScreen *screen, Qt::ScreenOrientation orientation)
  QScreenOrientationChangeEvent_Adaptor(QScreen *screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QScreenOrientationChangeEvent *QScreenOrientationChangeEvent::clone()
  QScreenOrientationChangeEvent * cbs_clone_c0_0() const
  {
    return QScreenOrientationChangeEvent::clone();
  }

  virtual QScreenOrientationChangeEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QScreenOrientationChangeEvent_Adaptor, QScreenOrientationChangeEvent *>(&QScreenOrientationChangeEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QScreenOrientationChangeEvent::clone();
    }
  }

  //  [adaptor impl] void QScreenOrientationChangeEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QScreenOrientationChangeEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QScreenOrientationChangeEvent_Adaptor, bool>(&QScreenOrientationChangeEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QScreenOrientationChangeEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_setAccepted_864_0;
};

QScreenOrientationChangeEvent_Adaptor::~QScreenOrientationChangeEvent_Adaptor() { }

//  Constructor QScreenOrientationChangeEvent::QScreenOrientationChangeEvent(QScreen *screen, Qt::ScreenOrientation orientation) (adaptor class)

static void _init_ctor_QScreenOrientationChangeEvent_Adaptor_3724 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<QScreen * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("orientation");
  decl->add_arg<const qt_gsi::Converter<Qt::ScreenOrientation>::target_type & > (argspec_1);
  decl->set_return_new<QScreenOrientationChangeEvent_Adaptor> ();
}

static void _call_ctor_QScreenOrientationChangeEvent_Adaptor_3724 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = gsi::arg_reader<QScreen * >() (args, heap);
  const qt_gsi::Converter<Qt::ScreenOrientation>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::ScreenOrientation>::target_type & >() (args, heap);
  ret.write<QScreenOrientationChangeEvent_Adaptor *> (new QScreenOrientationChangeEvent_Adaptor (arg1, qt_gsi::QtToCppAdaptor<Qt::ScreenOrientation>(arg2).cref()));
}


// QScreenOrientationChangeEvent *QScreenOrientationChangeEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QScreenOrientationChangeEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QScreenOrientationChangeEvent * > ((QScreenOrientationChangeEvent *)((QScreenOrientationChangeEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QScreenOrientationChangeEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// void QScreenOrientationChangeEvent::setAccepted(bool accepted)

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
  ((QScreenOrientationChangeEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QScreenOrientationChangeEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QScreenOrientationChangeEvent> &qtdecl_QScreenOrientationChangeEvent ();

static gsi::Methods methods_QScreenOrientationChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QScreenOrientationChangeEvent::QScreenOrientationChangeEvent(QScreen *screen, Qt::ScreenOrientation orientation)\nThis method creates an object of class QScreenOrientationChangeEvent.", &_init_ctor_QScreenOrientationChangeEvent_Adaptor_3724, &_call_ctor_QScreenOrientationChangeEvent_Adaptor_3724);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QScreenOrientationChangeEvent *QScreenOrientationChangeEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QScreenOrientationChangeEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QScreenOrientationChangeEvent_Adaptor> decl_QScreenOrientationChangeEvent_Adaptor (qtdecl_QScreenOrientationChangeEvent (), "QtGui", "QScreenOrientationChangeEvent",
  methods_QScreenOrientationChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QScreenOrientationChangeEvent");

}

