cmake_minimum_required(VERSION 4.1)
project(DSALibrary)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(DSALibrary main.cpp
        include/dsa/adt/list.h
        include/dsa/structures/array_list.h)
