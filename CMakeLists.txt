cmake_minimum_required (VERSION 2.8.8)

project (proto)

set (CMAKE_MODULE_PATH  ${CMAKE_MODULE_PATH}
                        ${CMAKE_CURRENT_SOURCE_DIR}/CMake)

find_package(Protobuf REQUIRED)

add_definitions(-std=c++11)

# Simple hello-world
add_subdirectory(proto)



