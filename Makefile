#############################################################################
# Makefile for building: QMapWidget
# Generated by qmake (2.01a) (Qt 4.8.3) on: Sun Apr 14 05:07:40 2013
# Project:  QMapWidget.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile QMapWidget.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -IMapGraphics -IMapGraphics/guts -IMapGraphics/tileSources -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
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
		MapGraphics/tileSources/CompositeTileSource.cpp moc_MainWindow.cpp \
		moc_mapcoloroverlay.cpp \
		moc_CircleObject.cpp \
		moc_LineObject.cpp \
		moc_MapGraphicsObject.cpp \
		moc_MapGraphicsScene.cpp \
		moc_MapGraphicsView.cpp \
		moc_MapTileSource.cpp \
		moc_PolygonObject.cpp \
		moc_MapTileGraphicsObject.cpp \
		moc_PrivateQGraphicsObject.cpp \
		moc_PrivateQGraphicsScene.cpp \
		moc_PrivateQGraphicsView.cpp \
		moc_OSMTileSource.cpp \
		moc_CompositeTileSource.cpp \
		qrc_resources.cpp
OBJECTS       = main.o \
		MainWindow.o \
		mapcoloroverlay.o \
		qmapwidget.o \
		CircleObject.o \
		LineObject.o \
		MapGraphicsObject.o \
		MapGraphicsScene.o \
		MapGraphicsView.o \
		MapTileSource.o \
		PolygonObject.o \
		Position.o \
		Conversions.o \
		MapGraphicsNetwork.o \
		MapTileGraphicsObject.o \
		PrivateQGraphicsInfoSource.o \
		PrivateQGraphicsObject.o \
		PrivateQGraphicsScene.o \
		PrivateQGraphicsView.o \
		OSMTileSource.o \
		CompositeTileSource.o \
		moc_MainWindow.o \
		moc_mapcoloroverlay.o \
		moc_CircleObject.o \
		moc_LineObject.o \
		moc_MapGraphicsObject.o \
		moc_MapGraphicsScene.o \
		moc_MapGraphicsView.o \
		moc_MapTileSource.o \
		moc_PolygonObject.o \
		moc_MapTileGraphicsObject.o \
		moc_PrivateQGraphicsObject.o \
		moc_PrivateQGraphicsScene.o \
		moc_PrivateQGraphicsView.o \
		moc_OSMTileSource.o \
		moc_CompositeTileSource.o \
		qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/declarative_debug.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		QMapWidget.pro
