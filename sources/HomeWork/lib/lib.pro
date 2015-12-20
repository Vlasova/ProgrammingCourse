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

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/./release/ -llib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/./debug/ -llib
else:unix: LIBS += -L$$OUT_PWD/./ -llib

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/./release/liblib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/./debug/liblib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/./release/lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/./debug/lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/./liblib.a
