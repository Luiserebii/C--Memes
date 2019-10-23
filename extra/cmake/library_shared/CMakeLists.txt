cmake_minimum_required(VERSION 3.5.1)
project(book-library)
# Set the build type to be a release build
set(CMAKE_BUILD_TYPE Release)

# Include the headers into the project
# NOTE: Previous project built fine without this, but I am adding it here since it seems to be good practice. What would break without it, I wonder?
include_directories("book/include")

# Load all source files into the SOURCES variable via GLOB
file(GLOB SOURCES "book/src/*.cpp")

# Generate the shared library from the sources
add_library(booklibrary SHARED ${SOURCES})

# Set the location for library installation - not used in this example
# Use "sudo make install" to apply
install(TARGETS booklibrary DESTINATION /usr/lib)
