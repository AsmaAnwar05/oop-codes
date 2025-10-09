cmake_minimum_required(VERSION 4.0)
project(example)

set(CMAKE_CXX_STANDARD 20)

add_executable(example 1.cpp)
add_executable(2 2.cpp
        2.cpp)
add_executable(3 3.cpp
        3.cpp)
add_executable(4 4.cpp
        4.cpp)
