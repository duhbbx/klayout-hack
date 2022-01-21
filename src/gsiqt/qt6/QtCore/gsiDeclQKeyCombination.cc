
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
*  @file gsiDeclQKeyCombination.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QKeyCombination>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QKeyCombination

//  Constructor QKeyCombination::QKeyCombination(Qt::Key key)


static void _init_ctor_QKeyCombination_1046 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key", true, "Qt::Key_unknown");
  decl->add_arg<const qt_gsi::Converter<Qt::Key>::target_type & > (argspec_0);
  decl->set_return_new<QKeyCombination> ();
}

static void _call_ctor_QKeyCombination_1046 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::Key>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::Key>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::Key>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::Key>(heap, Qt::Key_unknown), heap);
  ret.write<QKeyCombination *> (new QKeyCombination (qt_gsi::QtToCppAdaptor<Qt::Key>(arg1).cref()));
}


//  Constructor QKeyCombination::QKeyCombination(QFlags<Qt::Modifier> modifiers, Qt::Key key)


static void _init_ctor_QKeyCombination_3198 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modifiers");
  decl->add_arg<QFlags<Qt::Modifier> > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("key", true, "Qt::Key_unknown");
  decl->add_arg<const qt_gsi::Converter<Qt::Key>::target_type & > (argspec_1);
  decl->set_return_new<QKeyCombination> ();
}

static void _call_ctor_QKeyCombination_3198 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::Modifier> arg1 = gsi::arg_reader<QFlags<Qt::Modifier> >() (args, heap);
  const qt_gsi::Converter<Qt::Key>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::Key>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::Key>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::Key>(heap, Qt::Key_unknown), heap);
  ret.write<QKeyCombination *> (new QKeyCombination (arg1, qt_gsi::QtToCppAdaptor<Qt::Key>(arg2).cref()));
}


//  Constructor QKeyCombination::QKeyCombination(QFlags<Qt::KeyboardModifier> modifiers, Qt::Key key)


static void _init_ctor_QKeyCombination_4015 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("key", true, "Qt::Key_unknown");
  decl->add_arg<const qt_gsi::Converter<Qt::Key>::target_type & > (argspec_1);
  decl->set_return_new<QKeyCombination> ();
}

static void _call_ctor_QKeyCombination_4015 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::KeyboardModifier> arg1 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<Qt::Key>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::Key>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::Key>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::Key>(heap, Qt::Key_unknown), heap);
  ret.write<QKeyCombination *> (new QKeyCombination (arg1, qt_gsi::QtToCppAdaptor<Qt::Key>(arg2).cref()));
}


// Qt::Key QKeyCombination::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::Key>::target_type > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::Key>::target_type > ((qt_gsi::Converter<Qt::Key>::target_type)qt_gsi::CppToQtAdaptor<Qt::Key>(((QKeyCombination *)cls)->key ()));
}


// QFlags<Qt::KeyboardModifier> QKeyCombination::keyboardModifiers()


static void _init_f_keyboardModifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_keyboardModifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QKeyCombination *)cls)->keyboardModifiers ());
}


// int QKeyCombination::toCombined()


static void _init_f_toCombined_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_toCombined_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QKeyCombination *)cls)->toCombined ());
}


// static QKeyCombination QKeyCombination::fromCombined(int combined)


static void _init_f_fromCombined_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("combined");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QKeyCombination > ();
}

static void _call_f_fromCombined_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QKeyCombination > ((QKeyCombination)QKeyCombination::fromCombined (arg1));
}



namespace gsi
{

static gsi::Methods methods_QKeyCombination () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeyCombination::QKeyCombination(Qt::Key key)\nThis method creates an object of class QKeyCombination.", &_init_ctor_QKeyCombination_1046, &_call_ctor_QKeyCombination_1046);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeyCombination::QKeyCombination(QFlags<Qt::Modifier> modifiers, Qt::Key key)\nThis method creates an object of class QKeyCombination.", &_init_ctor_QKeyCombination_3198, &_call_ctor_QKeyCombination_3198);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeyCombination::QKeyCombination(QFlags<Qt::KeyboardModifier> modifiers, Qt::Key key)\nThis method creates an object of class QKeyCombination.", &_init_ctor_QKeyCombination_4015, &_call_ctor_QKeyCombination_4015);
  methods += new qt_gsi::GenericMethod ("key", "@brief Method Qt::Key QKeyCombination::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("keyboardModifiers", "@brief Method QFlags<Qt::KeyboardModifier> QKeyCombination::keyboardModifiers()\n", true, &_init_f_keyboardModifiers_c0, &_call_f_keyboardModifiers_c0);
  methods += new qt_gsi::GenericMethod ("toCombined", "@brief Method int QKeyCombination::toCombined()\n", true, &_init_f_toCombined_c0, &_call_f_toCombined_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromCombined", "@brief Static method QKeyCombination QKeyCombination::fromCombined(int combined)\nThis method is static and can be called without an instance.", &_init_f_fromCombined_767, &_call_f_fromCombined_767);
  return methods;
}

gsi::Class<QKeyCombination> decl_QKeyCombination ("QtCore", "QKeyCombination",
  methods_QKeyCombination (),
  "@qt\n@brief Binding of QKeyCombination");


GSI_QTCORE_PUBLIC gsi::Class<QKeyCombination> &qtdecl_QKeyCombination () { return decl_QKeyCombination; }

}

