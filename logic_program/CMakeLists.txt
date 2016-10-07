cmake_minimum_required(VERSION 3.5)
project(logic_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g3 -O0")

set(SOURCE_FILES main.cpp)
add_executable(logic_program ${SOURCE_FILES})