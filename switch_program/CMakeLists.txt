cmake_minimum_required(VERSION 3.5)
project(switch_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(switch_program ${SOURCE_FILES})