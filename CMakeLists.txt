cmake_minimum_required(VERSION 3.4)
project(helloworld_python)
add_subdirectory(pybind11)

set(SOURCES Helloworld_Python.cpp include/helloworld_lib.h)
#add_executable(helloworld_python2 ${SOURCES})

pybind11_add_module(helloworld_python Helloworld_Python.cpp)
target_include_directories(helloworld_python PRIVATE include)