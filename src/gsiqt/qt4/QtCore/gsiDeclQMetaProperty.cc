
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
*  @file gsiDeclQMetaProperty.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaProperty>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMetaProperty

//  Constructor QMetaProperty::QMetaProperty()


static void _init_ctor_QMetaProperty_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaProperty> ();
}

static void _call_ctor_QMetaProperty_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaProperty *> (new QMetaProperty ());
}


// const QMetaObject *QMetaProperty::enclosingMetaObject()


static void _init_f_enclosingMetaObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMetaObject * > ();
}

static void _call_f_enclosingMetaObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMetaObject * > ((const QMetaObject *)((QMetaProperty *)cls)->enclosingMetaObject ());
}


// QMetaEnum QMetaProperty::enumerator()


static void _init_f_enumerator_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMetaEnum > ();
}

static void _call_f_enumerator_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaEnum > ((QMetaEnum)((QMetaProperty *)cls)->enumerator ());
}


// bool QMetaProperty::hasNotifySignal()


static void _init_f_hasNotifySignal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasNotifySignal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->hasNotifySignal ());
}


// bool QMetaProperty::hasStdCppSet()


static void _init_f_hasStdCppSet_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasStdCppSet_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->hasStdCppSet ());
}


// bool QMetaProperty::isConstant()


static void _init_f_isConstant_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isConstant_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isConstant ());
}


// bool QMetaProperty::isDesignable(const QObject *obj)


static void _init_f_isDesignable_c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj", true, "0");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isDesignable_c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args ? gsi::arg_reader<const QObject * >() (args, heap) : gsi::arg_maker<const QObject * >() (0, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isDesignable (arg1));
}


// bool QMetaProperty::isEditable(const QObject *obj)


static void _init_f_isEditable_c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj", true, "0");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isEditable_c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args ? gsi::arg_reader<const QObject * >() (args, heap) : gsi::arg_maker<const QObject * >() (0, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isEditable (arg1));
}


// bool QMetaProperty::isEnumType()


static void _init_f_isEnumType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEnumType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isEnumType ());
}


// bool QMetaProperty::isFinal()


static void _init_f_isFinal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isFinal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isFinal ());
}


// bool QMetaProperty::isFlagType()


static void _init_f_isFlagType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isFlagType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isFlagType ());
}


// bool QMetaProperty::isReadable()


static void _init_f_isReadable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isReadable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isReadable ());
}


// bool QMetaProperty::isResettable()


static void _init_f_isResettable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isResettable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isResettable ());
}


// bool QMetaProperty::isScriptable(const QObject *obj)


static void _init_f_isScriptable_c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj", true, "0");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isScriptable_c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args ? gsi::arg_reader<const QObject * >() (args, heap) : gsi::arg_maker<const QObject * >() (0, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isScriptable (arg1));
}


// bool QMetaProperty::isStored(const QObject *obj)


static void _init_f_isStored_c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj", true, "0");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isStored_c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args ? gsi::arg_reader<const QObject * >() (args, heap) : gsi::arg_maker<const QObject * >() (0, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isStored (arg1));
}


// bool QMetaProperty::isUser(const QObject *obj)


static void _init_f_isUser_c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj", true, "0");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isUser_c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args ? gsi::arg_reader<const QObject * >() (args, heap) : gsi::arg_maker<const QObject * >() (0, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isUser (arg1));
}


// bool QMetaProperty::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isValid ());
}


// bool QMetaProperty::isWritable()


static void _init_f_isWritable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isWritable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->isWritable ());
}


// const char *QMetaProperty::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaProperty *)cls)->name ());
}


// QMetaMethod QMetaProperty::notifySignal()


static void _init_f_notifySignal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMetaMethod > ();
}

static void _call_f_notifySignal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaMethod > ((QMetaMethod)((QMetaProperty *)cls)->notifySignal ());
}


// int QMetaProperty::notifySignalIndex()


static void _init_f_notifySignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_notifySignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaProperty *)cls)->notifySignalIndex ());
}


// int QMetaProperty::propertyIndex()


static void _init_f_propertyIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_propertyIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaProperty *)cls)->propertyIndex ());
}


// QVariant QMetaProperty::read(const QObject *obj)


static void _init_f_read_c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_read_c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = gsi::arg_reader<const QObject * >() (args, heap);
  ret.write<QVariant > ((QVariant)((QMetaProperty *)cls)->read (arg1));
}


// bool QMetaProperty::reset(QObject *obj)


static void _init_f_reset_c1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_reset_c1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->reset (arg1));
}


// QVariant::Type QMetaProperty::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVariant::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVariant::Type>::target_type > ((qt_gsi::Converter<QVariant::Type>::target_type)qt_gsi::CppToQtAdaptor<QVariant::Type>(((QMetaProperty *)cls)->type ()));
}


// const char *QMetaProperty::typeName()


static void _init_f_typeName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_typeName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaProperty *)cls)->typeName ());
}


// int QMetaProperty::userType()


static void _init_f_userType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_userType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaProperty *)cls)->userType ());
}


// bool QMetaProperty::write(QObject *obj, const QVariant &value)


