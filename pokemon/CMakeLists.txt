cmake_minimum_required(VERSION 3.26)
project(pokemon C)

set(CMAKE_C_STANDARD 11)

add_executable(pokemon main.c
        map/map.c
        signature/signature.h)