QMAKE_TARGET  = QMapWidget
DESTDIR       = 
TARGET        = QMapWidget

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: QMapWidget.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/declarative_debug.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtNetwork.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile QMapWidget.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/declarative_debug.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtNetwork.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile QMapWidget.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/QMapWidget1.0.0 || $(MKDIR) .tmp/QMapWidget1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/QMapWidget1.0.0/ && $(COPY_FILE) --parents MainWindow.h mapcoloroverlay.h qmapwidget.h ui_MainWindow.h MapGraphics/CircleObject.h MapGraphics/LineObject.h MapGraphics/MapGraphics_global.h MapGraphics/MapGraphicsObject.h MapGraphics/MapGraphicsScene.h MapGraphics/MapGraphicsView.h MapGraphics/MapTileSource.h MapGraphics/PolygonObject.h MapGraphics/Position.h MapGraphics/guts/Conversions.h MapGraphics/guts/MapGraphicsNetwork.h MapGraphics/guts/MapTileGraphicsObject.h MapGraphics/guts/PrivateQGraphicsInfoSource.h MapGraphics/guts/PrivateQGraphicsObject.h MapGraphics/guts/PrivateQGraphicsScene.h MapGraphics/guts/PrivateQGraphicsView.h MapGraphics/tileSources/OSMTileSource.h MapGraphics/tileSources/CompositeTileSource.h .tmp/QMapWidget1.0.0/ && $(COPY_FILE) --parents MapGraphics/resources.qrc .tmp/QMapWidget1.0.0/ && $(COPY_FILE) --parents main.cpp MainWindow.cpp mapcoloroverlay.cpp qmapwidget.cpp MapGraphics/CircleObject.cpp MapGraphics/LineObject.cpp MapGraphics/MapGraphicsObject.cpp MapGraphics/MapGraphicsScene.cpp MapGraphics/MapGraphicsView.cpp MapGraphics/MapTileSource.cpp MapGraphics/PolygonObject.cpp MapGraphics/Position.cpp MapGraphics/guts/Conversions.cpp MapGraphics/guts/MapGraphicsNetwork.cpp MapGraphics/guts/MapTileGraphicsObject.cpp MapGraphics/guts/PrivateQGraphicsInfoSource.cpp MapGraphics/guts/PrivateQGraphicsObject.cpp MapGraphics/guts/PrivateQGraphicsScene.cpp MapGraphics/guts/PrivateQGraphicsView.cpp MapGraphics/tileSources/OSMTileSource.cpp MapGraphics/tileSources/CompositeTileSource.cpp .tmp/QMapWidget1.0.0/ && (cd `dirname .tmp/QMapWidget1.0.0` && $(TAR) QMapWidget1.0.0.tar QMapWidget1.0.0 && $(COMPRESS) QMapWidget1.0.0.tar) && $(MOVE) `dirname .tmp/QMapWidget1.0.0`/QMapWidget1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/QMapWidget1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_MainWindow.cpp moc_mapcoloroverlay.cpp moc_CircleObject.cpp moc_LineObject.cpp moc_MapGraphicsObject.cpp moc_MapGraphicsScene.cpp moc_MapGraphicsView.cpp moc_MapTileSource.cpp moc_PolygonObject.cpp moc_MapTileGraphicsObject.cpp moc_PrivateQGraphicsObject.cpp moc_PrivateQGraphicsScene.cpp moc_PrivateQGraphicsView.cpp moc_OSMTileSource.cpp moc_CompositeTileSource.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MainWindow.cpp moc_mapcoloroverlay.cpp moc_CircleObject.cpp moc_LineObject.cpp moc_MapGraphicsObject.cpp moc_MapGraphicsScene.cpp moc_MapGraphicsView.cpp moc_MapTileSource.cpp moc_PolygonObject.cpp moc_MapTileGraphicsObject.cpp moc_PrivateQGraphicsObject.cpp moc_PrivateQGraphicsScene.cpp moc_PrivateQGraphicsView.cpp moc_OSMTileSource.cpp moc_CompositeTileSource.cpp
moc_MainWindow.cpp: MainWindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MainWindow.h -o moc_MainWindow.cpp

moc_mapcoloroverlay.cpp: MapGraphics/PolygonObject.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h \
		mapcoloroverlay.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mapcoloroverlay.h -o moc_mapcoloroverlay.cpp

moc_CircleObject.cpp: MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/CircleObject.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/CircleObject.h -o moc_CircleObject.cpp

moc_LineObject.cpp: MapGraphics/MapGraphics_global.h \
		MapGraphics/Position.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/LineObject.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/LineObject.h -o moc_LineObject.cpp

moc_MapGraphicsObject.cpp: MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/MapGraphicsObject.h -o moc_MapGraphicsObject.cpp

moc_MapGraphicsScene.cpp: MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphicsScene.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/MapGraphicsScene.h -o moc_MapGraphicsScene.cpp

moc_MapGraphicsView.cpp: MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/MapTileGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/MapGraphicsView.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/MapGraphicsView.h -o moc_MapGraphicsView.cpp

moc_MapTileSource.cpp: MapGraphics/MapGraphics_global.h \
		MapGraphics/MapTileSource.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/MapTileSource.h -o moc_MapTileSource.cpp

moc_PolygonObject.cpp: MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/PolygonObject.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/PolygonObject.h -o moc_PolygonObject.cpp

moc_MapTileGraphicsObject.cpp: MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/guts/MapTileGraphicsObject.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/guts/MapTileGraphicsObject.h -o moc_MapTileGraphicsObject.cpp

