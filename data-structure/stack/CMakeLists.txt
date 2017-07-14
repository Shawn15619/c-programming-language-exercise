cmake_minimum_required(VERSION 3.7)
project(stack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        stack.c
        stack.h
        list.c
        list.h main.c)

add_executable(stack ${SOURCE_FILES})