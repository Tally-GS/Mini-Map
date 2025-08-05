cmake_minimum_required(VERSION 3.29)
project(Mini_Map)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Mini_Map
        main.cpp
        tile.cpp
        tile.h
        game_map.h
        game_map.cpp
        redblack_tree.cpp)
