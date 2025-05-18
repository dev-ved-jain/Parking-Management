cmake_minimum_required(VERSION 3.10)
project(ParkingLot)

# Use C++17
set(CMAKE_CXX_STANDARD 17)

# Add include directories
include_directories(Gates Parking Payment Ticket Vehicles)

# Gather all .cpp files recursively
file(GLOB_RECURSE SOURCES
    demo.cpp
    Parking/*.cpp
    Gates/*.cpp
    Payment/*.cpp
    Ticket/*.cpp
    Vehicles/*.cpp
)

# Create executable
add_executable(parking_lot ${SOURCES})
