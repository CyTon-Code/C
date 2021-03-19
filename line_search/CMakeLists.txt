cmake_minimum_required(VERSION 3.17)
project(line_search C)

set(CMAKE_C_STANDARD 11)

add_library(line_search library.c library.h)

add_executable(library library.c)
