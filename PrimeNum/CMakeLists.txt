set(prime_source_files
    main.cpp
    PrimeNumberChecker.cpp
    PrimeNumberFactorizer.cpp
    PrimeNumberGenerator.cpp
    include/chk.h
    include/factorization.h
    include/gen.h
    include/global_vars.h
    include/includes.h
)
add_library(PrimeNum STATIC ${prime_source_files})
target_include_directories(PrimeNum PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(PrimeNum PUBLIC Combination)