static void _init_f_write_c3313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_write_c3313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  ret.write<bool > ((bool)((QMetaProperty *)cls)->write (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QMetaProperty () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaProperty::QMetaProperty()\nThis method creates an object of class QMetaProperty.", &_init_ctor_QMetaProperty_0, &_call_ctor_QMetaProperty_0);
  methods += new qt_gsi::GenericMethod ("enclosingMetaObject", "@brief Method const QMetaObject *QMetaProperty::enclosingMetaObject()\n", true, &_init_f_enclosingMetaObject_c0, &_call_f_enclosingMetaObject_c0);
  methods += new qt_gsi::GenericMethod ("enumerator", "@brief Method QMetaEnum QMetaProperty::enumerator()\n", true, &_init_f_enumerator_c0, &_call_f_enumerator_c0);
  methods += new qt_gsi::GenericMethod ("hasNotifySignal", "@brief Method bool QMetaProperty::hasNotifySignal()\n", true, &_init_f_hasNotifySignal_c0, &_call_f_hasNotifySignal_c0);
  methods += new qt_gsi::GenericMethod ("hasStdCppSet", "@brief Method bool QMetaProperty::hasStdCppSet()\n", true, &_init_f_hasStdCppSet_c0, &_call_f_hasStdCppSet_c0);
  methods += new qt_gsi::GenericMethod ("isConstant?", "@brief Method bool QMetaProperty::isConstant()\n", true, &_init_f_isConstant_c0, &_call_f_isConstant_c0);
  methods += new qt_gsi::GenericMethod ("isDesignable?", "@brief Method bool QMetaProperty::isDesignable(const QObject *obj)\n", true, &_init_f_isDesignable_c1997, &_call_f_isDesignable_c1997);
  methods += new qt_gsi::GenericMethod ("isEditable?", "@brief Method bool QMetaProperty::isEditable(const QObject *obj)\n", true, &_init_f_isEditable_c1997, &_call_f_isEditable_c1997);
  methods += new qt_gsi::GenericMethod ("isEnumType?", "@brief Method bool QMetaProperty::isEnumType()\n", true, &_init_f_isEnumType_c0, &_call_f_isEnumType_c0);
  methods += new qt_gsi::GenericMethod ("isFinal?", "@brief Method bool QMetaProperty::isFinal()\n", true, &_init_f_isFinal_c0, &_call_f_isFinal_c0);
  methods += new qt_gsi::GenericMethod ("isFlagType?", "@brief Method bool QMetaProperty::isFlagType()\n", true, &_init_f_isFlagType_c0, &_call_f_isFlagType_c0);
  methods += new qt_gsi::GenericMethod ("isReadable?", "@brief Method bool QMetaProperty::isReadable()\n", true, &_init_f_isReadable_c0, &_call_f_isReadable_c0);
  methods += new qt_gsi::GenericMethod ("isResettable?", "@brief Method bool QMetaProperty::isResettable()\n", true, &_init_f_isResettable_c0, &_call_f_isResettable_c0);
  methods += new qt_gsi::GenericMethod ("isScriptable?", "@brief Method bool QMetaProperty::isScriptable(const QObject *obj)\n", true, &_init_f_isScriptable_c1997, &_call_f_isScriptable_c1997);
  methods += new qt_gsi::GenericMethod ("isStored?", "@brief Method bool QMetaProperty::isStored(const QObject *obj)\n", true, &_init_f_isStored_c1997, &_call_f_isStored_c1997);
  methods += new qt_gsi::GenericMethod ("isUser?", "@brief Method bool QMetaProperty::isUser(const QObject *obj)\n", true, &_init_f_isUser_c1997, &_call_f_isUser_c1997);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QMetaProperty::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("isWritable?", "@brief Method bool QMetaProperty::isWritable()\n", true, &_init_f_isWritable_c0, &_call_f_isWritable_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method const char *QMetaProperty::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("notifySignal", "@brief Method QMetaMethod QMetaProperty::notifySignal()\n", true, &_init_f_notifySignal_c0, &_call_f_notifySignal_c0);
  methods += new qt_gsi::GenericMethod ("notifySignalIndex", "@brief Method int QMetaProperty::notifySignalIndex()\n", true, &_init_f_notifySignalIndex_c0, &_call_f_notifySignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("propertyIndex", "@brief Method int QMetaProperty::propertyIndex()\n", true, &_init_f_propertyIndex_c0, &_call_f_propertyIndex_c0);
  methods += new qt_gsi::GenericMethod ("read", "@brief Method QVariant QMetaProperty::read(const QObject *obj)\n", true, &_init_f_read_c1997, &_call_f_read_c1997);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method bool QMetaProperty::reset(QObject *obj)\n", true, &_init_f_reset_c1302, &_call_f_reset_c1302);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QVariant::Type QMetaProperty::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericMethod ("typeName", "@brief Method const char *QMetaProperty::typeName()\n", true, &_init_f_typeName_c0, &_call_f_typeName_c0);
  methods += new qt_gsi::GenericMethod ("userType", "@brief Method int QMetaProperty::userType()\n", true, &_init_f_userType_c0, &_call_f_userType_c0);
  methods += new qt_gsi::GenericMethod ("write", "@brief Method bool QMetaProperty::write(QObject *obj, const QVariant &value)\n", true, &_init_f_write_c3313, &_call_f_write_c3313);
  return methods;
}

gsi::Class<QMetaProperty> decl_QMetaProperty ("QtCore", "QMetaProperty",
  methods_QMetaProperty (),
  "@qt\n@brief Binding of QMetaProperty");


GSI_QTCORE_PUBLIC gsi::Class<QMetaProperty> &qtdecl_QMetaProperty () { return decl_QMetaProperty; }

}

