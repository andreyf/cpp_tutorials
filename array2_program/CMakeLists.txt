cmake_minimum_required(VERSION 3.5)
project(array2_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(array2_program ${SOURCE_FILES})