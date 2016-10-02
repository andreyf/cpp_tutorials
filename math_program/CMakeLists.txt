cmake_minimum_required(VERSION 3.5)
project(math_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g3 -O0")

set(SOURCE_FILES main.cpp)
add_executable(math_program ${SOURCE_FILES})