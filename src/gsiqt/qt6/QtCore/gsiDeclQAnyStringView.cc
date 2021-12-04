
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
*  @file gsiDeclQAnyStringView.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAnyStringView>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAnyStringView

//  Constructor QAnyStringView::QAnyStringView()


static void _init_ctor_QAnyStringView_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAnyStringView> ();
}

static void _call_ctor_QAnyStringView_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAnyStringView *> (new QAnyStringView ());
}


//  Constructor QAnyStringView::QAnyStringView(const QByteArray &str)


static void _init_ctor_QAnyStringView_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QAnyStringView> ();
}

static void _call_ctor_QAnyStringView_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QAnyStringView *> (new QAnyStringView (arg1));
}


//  Constructor QAnyStringView::QAnyStringView(const QString &str)


static void _init_ctor_QAnyStringView_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QAnyStringView> ();
}

static void _call_ctor_QAnyStringView_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QAnyStringView *> (new QAnyStringView (arg1));
}


//  Constructor QAnyStringView::QAnyStringView(QLatin1String str)


static void _init_ctor_QAnyStringView_1701 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<QLatin1String > (argspec_0);
  decl->set_return_new<QAnyStringView> ();
}

static void _call_ctor_QAnyStringView_1701 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QLatin1String arg1 = gsi::arg_reader<QLatin1String >() (args, heap);
  ret.write<QAnyStringView *> (new QAnyStringView (arg1));
}


//  Constructor QAnyStringView::QAnyStringView(const QChar &c)


static void _init_ctor_QAnyStringView_1776 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return_new<QAnyStringView> ();
}

static void _call_ctor_QAnyStringView_1776 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap);
  ret.write<QAnyStringView *> (new QAnyStringView (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


//  Constructor QAnyStringView::QAnyStringView(QStringView v)


static void _init_ctor_QAnyStringView_1559 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<QStringView > (argspec_0);
  decl->set_return_new<QAnyStringView> ();
}

static void _call_ctor_QAnyStringView_1559 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QStringView arg1 = gsi::arg_reader<QStringView >() (args, heap);
  ret.write<QAnyStringView *> (new QAnyStringView (arg1));
}


// QChar QAnyStringView::back()


static void _init_f_back_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_back_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(((QAnyStringView *)cls)->back ()));
}


// const void *QAnyStringView::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const void * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const void * > ((const void *)((QAnyStringView *)cls)->data ());
}


// bool QAnyStringView::empty()


static void _init_f_empty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_empty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAnyStringView *)cls)->empty ());
}


// QChar QAnyStringView::front()


static void _init_f_front_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_front_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(((QAnyStringView *)cls)->front ()));
}


// bool QAnyStringView::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAnyStringView *)cls)->isEmpty ());
}


// bool QAnyStringView::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAnyStringView *)cls)->isNull ());
}


// qsizetype QAnyStringView::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAnyStringView *)cls)->length ());
}


// qsizetype QAnyStringView::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAnyStringView *)cls)->size ());
}


// qsizetype QAnyStringView::size_bytes()


static void _init_f_size_bytes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_size_bytes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAnyStringView *)cls)->size_bytes ());
}


// QString QAnyStringView::toString()


static void _init_f_toString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAnyStringView *)cls)->toString ());
}


// static int QAnyStringView::compare(QAnyStringView lhs, QAnyStringView rhs, Qt::CaseSensitivity cs)


static void _init_f_compare_5818 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("lhs");
  decl->add_arg<QAnyStringView > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rhs");
  decl->add_arg<QAnyStringView > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("cs", true, "Qt::CaseSensitive");
  decl->add_arg<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & > (argspec_2);
  decl->set_return<int > ();
}

static void _call_f_compare_5818 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAnyStringView arg1 = gsi::arg_reader<QAnyStringView >() (args, heap);
  QAnyStringView arg2 = gsi::arg_reader<QAnyStringView >() (args, heap);
  const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::CaseSensitivity>(heap, Qt::CaseSensitive), heap);
  ret.write<int > ((int)QAnyStringView::compare (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::CaseSensitivity>(arg3).cref()));
}


// static bool QAnyStringView::equal(QAnyStringView lhs, QAnyStringView rhs)


static void _init_f_equal_3602 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("lhs");
  decl->add_arg<QAnyStringView > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rhs");
  decl->add_arg<QAnyStringView > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_equal_3602 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAnyStringView arg1 = gsi::arg_reader<QAnyStringView >() (args, heap);
  QAnyStringView arg2 = gsi::arg_reader<QAnyStringView >() (args, heap);
  ret.write<bool > ((bool)QAnyStringView::equal (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QAnyStringView () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAnyStringView::QAnyStringView()\nThis method creates an object of class QAnyStringView.", &_init_ctor_QAnyStringView_0, &_call_ctor_QAnyStringView_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAnyStringView::QAnyStringView(const QByteArray &str)\nThis method creates an object of class QAnyStringView.", &_init_ctor_QAnyStringView_2309, &_call_ctor_QAnyStringView_2309);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAnyStringView::QAnyStringView(const QString &str)\nThis method creates an object of class QAnyStringView.", &_init_ctor_QAnyStringView_2025, &_call_ctor_QAnyStringView_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAnyStringView::QAnyStringView(QLatin1String str)\nThis method creates an object of class QAnyStringView.", &_init_ctor_QAnyStringView_1701, &_call_ctor_QAnyStringView_1701);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAnyStringView::QAnyStringView(const QChar &c)\nThis method creates an object of class QAnyStringView.", &_init_ctor_QAnyStringView_1776, &_call_ctor_QAnyStringView_1776);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAnyStringView::QAnyStringView(QStringView v)\nThis method creates an object of class QAnyStringView.", &_init_ctor_QAnyStringView_1559, &_call_ctor_QAnyStringView_1559);
  methods += new qt_gsi::GenericMethod ("back", "@brief Method QChar QAnyStringView::back()\n", true, &_init_f_back_c0, &_call_f_back_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method const void *QAnyStringView::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("empty", "@brief Method bool QAnyStringView::empty()\n", true, &_init_f_empty_c0, &_call_f_empty_c0);
  methods += new qt_gsi::GenericMethod ("front", "@brief Method QChar QAnyStringView::front()\n", true, &_init_f_front_c0, &_call_f_front_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QAnyStringView::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QAnyStringView::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method qsizetype QAnyStringView::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qsizetype QAnyStringView::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("size_bytes", "@brief Method qsizetype QAnyStringView::size_bytes()\n", true, &_init_f_size_bytes_c0, &_call_f_size_bytes_c0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QAnyStringView::toString()\n", true, &_init_f_toString_c0, &_call_f_toString_c0);
  methods += new qt_gsi::GenericStaticMethod ("compare", "@brief Static method int QAnyStringView::compare(QAnyStringView lhs, QAnyStringView rhs, Qt::CaseSensitivity cs)\nThis method is static and can be called without an instance.", &_init_f_compare_5818, &_call_f_compare_5818);
  methods += new qt_gsi::GenericStaticMethod ("equal", "@brief Static method bool QAnyStringView::equal(QAnyStringView lhs, QAnyStringView rhs)\nThis method is static and can be called without an instance.", &_init_f_equal_3602, &_call_f_equal_3602);
  return methods;
}

gsi::Class<QAnyStringView> decl_QAnyStringView ("QtCore", "QAnyStringView",
  methods_QAnyStringView (),
  "@qt\n@brief Binding of QAnyStringView");


GSI_QTCORE_PUBLIC gsi::Class<QAnyStringView> &qtdecl_QAnyStringView () { return decl_QAnyStringView; }

}
