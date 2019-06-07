cmake_minimum_required(VERSION 3.9)
project(test)

add_subdirectory(gtest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests test.cpp)

target_link_libraries(runTests gtest gtest_main)