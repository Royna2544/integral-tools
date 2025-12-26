# Integral Tools

A collection of mathematical utilities written in modern C++20.

## Features

1. **Prime Number Tools**
   - Prime Number Checker: Verify if a number is prime
   - Prime Number Generator: Generate all prime numbers up to a limit
   - Prime Number Factorizer: Decompose a number into its prime factors

2. **Simple Calculator**
   - Basic arithmetic operations (+, -, *, /)
   - Division by zero protection

3. **Combination Calculator**
   - nPr (Permutations): Calculate permutations
   - nCr (Combinations): Calculate combinations

## Building

Requires:
- CMake 3.15 or later
- C++20 compatible compiler (GCC 10+, Clang 10+, MSVC 2019+)

Build instructions:
```bash
mkdir build
cd build
cmake ..
make
```

## Running

After building, run:
```bash
./intools
```

## Code Modernization

This codebase has been refactored to follow modern C++20 best practices:

### Improvements Made

1. **C++20 Standard**: Project now requires C++20 with `-std=c++20`

2. **Modern CMake**: Updated from CMake 2.8 to 3.15+ with proper target properties

3. **Header Guards**: Replaced old-style `#ifndef` guards with `#pragma once`

4. **Namespace Management**: Removed all `using namespace std` declarations

5. **Control Flow**: 
   - Eliminated all `goto` statements
   - Replaced with proper loops and early returns

6. **Type Safety**:
   - Used `enum class` for type-safe enumerations
   - Removed C-style casts

7. **Memory Safety**:
   - Replaced C-style arrays with `std::vector`
   - Eliminated global variables (moved to function scope)
   - Fixed ODR violations

8. **Modern Features**:
   - `constexpr` functions for compile-time evaluation
   - `std::string_view` for non-owning string references
   - Anonymous namespaces for internal linkage
   - Range-based for loops where applicable

9. **Code Quality**:
   - Consistent formatting and style
   - Compiler warnings enabled (`-Wall -Wextra -Wpedantic`)
   - All warnings resolved
   - Proper const-correctness

10. **Build System**:
    - Added `.gitignore` for build artifacts
    - Proper CMake target visibility (`PUBLIC`/`PRIVATE`)
    - Modern target include directory management

## License

(C)2021 Na Soo-Hwan
