QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    biggest.cpp \
    bigpic.cpp \
    choosemodeldialog.cpp \
    main.cpp \
    mainwindow.cpp \
    newdialog.cpp \
    packagedialog.cpp \
    projectinfo.cpp \
    restoredialog.cpp

HEADERS += \
    biggest.h \
    biggestdelegate.h \
    bigpic.h \
    choosemodeldialog.h \
    mainwindow.h \
    newdialog.h \
    packagedialog.h \
    projectinfo.h \
    restoredialog.h

FORMS += \
    biggest.ui \
    bigpic.ui \
    choosemodeldialog.ui \
    mainwindow.ui \
    newdialog.ui \
    packagedialog.ui \
    restoredialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Myproject_1.pro.user

RESOURCES += \
    src.qrc

msvc:QMAKE_CXXFLAGS += -execution-charset:utf-8

RC_ICONS += image/pic.ico
