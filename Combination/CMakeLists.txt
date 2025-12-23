set(combin_source_files
    ComC.cpp
    ComP.cpp
    main.cpp
    include/combinc.h
    include/combinp.h
    include/in.h
    include/includes.h
)
add_library(Combination STATIC ${combin_source_files})
target_include_directories(Combination PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Combination PUBLIC Calc)
