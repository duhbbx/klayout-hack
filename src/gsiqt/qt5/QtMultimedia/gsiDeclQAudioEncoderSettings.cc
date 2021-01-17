
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
*  @file gsiDeclQAudioEncoderSettings.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioEncoderSettings>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioEncoderSettings

//  Constructor QAudioEncoderSettings::QAudioEncoderSettings()


static void _init_ctor_QAudioEncoderSettings_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioEncoderSettings> ();
}

static void _call_ctor_QAudioEncoderSettings_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioEncoderSettings *> (new QAudioEncoderSettings ());
}


//  Constructor QAudioEncoderSettings::QAudioEncoderSettings(const QAudioEncoderSettings &other)


static void _init_ctor_QAudioEncoderSettings_3445 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  decl->set_return_new<QAudioEncoderSettings> ();
}

static void _call_ctor_QAudioEncoderSettings_3445 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = gsi::arg_reader<const QAudioEncoderSettings & >() (args, heap);
  ret.write<QAudioEncoderSettings *> (new QAudioEncoderSettings (arg1));
}


// int QAudioEncoderSettings::bitRate()


static void _init_f_bitRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bitRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioEncoderSettings *)cls)->bitRate ());
}


// int QAudioEncoderSettings::channelCount()


static void _init_f_channelCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_channelCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioEncoderSettings *)cls)->channelCount ());
}


// QString QAudioEncoderSettings::codec()


static void _init_f_codec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_codec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioEncoderSettings *)cls)->codec ());
}


// QMultimedia::EncodingMode QAudioEncoderSettings::encodingMode()


static void _init_f_encodingMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::EncodingMode>::target_type > ();
}

static void _call_f_encodingMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::EncodingMode>::target_type > ((qt_gsi::Converter<QMultimedia::EncodingMode>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::EncodingMode>(((QAudioEncoderSettings *)cls)->encodingMode ()));
}


// QVariant QAudioEncoderSettings::encodingOption(const QString &option)


static void _init_f_encodingOption_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_encodingOption_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QAudioEncoderSettings *)cls)->encodingOption (arg1));
}


// QMap<QString, QVariant> QAudioEncoderSettings::encodingOptions()


static void _init_f_encodingOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMap<QString, QVariant> > ();
}

static void _call_f_encodingOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMap<QString, QVariant> > ((QMap<QString, QVariant>)((QAudioEncoderSettings *)cls)->encodingOptions ());
}


// bool QAudioEncoderSettings::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioEncoderSettings *)cls)->isNull ());
}


// bool QAudioEncoderSettings::operator!=(const QAudioEncoderSettings &other)


static void _init_f_operator_excl__eq__c3445 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3445 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = gsi::arg_reader<const QAudioEncoderSettings & >() (args, heap);
  ret.write<bool > ((bool)((QAudioEncoderSettings *)cls)->operator!= (arg1));
}


// QAudioEncoderSettings &QAudioEncoderSettings::operator=(const QAudioEncoderSettings &other)


static void _init_f_operator_eq__3445 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  decl->set_return<QAudioEncoderSettings & > ();
}

static void _call_f_operator_eq__3445 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = gsi::arg_reader<const QAudioEncoderSettings & >() (args, heap);
  ret.write<QAudioEncoderSettings & > ((QAudioEncoderSettings &)((QAudioEncoderSettings *)cls)->operator= (arg1));
}


// bool QAudioEncoderSettings::operator==(const QAudioEncoderSettings &other)


static void _init_f_operator_eq__eq__c3445 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3445 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = gsi::arg_reader<const QAudioEncoderSettings & >() (args, heap);
  ret.write<bool > ((bool)((QAudioEncoderSettings *)cls)->operator== (arg1));
}


// QMultimedia::EncodingQuality QAudioEncoderSettings::quality()


static void _init_f_quality_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type > ();
}

static void _call_f_quality_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type > ((qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::EncodingQuality>(((QAudioEncoderSettings *)cls)->quality ()));
}


// int QAudioEncoderSettings::sampleRate()


static void _init_f_sampleRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sampleRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioEncoderSettings *)cls)->sampleRate ());
}


// void QAudioEncoderSettings::setBitRate(int bitrate)


static void _init_f_setBitRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bitrate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBitRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setBitRate (arg1);
}


// void QAudioEncoderSettings::setChannelCount(int channels)


static void _init_f_setChannelCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("channels");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChannelCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setChannelCount (arg1);
}


// void QAudioEncoderSettings::setCodec(const QString &codec)


static void _init_f_setCodec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setCodec (arg1);
}


// void QAudioEncoderSettings::setEncodingMode(QMultimedia::EncodingMode)


static void _init_f_setEncodingMode_2864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QMultimedia::EncodingMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEncodingMode_2864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMultimedia::EncodingMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QMultimedia::EncodingMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setEncodingMode (qt_gsi::QtToCppAdaptor<QMultimedia::EncodingMode>(arg1).cref());
}


// void QAudioEncoderSettings::setEncodingOption(const QString &option, const QVariant &value)


static void _init_f_setEncodingOption_4036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setEncodingOption_4036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setEncodingOption (arg1, arg2);
}


// void QAudioEncoderSettings::setEncodingOptions(const QMap<QString, QVariant> &options)


static void _init_f_setEncodingOptions_3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<const QMap<QString, QVariant> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEncodingOptions_3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMap<QString, QVariant> &arg1 = gsi::arg_reader<const QMap<QString, QVariant> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setEncodingOptions (arg1);
}


// void QAudioEncoderSettings::setQuality(QMultimedia::EncodingQuality quality)


