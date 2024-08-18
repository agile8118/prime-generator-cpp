#!/bin/bash

# Setup CMake

if [ ! -d "./deps/GMP" ]; then
    echo "First run ./gmp.sh to download and build GMP."
    exit 1
fi

if [ ! -d "./build" ]; then
    mkdir ./build
fi

cd ./build
cmake ..
cd ..

echo "CMake is now setup, run ./run.sh to compile and run the code."