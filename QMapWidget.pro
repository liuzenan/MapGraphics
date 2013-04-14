######################################################################
# Automatically generated by qmake (2.01a) Sat Apr 13 21:49:25 2013
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += . MapGraphics MapGraphics/guts MapGraphics/tileSources
INCLUDEPATH += . MapGraphics MapGraphics/guts MapGraphics/tileSources
QT += network sql

# Input
HEADERS += MainWindow.h \
           mapcoloroverlay.h \
           qmapwidget.h \
           ui_MainWindow.h \
           MapGraphics/CircleObject.h \
           MapGraphics/LineObject.h \
           MapGraphics/MapGraphics_global.h \
           MapGraphics/MapGraphicsObject.h \
           MapGraphics/MapGraphicsScene.h \
           MapGraphics/MapGraphicsView.h \
           MapGraphics/MapTileSource.h \
           MapGraphics/PolygonObject.h \
           MapGraphics/Position.h \
           MapGraphics/guts/Conversions.h \
           MapGraphics/guts/MapGraphicsNetwork.h \
           MapGraphics/guts/MapTileGraphicsObject.h \
           MapGraphics/guts/PrivateQGraphicsInfoSource.h \
           MapGraphics/guts/PrivateQGraphicsObject.h \
           MapGraphics/guts/PrivateQGraphicsScene.h \
           MapGraphics/guts/PrivateQGraphicsView.h \
           MapGraphics/tileSources/OSMTileSource.h \
           MapGraphics/tileSources/CompositeTileSource.h
SOURCES += main.cpp \
           MainWindow.cpp \
           mapcoloroverlay.cpp \
           qmapwidget.cpp \
           MapGraphics/CircleObject.cpp \
           MapGraphics/LineObject.cpp \
           MapGraphics/MapGraphicsObject.cpp \
           MapGraphics/MapGraphicsScene.cpp \
           MapGraphics/MapGraphicsView.cpp \
           MapGraphics/MapTileSource.cpp \
           MapGraphics/PolygonObject.cpp \
           MapGraphics/Position.cpp \
           MapGraphics/guts/Conversions.cpp \
           MapGraphics/guts/MapGraphicsNetwork.cpp \
           MapGraphics/guts/MapTileGraphicsObject.cpp \
           MapGraphics/guts/PrivateQGraphicsInfoSource.cpp \
           MapGraphics/guts/PrivateQGraphicsObject.cpp \
           MapGraphics/guts/PrivateQGraphicsScene.cpp \
           MapGraphics/guts/PrivateQGraphicsView.cpp \
           MapGraphics/tileSources/OSMTileSource.cpp \
           MapGraphics/tileSources/CompositeTileSource.cpp
RESOURCES += MapGraphics/resources.qrc
