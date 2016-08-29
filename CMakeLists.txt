cmake_minimum_required(VERSION 3.6)
project(DEV)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
    task1.cpp)

add_executable(DEV ${SOURCE_FILES})