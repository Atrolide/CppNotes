cmake_minimum_required(VERSION 3.21)
project(PrivNotes)

set(CMAKE_CXX_STANDARD 14)

add_executable(PrivNotes main.cpp ExampleLib.cpp ExampleLib.h Cars.cpp Cars.h)
