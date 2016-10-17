cmake_minimum_required(VERSION 3.5)
project(for2_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(for2_program ${SOURCE_FILES})