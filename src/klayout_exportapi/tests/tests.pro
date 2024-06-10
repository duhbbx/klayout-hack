
DESTDIR_UT = $$OUT_PWD/../..
DESTDIR = $$OUT_PWD/..

TARGET = klayout_exportapi_tests

include($$PWD/../../lib_ut.pri)

SOURCES = \
  klayout_exportapi_tests.cc

INCLUDEPATH += $$RBA_INC $$TL_INC $$DB_INC $$GSI_INC
DEPENDPATH += $$RBA_INC $$TL_INC $$DB_INC $$GSI_INC

LIBS += -L$$DESTDIR_UT -lklayout_rba -lklayout_tl -lklayout_db -lklayout_gsi

