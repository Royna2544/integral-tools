set(calc_source_files
    main.cpp
    print_err.cpp
    include/vars.h
)
add_library(Calc STATIC ${calc_source_files})
target_include_directories(Calc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
