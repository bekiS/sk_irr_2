#-------------------------------------------------
#
# Project created by QtCreator 2014-02-08T19:21:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sk_irr_1b
TEMPLATE = app

#CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    qirrlichtwidget.cpp

HEADERS  += mainwindow.h \
    qirrlichtwidget.h

FORMS    += mainwindow.ui


LIBS += -L/usr/lib/ -lIrrlicht

INCLUDEPATH += /usr/include/irrlicht
DEPENDPATH += /usr/include/irrlicht
