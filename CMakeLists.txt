cmake_minimum_required(VERSION 3.29.3)

project(CRT)

add_executable(${PROJECT_NAME} test.cpp)

set_property(TARGET CRT PROPERTY CXX_STANDARD 11)
