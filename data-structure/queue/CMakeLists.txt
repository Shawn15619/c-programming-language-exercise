cmake_minimum_required(VERSION 3.7)
project(queue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        list.c
        list.h queue.c queue.h main.c)

add_executable(queue ${SOURCE_FILES})