moc_PrivateQGraphicsObject.cpp: MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/PrivateQGraphicsObject.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/guts/PrivateQGraphicsObject.h -o moc_PrivateQGraphicsObject.cpp

moc_PrivateQGraphicsScene.cpp: MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/PrivateQGraphicsScene.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/guts/PrivateQGraphicsScene.h -o moc_PrivateQGraphicsScene.cpp

moc_PrivateQGraphicsView.cpp: MapGraphics/guts/PrivateQGraphicsView.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/guts/PrivateQGraphicsView.h -o moc_PrivateQGraphicsView.cpp

moc_OSMTileSource.cpp: MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/tileSources/OSMTileSource.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/tileSources/OSMTileSource.h -o moc_OSMTileSource.cpp

moc_CompositeTileSource.cpp: MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/tileSources/CompositeTileSource.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) MapGraphics/tileSources/CompositeTileSource.h -o moc_CompositeTileSource.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: MapGraphics/resources.qrc \
		MapGraphics/images/editdelete.png \
		MapGraphics/images/edit_add.png
	/usr/bin/rcc -name resources MapGraphics/resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

main.o: main.cpp MainWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

MainWindow.o: MainWindow.cpp MainWindow.h \
		ui_MainWindow.h \
		qmapwidget.h \
		MapGraphics/MapGraphicsView.h \
		MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/MapTileGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow.o MainWindow.cpp

mapcoloroverlay.o: mapcoloroverlay.cpp mapcoloroverlay.h \
		MapGraphics/PolygonObject.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mapcoloroverlay.o mapcoloroverlay.cpp

qmapwidget.o: qmapwidget.cpp qmapwidget.h \
		MapGraphics/MapGraphicsView.h \
		MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/MapTileGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/tileSources/OSMTileSource.h \
		MapGraphics/CircleObject.h \
		MapGraphics/PolygonObject.h \
		mapcoloroverlay.h \
		MapGraphics/guts/MapGraphicsNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qmapwidget.o qmapwidget.cpp

CircleObject.o: MapGraphics/CircleObject.cpp MapGraphics/CircleObject.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CircleObject.o MapGraphics/CircleObject.cpp

LineObject.o: MapGraphics/LineObject.cpp MapGraphics/LineObject.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/Position.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/guts/Conversions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LineObject.o MapGraphics/LineObject.cpp

MapGraphicsObject.o: MapGraphics/MapGraphicsObject.cpp MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MapGraphicsObject.o MapGraphics/MapGraphicsObject.cpp

MapGraphicsScene.o: MapGraphics/MapGraphicsScene.cpp MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MapGraphicsScene.o MapGraphics/MapGraphicsScene.cpp

MapGraphicsView.o: MapGraphics/MapGraphicsView.cpp MapGraphics/MapGraphicsView.h \
		MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/MapTileGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/guts/PrivateQGraphicsScene.h \
		MapGraphics/guts/PrivateQGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsView.h \
		MapGraphics/guts/Conversions.h \
		MapGraphics/Position.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MapGraphicsView.o MapGraphics/MapGraphicsView.cpp

MapTileSource.o: MapGraphics/MapTileSource.cpp MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MapTileSource.o MapGraphics/MapTileSource.cpp

PolygonObject.o: MapGraphics/PolygonObject.cpp MapGraphics/PolygonObject.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/guts/Conversions.h \
		MapGraphics/Position.h \
		MapGraphics/CircleObject.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PolygonObject.o MapGraphics/PolygonObject.cpp

Position.o: MapGraphics/Position.cpp MapGraphics/Position.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/guts/Conversions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Position.o MapGraphics/Position.cpp

Conversions.o: MapGraphics/guts/Conversions.cpp MapGraphics/guts/Conversions.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/Position.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Conversions.o MapGraphics/guts/Conversions.cpp

MapGraphicsNetwork.o: MapGraphics/guts/MapGraphicsNetwork.cpp MapGraphics/guts/MapGraphicsNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MapGraphicsNetwork.o MapGraphics/guts/MapGraphicsNetwork.cpp

