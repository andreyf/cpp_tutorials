cmake_minimum_required(VERSION 3.5)
project(comparison_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g3 -O0")

set(SOURCE_FILES main.cpp main.cpp)
add_executable(comparison_program ${SOURCE_FILES})