cmake_minimum_required(VERSION 2.8.4)
project(ProjectName)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(BinaryName ${SOURCE_FILES})

# QT5
find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)
target_link_libraries(BinaryName Qt5::Core Qt5::Widgets Qt5::Gui)