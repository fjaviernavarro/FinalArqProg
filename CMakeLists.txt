cmake_minimum_required(VERSION 3.17)
project(ProyectoResistencias)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)

set(KF5_MIN_VERSION "5.2.0")

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

find_package(KF5WidgetsAddons REQUIRED)

add_executable(ProyectoResistencias
        main.cpp
        Codificador.cpp
        Codificador.h
        Decodificador.ui
        Decodificador.cpp
        Decodificador.h
        MainWindow.ui
        MainWindow.cpp
        MainWindow.h
        Observador.cpp
        Observador.h Fachada.cpp Fachada.h)

target_link_libraries(ProyectoResistencias Qt5::Widgets
        Qt${QT_VERSION_MAJOR}::Widgets
        KF5::WidgetsAddons
        )