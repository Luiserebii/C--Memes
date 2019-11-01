cmake_minimum_required(VERSION 3.5.1)
project(library)

# Load all source files into the SOURCES variable via GLOB
file(GLOB SOURCES main.cpp "book/*.cpp" "library/*.cpp")

# Finally, pump it into the executable:
add_executable(library ${SOURCES})
