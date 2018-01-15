cmake_minimum_required(VERSION 3.5)
project(char_array1_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(char_array1_program ${SOURCE_FILES})