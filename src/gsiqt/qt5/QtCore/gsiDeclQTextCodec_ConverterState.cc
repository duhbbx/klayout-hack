
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
*  @file gsiDeclQTextCodec_ConverterState.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextCodec>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QTextCodec::ConverterState

//  Constructor QTextCodec::ConverterState::ConverterState(QFlags<QTextCodec::ConversionFlag> f)


static void _init_ctor_QTextCodec_ConverterState_3668 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f", true, "QTextCodec::DefaultConversion");
  decl->add_arg<QFlags<QTextCodec::ConversionFlag> > (argspec_0);
  decl->set_return_new<QTextCodec::ConverterState> ();
}

static void _call_ctor_QTextCodec_ConverterState_3668 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTextCodec::ConversionFlag> arg1 = args ? gsi::arg_reader<QFlags<QTextCodec::ConversionFlag> >() (args, heap) : gsi::arg_maker<QFlags<QTextCodec::ConversionFlag> >() (QTextCodec::DefaultConversion, heap);
  ret.write<QTextCodec::ConverterState *> (new QTextCodec::ConverterState (arg1));
}



namespace gsi
{

static gsi::Methods methods_QTextCodec_ConverterState () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextCodec::ConverterState::ConverterState(QFlags<QTextCodec::ConversionFlag> f)\nThis method creates an object of class QTextCodec::ConverterState.", &_init_ctor_QTextCodec_ConverterState_3668, &_call_ctor_QTextCodec_ConverterState_3668);
  return methods;
}

gsi::Class<QTextCodec::ConverterState> decl_QTextCodec_ConverterState ("QtCore", "QTextCodec_ConverterState",
  methods_QTextCodec_ConverterState (),
  "@qt\n@brief Binding of QTextCodec::ConverterState");

gsi::ClassExt<QTextCodec> decl_QTextCodec_ConverterState_as_child (decl_QTextCodec_ConverterState, "ConverterState");

GSI_QTCORE_PUBLIC gsi::Class<QTextCodec::ConverterState> &qtdecl_QTextCodec_ConverterState () { return decl_QTextCodec_ConverterState; }

}

