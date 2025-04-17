cmake_minimum_required(VERSION 3.31)
project(learnCPP)

set(SRC_FILES
    src/main.cpp
)

set(INC_FILES
    src/main.hpp
)

add_executable(main ${SRC_FILES})
target_include_directories(main PUBLIC ${INC_FILES})

set(CMAKE_BUILD_TYPE Debug)
add_executable(debug ${SRC_FILES})
target_include_directories(debug PUBLIC ${INC_FILES})
