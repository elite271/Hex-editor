cmake_minimum_required(VERSION 3.10)

project(hex-edit VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)


find_package(Qt6 COMPONENTS Widgets REQUIRED)


add_executable(hex-edit
    main.cpp
    mainwindow.cpp
    mainwindow.ui
)


target_link_libraries(hex-edit PRIVATE Qt6::Widgets)
