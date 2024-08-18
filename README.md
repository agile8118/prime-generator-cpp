# Prime Generator CPP

A prime generation application written in C++ featured in the Multi-Threading section of the [Understanding Node.js: Core Concepts](https://www.udemy.com/course/understanding-nodejs-core-concepts/?referralCode=0BC21AC4DD6958AE6A95) course.
This code is then used in [this](https://github.com/agile8118/node-cpu-intensive) Node.js project as a native addon. The reason for doing this is to gain a significant performance boost in our Node.js application, and also to see Node.js Addons and native multi-threading in Node.js in action.

## Getting Started

To get the project up and running after cloning the repository, follow these steps (instructions only for unix-based machines):

### 1. Download and Compile GMP

GMP is used to be able to generate arbitrarily large prime numbers. Run the following script to download and compile the GMP library:

```sh
./gmp.sh
```

This script will:

- Download GMP version 6.3.0
- Extract the source code to the `deps/GMP` directory
- Configure and compile GMP with C++ support

### 2. Setup CMake

After GMP is set up, configure CMake by running:

```sh
./cmake.sh
```

This script will:

- Create a `build` directory if it doesn't exist
- Run CMake to generate the necessary build files

### 3. Compile and Run the Application

Finally, compile the code and run the application with:

```sh
./run.sh
```

This script will:

- Compile the code in the `build` directory
- Execute the `prime_generator` application

## Notes

Ensure that your machine is properly setup for C++ development. The `gmp.sh` script takes care of GMP, but you need to have other tools like CMake and Make installed as well.

##### Unable to Build & Link GMP

On Linux, the `./run.sh` file may not be able to properly setup the library. If that's the case, install GMP like this:

```
sudo apt install libgmp-dev
```
