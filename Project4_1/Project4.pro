#-------------------------------------------------
#
# Project created by QtCreator 2016-04-10T13:26:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project4
TEMPLATE = app


SOURCES += main.cpp\
        databaseform.cpp \
    addrecordform.cpp

HEADERS  += databaseform.h \
    addrecordform.h \
    employee.h \
    employeedb.h \
    bubblesorttemplate.h \
    sortablevector.h \
    bubblesortdecreasing.h \
    bubblesortincreasing.h \
    sortableemployeedatabase.h \
    bubblesortdecreasing.h \
    sortablebyfirstname.h \
    sortablebylastname.h \
    sortablebysalary.h \
    sortablebyhiringyear.h

FORMS    += databaseform.ui \
    addrecordform.ui
