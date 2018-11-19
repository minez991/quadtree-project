cmake_minimum_required(VERSION 3.12)
project(quadtree_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Input)
include_directories(output)
include_directories(program)

add_executable(quadtree_project
        Input/input.txt
        Input/input2.txt
        output/output.txt
        output/output2.txt
        program/program.c)
