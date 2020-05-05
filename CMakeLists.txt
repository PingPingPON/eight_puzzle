cmake_minimum_required(VERSION 3.16)
project(eight_puzzle)

set(CMAKE_CXX_STANDARD 14)

add_executable(eight_puzzle puzzle.cpp file.cpp file.h global.h swap.h swap.cpp print.h print.cpp puzzle.h main.cpp statistic.cpp)