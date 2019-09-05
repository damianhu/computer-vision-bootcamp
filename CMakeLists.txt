cmake_minimum_required(VERSION 3.14)
project(bootcamp)

set(CMAKE_CXX_STANDARD 14)

add_executable(bootcamp main.cpp modules/core/include/Sort.h modules/core/src/Sort.cpp modules/core/test/test.cpp)