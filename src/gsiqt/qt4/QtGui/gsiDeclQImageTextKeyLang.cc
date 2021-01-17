
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
*  @file gsiDeclQImageTextKeyLang.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageTextKeyLang>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageTextKeyLang

//  Constructor QImageTextKeyLang::QImageTextKeyLang(const char *k, const char *l)


static void _init_ctor_QImageTextKeyLang_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("k");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("l");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return_new<QImageTextKeyLang> ();
}

static void _call_ctor_QImageTextKeyLang_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QImageTextKeyLang *> (new QImageTextKeyLang (arg1, arg2));
}


//  Constructor QImageTextKeyLang::QImageTextKeyLang()


static void _init_ctor_QImageTextKeyLang_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QImageTextKeyLang> ();
}

static void _call_ctor_QImageTextKeyLang_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageTextKeyLang *> (new QImageTextKeyLang ());
}


// bool QImageTextKeyLang::operator!=(const QImageTextKeyLang &other)


static void _init_f_operator_excl__eq__c2981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageTextKeyLang & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageTextKeyLang &arg1 = gsi::arg_reader<const QImageTextKeyLang & >() (args, heap);
  ret.write<bool > ((bool)((QImageTextKeyLang *)cls)->operator!= (arg1));
}


// bool QImageTextKeyLang::operator<(const QImageTextKeyLang &other)


static void _init_f_operator_lt__c2981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageTextKeyLang & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageTextKeyLang &arg1 = gsi::arg_reader<const QImageTextKeyLang & >() (args, heap);
  ret.write<bool > ((bool)((QImageTextKeyLang *)cls)->operator< (arg1));
}


// bool QImageTextKeyLang::operator==(const QImageTextKeyLang &other)


static void _init_f_operator_eq__eq__c2981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageTextKeyLang & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageTextKeyLang &arg1 = gsi::arg_reader<const QImageTextKeyLang & >() (args, heap);
  ret.write<bool > ((bool)((QImageTextKeyLang *)cls)->operator== (arg1));
}



namespace gsi
{

static gsi::Methods methods_QImageTextKeyLang () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageTextKeyLang::QImageTextKeyLang(const char *k, const char *l)\nThis method creates an object of class QImageTextKeyLang.", &_init_ctor_QImageTextKeyLang_3354, &_call_ctor_QImageTextKeyLang_3354);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageTextKeyLang::QImageTextKeyLang()\nThis method creates an object of class QImageTextKeyLang.", &_init_ctor_QImageTextKeyLang_0, &_call_ctor_QImageTextKeyLang_0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QImageTextKeyLang::operator!=(const QImageTextKeyLang &other)\n", true, &_init_f_operator_excl__eq__c2981, &_call_f_operator_excl__eq__c2981);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QImageTextKeyLang::operator<(const QImageTextKeyLang &other)\n", true, &_init_f_operator_lt__c2981, &_call_f_operator_lt__c2981);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QImageTextKeyLang::operator==(const QImageTextKeyLang &other)\n", true, &_init_f_operator_eq__eq__c2981, &_call_f_operator_eq__eq__c2981);
  return methods;
}

gsi::Class<QImageTextKeyLang> decl_QImageTextKeyLang ("QtGui", "QImageTextKeyLang",
  methods_QImageTextKeyLang (),
  "@qt\n@brief Binding of QImageTextKeyLang");


GSI_QTGUI_PUBLIC gsi::Class<QImageTextKeyLang> &qtdecl_QImageTextKeyLang () { return decl_QImageTextKeyLang; }

}

