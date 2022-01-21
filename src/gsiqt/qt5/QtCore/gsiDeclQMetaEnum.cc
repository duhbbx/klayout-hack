
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
*  @file gsiDeclQMetaEnum.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaEnum>
#include <QMetaObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMetaEnum

//  Constructor QMetaEnum::QMetaEnum()


static void _init_ctor_QMetaEnum_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaEnum> ();
}

static void _call_ctor_QMetaEnum_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaEnum *> (new QMetaEnum ());
}


// const QMetaObject *QMetaEnum::enclosingMetaObject()


static void _init_f_enclosingMetaObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMetaObject * > ();
}

static void _call_f_enclosingMetaObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMetaObject * > ((const QMetaObject *)((QMetaEnum *)cls)->enclosingMetaObject ());
}


// bool QMetaEnum::isFlag()


static void _init_f_isFlag_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isFlag_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaEnum *)cls)->isFlag ());
}


// bool QMetaEnum::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMetaEnum *)cls)->isValid ());
}


// const char *QMetaEnum::key(int index)


static void _init_f_key_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_f_key_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<const char * > ((const char *)((QMetaEnum *)cls)->key (arg1));
}


// int QMetaEnum::keyCount()


static void _init_f_keyCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_keyCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaEnum *)cls)->keyCount ());
}


// int QMetaEnum::keyToValue(const char *key, bool *ok)


static void _init_f_keyToValue_c2673 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ok", true, "0");
  decl->add_arg<bool * > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_keyToValue_c2673 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  bool *arg2 = args ? gsi::arg_reader<bool * >() (args, heap) : gsi::arg_maker<bool * >() (0, heap);
  ret.write<int > ((int)((QMetaEnum *)cls)->keyToValue (arg1, arg2));
}


// int QMetaEnum::keysToValue(const char *keys, bool *ok)


static void _init_f_keysToValue_c2673 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("keys");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ok", true, "0");
  decl->add_arg<bool * > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_keysToValue_c2673 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  bool *arg2 = args ? gsi::arg_reader<bool * >() (args, heap) : gsi::arg_maker<bool * >() (0, heap);
  ret.write<int > ((int)((QMetaEnum *)cls)->keysToValue (arg1, arg2));
}


// const char *QMetaEnum::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaEnum *)cls)->name ());
}


// const char *QMetaEnum::scope()


static void _init_f_scope_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_scope_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaEnum *)cls)->scope ());
}


// int QMetaEnum::value(int index)


static void _init_f_value_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_value_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QMetaEnum *)cls)->value (arg1));
}


// const char *QMetaEnum::valueToKey(int value)


static void _init_f_valueToKey_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_f_valueToKey_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<const char * > ((const char *)((QMetaEnum *)cls)->valueToKey (arg1));
}


// QByteArray QMetaEnum::valueToKeys(int value)


static void _init_f_valueToKeys_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_valueToKeys_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QByteArray > ((QByteArray)((QMetaEnum *)cls)->valueToKeys (arg1));
}



namespace gsi
{

static gsi::Methods methods_QMetaEnum () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaEnum::QMetaEnum()\nThis method creates an object of class QMetaEnum.", &_init_ctor_QMetaEnum_0, &_call_ctor_QMetaEnum_0);
  methods += new qt_gsi::GenericMethod ("enclosingMetaObject", "@brief Method const QMetaObject *QMetaEnum::enclosingMetaObject()\n", true, &_init_f_enclosingMetaObject_c0, &_call_f_enclosingMetaObject_c0);
  methods += new qt_gsi::GenericMethod ("isFlag?", "@brief Method bool QMetaEnum::isFlag()\n", true, &_init_f_isFlag_c0, &_call_f_isFlag_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QMetaEnum::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("key", "@brief Method const char *QMetaEnum::key(int index)\n", true, &_init_f_key_c767, &_call_f_key_c767);
  methods += new qt_gsi::GenericMethod ("keyCount", "@brief Method int QMetaEnum::keyCount()\n", true, &_init_f_keyCount_c0, &_call_f_keyCount_c0);
  methods += new qt_gsi::GenericMethod ("keyToValue", "@brief Method int QMetaEnum::keyToValue(const char *key, bool *ok)\n", true, &_init_f_keyToValue_c2673, &_call_f_keyToValue_c2673);
  methods += new qt_gsi::GenericMethod ("keysToValue", "@brief Method int QMetaEnum::keysToValue(const char *keys, bool *ok)\n", true, &_init_f_keysToValue_c2673, &_call_f_keysToValue_c2673);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method const char *QMetaEnum::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("scope", "@brief Method const char *QMetaEnum::scope()\n", true, &_init_f_scope_c0, &_call_f_scope_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method int QMetaEnum::value(int index)\n", true, &_init_f_value_c767, &_call_f_value_c767);
  methods += new qt_gsi::GenericMethod ("valueToKey", "@brief Method const char *QMetaEnum::valueToKey(int value)\n", true, &_init_f_valueToKey_c767, &_call_f_valueToKey_c767);
  methods += new qt_gsi::GenericMethod ("valueToKeys", "@brief Method QByteArray QMetaEnum::valueToKeys(int value)\n", true, &_init_f_valueToKeys_c767, &_call_f_valueToKeys_c767);
  return methods;
}

gsi::Class<QMetaEnum> decl_QMetaEnum ("QtCore", "QMetaEnum",
  methods_QMetaEnum (),
  "@qt\n@brief Binding of QMetaEnum");


GSI_QTCORE_PUBLIC gsi::Class<QMetaEnum> &qtdecl_QMetaEnum () { return decl_QMetaEnum; }

}

