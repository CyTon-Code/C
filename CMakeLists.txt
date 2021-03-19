cmake_minimum_required(VERSION 3.17)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C main.c)
add_executable(README README.md)
add_executable(CMakeLists CMakeLists.txt)




add_executable(main main.c)
add_executable(library line_search/library.c)
