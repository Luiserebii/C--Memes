# Book Library - CMake Example

To build and run, a script has been provided for convenience in c.sh, but providing the same here for reference:

```bash
#!/bin/sh

if [ ! -d build ]; then
    mkdir build
fi

# Navigate to build
cd build

# Run CMake
cmake ..

# Make
make

```