MapTileGraphicsObject.o: MapGraphics/guts/MapTileGraphicsObject.cpp MapGraphics/guts/MapTileGraphicsObject.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MapTileGraphicsObject.o MapGraphics/guts/MapTileGraphicsObject.cpp

PrivateQGraphicsInfoSource.o: MapGraphics/guts/PrivateQGraphicsInfoSource.cpp MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PrivateQGraphicsInfoSource.o MapGraphics/guts/PrivateQGraphicsInfoSource.cpp

PrivateQGraphicsObject.o: MapGraphics/guts/PrivateQGraphicsObject.cpp MapGraphics/guts/PrivateQGraphicsObject.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/guts/Conversions.h \
		MapGraphics/Position.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PrivateQGraphicsObject.o MapGraphics/guts/PrivateQGraphicsObject.cpp

PrivateQGraphicsScene.o: MapGraphics/guts/PrivateQGraphicsScene.cpp MapGraphics/guts/PrivateQGraphicsScene.h \
		MapGraphics/MapGraphicsScene.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/MapGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsObject.h \
		MapGraphics/guts/PrivateQGraphicsInfoSource.h \
		MapGraphics/MapTileSource.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PrivateQGraphicsScene.o MapGraphics/guts/PrivateQGraphicsScene.cpp

PrivateQGraphicsView.o: MapGraphics/guts/PrivateQGraphicsView.cpp MapGraphics/guts/PrivateQGraphicsView.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PrivateQGraphicsView.o MapGraphics/guts/PrivateQGraphicsView.cpp

OSMTileSource.o: MapGraphics/tileSources/OSMTileSource.cpp MapGraphics/tileSources/OSMTileSource.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h \
		MapGraphics/guts/MapGraphicsNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OSMTileSource.o MapGraphics/tileSources/OSMTileSource.cpp

CompositeTileSource.o: MapGraphics/tileSources/CompositeTileSource.cpp MapGraphics/tileSources/CompositeTileSource.h \
		MapGraphics/MapTileSource.h \
		MapGraphics/MapGraphics_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CompositeTileSource.o MapGraphics/tileSources/CompositeTileSource.cpp

moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MainWindow.o moc_MainWindow.cpp

moc_mapcoloroverlay.o: moc_mapcoloroverlay.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mapcoloroverlay.o moc_mapcoloroverlay.cpp

moc_CircleObject.o: moc_CircleObject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_CircleObject.o moc_CircleObject.cpp

moc_LineObject.o: moc_LineObject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_LineObject.o moc_LineObject.cpp

moc_MapGraphicsObject.o: moc_MapGraphicsObject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MapGraphicsObject.o moc_MapGraphicsObject.cpp

moc_MapGraphicsScene.o: moc_MapGraphicsScene.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MapGraphicsScene.o moc_MapGraphicsScene.cpp

moc_MapGraphicsView.o: moc_MapGraphicsView.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MapGraphicsView.o moc_MapGraphicsView.cpp

moc_MapTileSource.o: moc_MapTileSource.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MapTileSource.o moc_MapTileSource.cpp

moc_PolygonObject.o: moc_PolygonObject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_PolygonObject.o moc_PolygonObject.cpp

moc_MapTileGraphicsObject.o: moc_MapTileGraphicsObject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MapTileGraphicsObject.o moc_MapTileGraphicsObject.cpp

moc_PrivateQGraphicsObject.o: moc_PrivateQGraphicsObject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_PrivateQGraphicsObject.o moc_PrivateQGraphicsObject.cpp

moc_PrivateQGraphicsScene.o: moc_PrivateQGraphicsScene.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_PrivateQGraphicsScene.o moc_PrivateQGraphicsScene.cpp

moc_PrivateQGraphicsView.o: moc_PrivateQGraphicsView.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_PrivateQGraphicsView.o moc_PrivateQGraphicsView.cpp

moc_OSMTileSource.o: moc_OSMTileSource.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OSMTileSource.o moc_OSMTileSource.cpp

moc_CompositeTileSource.o: moc_CompositeTileSource.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_CompositeTileSource.o moc_CompositeTileSource.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

