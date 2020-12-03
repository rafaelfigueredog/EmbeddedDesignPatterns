cmake_minimum_required(VERSION 3.15)
project(facede)

set(CMAKE_CXX_STANDARD 14)

add_executable(facede main.cpp Memory.cpp Memory.h IO.cpp IO.h Board.cpp Board.h CPU.cpp CPU.h Led.cpp Led.h)