static void _init_f_setQuality_3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quality");
  decl->add_arg<const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQuality_3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setQuality (qt_gsi::QtToCppAdaptor<QMultimedia::EncodingQuality>(arg1).cref());
}


// void QAudioEncoderSettings::setSampleRate(int rate)


static void _init_f_setSampleRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettings *)cls)->setSampleRate (arg1);
}



namespace gsi
{

static gsi::Methods methods_QAudioEncoderSettings () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioEncoderSettings::QAudioEncoderSettings()\nThis method creates an object of class QAudioEncoderSettings.", &_init_ctor_QAudioEncoderSettings_0, &_call_ctor_QAudioEncoderSettings_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioEncoderSettings::QAudioEncoderSettings(const QAudioEncoderSettings &other)\nThis method creates an object of class QAudioEncoderSettings.", &_init_ctor_QAudioEncoderSettings_3445, &_call_ctor_QAudioEncoderSettings_3445);
  methods += new qt_gsi::GenericMethod (":bitRate", "@brief Method int QAudioEncoderSettings::bitRate()\n", true, &_init_f_bitRate_c0, &_call_f_bitRate_c0);
  methods += new qt_gsi::GenericMethod (":channelCount", "@brief Method int QAudioEncoderSettings::channelCount()\n", true, &_init_f_channelCount_c0, &_call_f_channelCount_c0);
  methods += new qt_gsi::GenericMethod (":codec", "@brief Method QString QAudioEncoderSettings::codec()\n", true, &_init_f_codec_c0, &_call_f_codec_c0);
  methods += new qt_gsi::GenericMethod (":encodingMode", "@brief Method QMultimedia::EncodingMode QAudioEncoderSettings::encodingMode()\n", true, &_init_f_encodingMode_c0, &_call_f_encodingMode_c0);
  methods += new qt_gsi::GenericMethod ("encodingOption", "@brief Method QVariant QAudioEncoderSettings::encodingOption(const QString &option)\n", true, &_init_f_encodingOption_c2025, &_call_f_encodingOption_c2025);
  methods += new qt_gsi::GenericMethod (":encodingOptions", "@brief Method QMap<QString, QVariant> QAudioEncoderSettings::encodingOptions()\n", true, &_init_f_encodingOptions_c0, &_call_f_encodingOptions_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QAudioEncoderSettings::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QAudioEncoderSettings::operator!=(const QAudioEncoderSettings &other)\n", true, &_init_f_operator_excl__eq__c3445, &_call_f_operator_excl__eq__c3445);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QAudioEncoderSettings &QAudioEncoderSettings::operator=(const QAudioEncoderSettings &other)\n", false, &_init_f_operator_eq__3445, &_call_f_operator_eq__3445);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QAudioEncoderSettings::operator==(const QAudioEncoderSettings &other)\n", true, &_init_f_operator_eq__eq__c3445, &_call_f_operator_eq__eq__c3445);
  methods += new qt_gsi::GenericMethod (":quality", "@brief Method QMultimedia::EncodingQuality QAudioEncoderSettings::quality()\n", true, &_init_f_quality_c0, &_call_f_quality_c0);
  methods += new qt_gsi::GenericMethod (":sampleRate", "@brief Method int QAudioEncoderSettings::sampleRate()\n", true, &_init_f_sampleRate_c0, &_call_f_sampleRate_c0);
  methods += new qt_gsi::GenericMethod ("setBitRate|bitRate=", "@brief Method void QAudioEncoderSettings::setBitRate(int bitrate)\n", false, &_init_f_setBitRate_767, &_call_f_setBitRate_767);
  methods += new qt_gsi::GenericMethod ("setChannelCount|channelCount=", "@brief Method void QAudioEncoderSettings::setChannelCount(int channels)\n", false, &_init_f_setChannelCount_767, &_call_f_setChannelCount_767);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QAudioEncoderSettings::setCodec(const QString &codec)\n", false, &_init_f_setCodec_2025, &_call_f_setCodec_2025);
  methods += new qt_gsi::GenericMethod ("setEncodingMode|encodingMode=", "@brief Method void QAudioEncoderSettings::setEncodingMode(QMultimedia::EncodingMode)\n", false, &_init_f_setEncodingMode_2864, &_call_f_setEncodingMode_2864);
  methods += new qt_gsi::GenericMethod ("setEncodingOption", "@brief Method void QAudioEncoderSettings::setEncodingOption(const QString &option, const QVariant &value)\n", false, &_init_f_setEncodingOption_4036, &_call_f_setEncodingOption_4036);
  methods += new qt_gsi::GenericMethod ("setEncodingOptions|encodingOptions=", "@brief Method void QAudioEncoderSettings::setEncodingOptions(const QMap<QString, QVariant> &options)\n", false, &_init_f_setEncodingOptions_3508, &_call_f_setEncodingOptions_3508);
  methods += new qt_gsi::GenericMethod ("setQuality|quality=", "@brief Method void QAudioEncoderSettings::setQuality(QMultimedia::EncodingQuality quality)\n", false, &_init_f_setQuality_3220, &_call_f_setQuality_3220);
  methods += new qt_gsi::GenericMethod ("setSampleRate|sampleRate=", "@brief Method void QAudioEncoderSettings::setSampleRate(int rate)\n", false, &_init_f_setSampleRate_767, &_call_f_setSampleRate_767);
  return methods;
}

gsi::Class<QAudioEncoderSettings> decl_QAudioEncoderSettings ("QtMultimedia", "QAudioEncoderSettings",
  methods_QAudioEncoderSettings (),
  "@qt\n@brief Binding of QAudioEncoderSettings");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioEncoderSettings> &qtdecl_QAudioEncoderSettings () { return decl_QAudioEncoderSettings; }

}

