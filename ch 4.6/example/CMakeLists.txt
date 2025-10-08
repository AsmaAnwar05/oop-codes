cmake_minimum_required(VERSION 4.0)
project(example)

set(CMAKE_CXX_STANDARD 20)

add_executable(example main.cpp)
add_executable(example1 1.cpp
        1.cpp)
add_executable(example2 2.cpp
        2.cpp)