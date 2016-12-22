#-------------------------------------------------
#
# Project created by QtCreator 2016-12-21T22:49:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VSI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES +=\
    src/main.cpp \
    src/dialog.cpp \
    src/datareaders.cpp \
    src/sortings.cpp \
    src/algorithm.cpp \
    src/fpts.cpp \
    src/thread.cpp \
    src/dataout.cpp \
    src/maindialog.cpp \
    src/choosesortdialog.cpp \
    src/sortingdialog.cpp

HEADERS  += \
    src/dialog.h \
    src/datareaders.h \
    src/sortings.h \
    src/algorithm.h \
    src/fpts.h \
    src/thread.h \
    src/dataout.h \
    src/maindialog.h \
    src/choosesortdialog.h \
    src/sortingdialog.h

FORMS    += \
    ui/choosesortdialog.ui \
    ui/maindialog.ui \
    ui/sortingdialog.ui
