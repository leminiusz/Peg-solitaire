QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
   
SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/gamewindow.cpp \
    src/samotnik_model.cpp \
    src/wyjatki.cpp

HEADERS += \
    src/mainwindow.h \
    src/gamewindow.h \
    src/samotnik_model.h \
    src/wyjatki.h

FORMS += \
    src/mainwindow.ui \
    src/gamewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc