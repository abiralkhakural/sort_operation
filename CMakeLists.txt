cmake_minimum_required(VERSION 4.3)
project(sort_operation)

set(CMAKE_CXX_STANDARD 20)

add_executable(sort_operation main.cpp
        Song.cpp
        Song.h)
