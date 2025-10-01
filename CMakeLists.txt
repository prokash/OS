cmake_minimum_required(VERSION 4.0)
project(OS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OS
        locks.cpp
        locks.h
        main.cpp
        threads.cpp
        threads.h)
