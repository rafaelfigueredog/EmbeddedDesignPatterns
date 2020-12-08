cmake_minimum_required(VERSION 3.15)
project(Iterator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Iterator main.cpp bitMap.cpp bitMap.h iterator.cpp iterator.h iteratorInterface.cpp iteratorInterface.h)