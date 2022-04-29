QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    balance.cpp \
    deposit.cpp \
    loginwindow.cpp \
    main.cpp \
    mainpage.cpp \
    mainwindow.cpp \
    newaccountwindow.cpp \
    withdraw.cpp

HEADERS += \
    balance.h \
    deposit.h \
    loginwindow.h \
    mainpage.h \
    mainwindow.h \
    newaccountwindow.h \
    withdraw.h

FORMS += \
    balance.ui \
    deposit.ui \
    loginwindow.ui \
    mainpage.ui \
    mainwindow.ui \
    newaccountwindow.ui \
    withdraw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
