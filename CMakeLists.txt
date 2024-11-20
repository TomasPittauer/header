cmake_minimum_required(VERSION 3.25)
project(header C)

set(CMAKE_C_STANDARD 23)

add_executable(header main.c calc.h calc.c sorting.h sorting.c)
