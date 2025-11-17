cmake_minimum_required(VERSION 3.15)
project(LifeGame VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)
include_directories(src)

# Source files
file(GLOB SRCS 
    src/core/*.cpp
    src/ui/*.cpp 
    src/utils/*.cpp
    src/data/*.cpp
)

# Executable
add_executable(lifegame ${SRCS})

# Install target
install(TARGETS lifegame DESTINATION bin)
