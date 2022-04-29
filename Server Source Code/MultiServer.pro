#-------------------------------------------------
#
# Project created by QtCreator 2011-04-15T15:49:12
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui
QT       += widgets

TARGET = MultiServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    account.cpp \
    client.cpp \
    currentclient.cpp \
    myserver.cpp \
    mythread.cpp

HEADERS += \
    account.h \
    client.h \
    currentclient.h \
    myserver.h \
    mythread.h

FORMS += \
    currentclient.ui
