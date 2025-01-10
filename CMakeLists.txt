cmake_minimum_required(VERSION 3.15)
project(tsampsdk LANGUAGES CXX)

option(TSAMPSDK_BUILD_TESTS "Build tests" ON)

add_subdirectory(vendor)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(TSAMPSDK_BUILD_TESTS)
    add_subdirectory(tests)
endif()