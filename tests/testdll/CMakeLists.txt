cmake_minimum_required(VERSION 3.15)

add_library(testdll SHARED)

target_sources(testdll PRIVATE
    main.cpp
)

target_link_libraries(testdll PRIVATE
    tsampsdk
)