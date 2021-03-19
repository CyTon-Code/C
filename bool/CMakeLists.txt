cmake_minimum_required(VERSION 3.17)
project(bool C)

set(CMAKE_C_STANDARD 11)

add_library(bool library.c library.h)
add_executable(bool )
add_executable(library library.h)

add_executable(README README.md)
