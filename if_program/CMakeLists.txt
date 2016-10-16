cmake_minimum_required(VERSION 3.5)
project(if_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp main.cpp)
add_executable(if_program ${SOURCE_FILES})