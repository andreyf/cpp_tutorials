cmake_minimum_required(VERSION 3.5)
project(array1_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(array1_program ${SOURCE_FILES})