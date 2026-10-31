cmake_minimum_required(VERSION 3.21)

project(EduCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(CppIDE
        main.cpp
)

target_link_libraries(CppIDE PRIVATE Qt6::Widgets)

set_target_properties(CppIDE PROPERTIES
        WIN32_EXECUTABLE TRUE
)