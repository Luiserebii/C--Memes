cmake_minimum_required(VERSION 3.5.1)
project(complete-book)

# Set our shared library - the .so file is what we want
set(PROJECT_LINK_LIBS libbooklibrary.so)
# Specify directory in which the library is located here
link_directories(./book-library/build)

# Include the header files for the library
include_directories(./book-library/book/include)

# Add to the executable:
add_executable(meme main.cpp)

# Link our shared library
target_link_libraries(meme ${PROJECT_LINK_LIBS})
