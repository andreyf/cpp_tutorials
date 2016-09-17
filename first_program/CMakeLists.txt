cmake_minimum_required(VERSION 3.5)
project(first_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(firs_program ${SOURCE_FILES})