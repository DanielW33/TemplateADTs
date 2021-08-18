cmake_minimum_required(VERSION 3.17)
project(TemplateADTS)

set(CMAKE_CXX_STANDARD 14)

add_executable(TemplateADTS main.cpp ADTs/Stack.h ADTs/List.h ADTs/Queue.h)