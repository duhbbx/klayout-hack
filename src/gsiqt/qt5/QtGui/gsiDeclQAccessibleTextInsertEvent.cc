
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
*  @file gsiDeclQAccessibleTextInsertEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleTextInsertEvent>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleTextInsertEvent

// int QAccessibleTextInsertEvent::changePosition()


static void _init_f_changePosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_changePosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTextInsertEvent *)cls)->changePosition ());
}


// QString QAccessibleTextInsertEvent::textInserted()


static void _init_f_textInserted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_textInserted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAccessibleTextInsertEvent *)cls)->textInserted ());
}


namespace gsi
{

static gsi::Methods methods_QAccessibleTextInsertEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("changePosition", "@brief Method int QAccessibleTextInsertEvent::changePosition()\n", true, &_init_f_changePosition_c0, &_call_f_changePosition_c0);
  methods += new qt_gsi::GenericMethod ("textInserted", "@brief Method QString QAccessibleTextInsertEvent::textInserted()\n", true, &_init_f_textInserted_c0, &_call_f_textInserted_c0);
  return methods;
}

gsi::Class<QAccessibleTextCursorEvent> &qtdecl_QAccessibleTextCursorEvent ();

gsi::Class<QAccessibleTextInsertEvent> decl_QAccessibleTextInsertEvent (qtdecl_QAccessibleTextCursorEvent (), "QtGui", "QAccessibleTextInsertEvent_Native",
  methods_QAccessibleTextInsertEvent (),
  "@hide\n@alias QAccessibleTextInsertEvent");

GSI_QTGUI_PUBLIC gsi::Class<QAccessibleTextInsertEvent> &qtdecl_QAccessibleTextInsertEvent () { return decl_QAccessibleTextInsertEvent; }

}


class QAccessibleTextInsertEvent_Adaptor : public QAccessibleTextInsertEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleTextInsertEvent_Adaptor();

  //  [adaptor ctor] QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QObject *obj, int position, const QString &text)
  QAccessibleTextInsertEvent_Adaptor(QObject *obj, int position, const QString &text) : QAccessibleTextInsertEvent(obj, position, text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QAccessibleInterface *iface, int position, const QString &text)
  QAccessibleTextInsertEvent_Adaptor(QAccessibleInterface *iface, int position, const QString &text) : QAccessibleTextInsertEvent(iface, position, text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QAccessibleInterface *QAccessibleTextInsertEvent::accessibleInterface()
  QAccessibleInterface * cbs_accessibleInterface_c0_0() const
  {
    return QAccessibleTextInsertEvent::accessibleInterface();
  }

  virtual QAccessibleInterface * accessibleInterface() const
  {
    if (cb_accessibleInterface_c0_0.can_issue()) {
      return cb_accessibleInterface_c0_0.issue<QAccessibleTextInsertEvent_Adaptor, QAccessibleInterface *>(&QAccessibleTextInsertEvent_Adaptor::cbs_accessibleInterface_c0_0);
    } else {
      return QAccessibleTextInsertEvent::accessibleInterface();
    }
  }

  gsi::Callback cb_accessibleInterface_c0_0;
};

QAccessibleTextInsertEvent_Adaptor::~QAccessibleTextInsertEvent_Adaptor() { }

//  Constructor QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QObject *obj, int position, const QString &text) (adaptor class)

static void _init_ctor_QAccessibleTextInsertEvent_Adaptor_3878 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("position");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QAccessibleTextInsertEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleTextInsertEvent_Adaptor_3878 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QAccessibleTextInsertEvent_Adaptor *> (new QAccessibleTextInsertEvent_Adaptor (arg1, arg2, arg3));
}


//  Constructor QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QAccessibleInterface *iface, int position, const QString &text) (adaptor class)

static void _init_ctor_QAccessibleTextInsertEvent_Adaptor_5198 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<QAccessibleInterface * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("position");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QAccessibleTextInsertEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleTextInsertEvent_Adaptor_5198 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAccessibleInterface *arg1 = gsi::arg_reader<QAccessibleInterface * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QAccessibleTextInsertEvent_Adaptor *> (new QAccessibleTextInsertEvent_Adaptor (arg1, arg2, arg3));
}


// QAccessibleInterface *QAccessibleTextInsertEvent::accessibleInterface()

static void _init_cbs_accessibleInterface_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_cbs_accessibleInterface_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleTextInsertEvent_Adaptor *)cls)->cbs_accessibleInterface_c0_0 ());
}

static void _set_callback_cbs_accessibleInterface_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTextInsertEvent_Adaptor *)cls)->cb_accessibleInterface_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleTextInsertEvent> &qtdecl_QAccessibleTextInsertEvent ();

static gsi::Methods methods_QAccessibleTextInsertEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QObject *obj, int position, const QString &text)\nThis method creates an object of class QAccessibleTextInsertEvent.", &_init_ctor_QAccessibleTextInsertEvent_Adaptor_3878, &_call_ctor_QAccessibleTextInsertEvent_Adaptor_3878);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QAccessibleInterface *iface, int position, const QString &text)\nThis method creates an object of class QAccessibleTextInsertEvent.", &_init_ctor_QAccessibleTextInsertEvent_Adaptor_5198, &_call_ctor_QAccessibleTextInsertEvent_Adaptor_5198);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@brief Virtual method QAccessibleInterface *QAccessibleTextInsertEvent::accessibleInterface()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@hide", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0, &_set_callback_cbs_accessibleInterface_c0_0);
  return methods;
}

gsi::Class<QAccessibleTextInsertEvent_Adaptor> decl_QAccessibleTextInsertEvent_Adaptor (qtdecl_QAccessibleTextInsertEvent (), "QtGui", "QAccessibleTextInsertEvent",
  methods_QAccessibleTextInsertEvent_Adaptor (),
  "@qt\n@brief Binding of QAccessibleTextInsertEvent");

}

