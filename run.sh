#!/bin/bash

# Run the application

if [ ! -d "./build" ]; then
    echo "First run ./cmake.sh to configure CMake"
    exit 1
fi


cd ./build

make
clear
clear
./prime_generator
cd ..