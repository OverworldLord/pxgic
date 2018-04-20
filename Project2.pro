#-------------------------------------------------
#
# Project created by QtCreator 2018-04-10T18:06:47
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    addcustomer.cpp \
    adminmenu.cpp \
    contactus.cpp \
    customerlisting.cpp \
    databasemanager.cpp \
    mainwindow.cpp \
    moreinformation.cpp \
    delcustomer.cpp \
    makepurchase.cpp \
    guaranteepolicy.cpp \
    loginwindow.cpp \
    pamphlet.cpp \
    saleslisting.cpp

HEADERS += \
    addcustomer.h \
    adminmenu.h \
    constants.h \
    contactus.h \
    customerlisting.h \
    databasemanager.h \
    mainwindow.h \
    moreinformation.h \
    delcustomer.h \
    makepurchase.h \
    guaranteepolicy.h \
    loginwindow.h \
    pamphlet.h \
    saleslisting.h

FORMS += \
    addcustomer.ui \
    adminmenu.ui \
    contactus.ui \
    customerlisting.ui \
    loginwindow.ui \
    mainwindow.ui \
    moreinformation.ui \
    delcustomer.ui \
    makepurchase.ui \
    guaranteepolicy.ui \
    pamphlet.ui \
    saleslisting.ui
