cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)

project(cmaketest CXX)
enable_testing()

add_subdirectory(src)
add_subdirectory(test)
