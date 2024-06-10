
DESTDIR = $$OUT_PWD/../..

TARGET = klayout_exportapi



DEFINES += MAKE_LIB_LIBRARY


include($$PWD/../../lib.pri)
include($$PWD/../../with_all_libs.pri)

HEADERS = \

FORMS = \

SOURCES = \
  klayout_exportapi.cc \

RESOURCES = \

win32 {
  RC_FILE = $$PWD/klayout.rc
}

INCLUDEPATH += $$DOC_INC $$ICONS_INC $$QTBASIC_INC
DEPENDPATH += $$DOC_INC $$ICONS_INC $$QTBASIC_INC

LIBS += -lklayout_doc -lklayout_icons
