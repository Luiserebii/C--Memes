# Minimum required version, good practice to set current used
cmake_minimum_required(VERSION 3.5.1)
# Set the project name
project(hello)
# Target file to build an executable with, takes name and filepath
add_executable(hello helloworld.cpp)
