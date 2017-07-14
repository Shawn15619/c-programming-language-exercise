cmake_minimum_required(VERSION 3.7)
project(linked_list)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        list.c
        list.h)

add_executable(linked_list ${SOURCE_FILES})