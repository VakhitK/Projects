cmake_minimum_required(VERSION 3.14)

project(MY_QT-Test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
  main.cpp menu.h menu.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(MY_QT-Test
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(MY_QT-Test SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(MY_QT-Test
            ${PROJECT_SOURCES}
        )
    endif()
endif()


target_link_libraries(MY_QT-Test Qt5::Core Qt5::Widgets)
