QT += quick
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    Src/imageprovider.h

SOURCES += \
    Src/main.cpp \
    Src/imageprovider.cpp

RESOURCES += \
    image.qrc \
    qml.qrc

