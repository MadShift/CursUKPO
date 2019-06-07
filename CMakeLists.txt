cmake_minimum_required(VERSION 3.9)
project(test1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

add_executable(main main.cpp)

target_link_libraries(main)