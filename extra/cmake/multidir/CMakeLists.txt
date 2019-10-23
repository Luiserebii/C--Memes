cmake_minimum_required(VERSION 3.5.1)
project(book)

# Load all source files into the SOURCES variable via GLOB
file(GLOB SOURCES main.cpp "book/*.cpp")

# Finally, pump it into the executable:
add_executable(meme ${SOURCES})
