cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(integral_tools LANGUAGES CXX)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add compiler warnings
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(Calc)
add_subdirectory(Combination)
add_subdirectory(PrimeNum)

set(integral_source_files core.cpp includes.h)
add_executable(intools ${integral_source_files})

target_link_libraries(intools PRIVATE PrimeNum)
