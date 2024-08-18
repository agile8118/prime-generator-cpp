cmake_minimum_required(VERSION 3.10)
project(PrimeGenerator)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/deps/GMP)

# Link directories
link_directories(${CMAKE_SOURCE_DIR}/deps/GMP/.libs)


add_executable(prime_generator ${CMAKE_SOURCE_DIR}/src/app.cpp ${CMAKE_SOURCE_DIR}/src/prime-generator.cpp)
target_link_libraries(prime_generator gmp gmpxx)