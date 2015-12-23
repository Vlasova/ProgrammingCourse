#-------------------------------------------------
#
# Project created by QtCreator 2015-12-04T00:05:08
#
#-------------------------------------------------

QT       -= gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES +=  \
    search_clear.c \
    search_threat.c \
    sinx.c \
    trancfer_to_meter.c \
    palindromes_search.c

HEADERS +=  \
    search_clear.h \
    search_threat.h \
    trancfer_to_meter.h \
    palindromes_search.h \
    sinx.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

