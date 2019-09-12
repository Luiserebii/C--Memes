#!/bin/bash

# Very simple script, with very simple reasoning.
# Idea is to just have something easy and runnable, something that should work
# Passing in "run" as an argument for the script will compile and run


if [ "$1" == "run" ]
then
    g++ *.cpp && ./a.out
else
    g++ *.cpp
fi
