
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
*  @file gsiDeclQStyleOptionProgressBar.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionProgressBar>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionProgressBar

//  Constructor QStyleOptionProgressBar::QStyleOptionProgressBar()


static void _init_ctor_QStyleOptionProgressBar_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionProgressBar> ();
}

static void _call_ctor_QStyleOptionProgressBar_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionProgressBar *> (new QStyleOptionProgressBar ());
}


//  Constructor QStyleOptionProgressBar::QStyleOptionProgressBar(const QStyleOptionProgressBar &other)


static void _init_ctor_QStyleOptionProgressBar_3686 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionProgressBar & > (argspec_0);
  decl->set_return_new<QStyleOptionProgressBar> ();
}

static void _call_ctor_QStyleOptionProgressBar_3686 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionProgressBar &arg1 = gsi::arg_reader<const QStyleOptionProgressBar & >() (args, heap);
  ret.write<QStyleOptionProgressBar *> (new QStyleOptionProgressBar (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionProgressBar () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionProgressBar::QStyleOptionProgressBar()\nThis method creates an object of class QStyleOptionProgressBar.", &_init_ctor_QStyleOptionProgressBar_0, &_call_ctor_QStyleOptionProgressBar_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionProgressBar::QStyleOptionProgressBar(const QStyleOptionProgressBar &other)\nThis method creates an object of class QStyleOptionProgressBar.", &_init_ctor_QStyleOptionProgressBar_3686, &_call_ctor_QStyleOptionProgressBar_3686);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionProgressBar> decl_QStyleOptionProgressBar (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionProgressBar",
  methods_QStyleOptionProgressBar (),
  "@qt\n@brief Binding of QStyleOptionProgressBar");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionProgressBar> &qtdecl_QStyleOptionProgressBar () { return decl_QStyleOptionProgressBar; }

}

