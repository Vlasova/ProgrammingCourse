#-------------------------------------------------
#
# Project created by QtCreator 2015-12-04T00:05:08
#
#-------------------------------------------------

QT       -= gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += lib.cpp \
    search_clear.c \
    search_threat.c \
    sinx.c \
    trancfer_to_meter.c \
    palindromes_search.c

HEADERS += lib.h \
    search_clear.h \
    search_threat.h \
    trancfer_to_meter.h \
    sin_x.h \
    palindromes_search.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
