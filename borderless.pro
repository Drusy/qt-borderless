QT       += core gui network widgets
TARGET = borderless
TEMPLATE = app
CONFIG -= console

SOURCES += \
    src/main.cpp\
    src/MainFrame.cpp\
    src/TitleBar.cpp\
    src/HoverMoveFilter.cpp\
    src/WindowTitleFilter.cpp

HEADERS  += \
    src/MainFrame.h\
    src/TitleBar.h\
    src/HoverMoveFilter.h\
    src/WindowTitleFilter.h
