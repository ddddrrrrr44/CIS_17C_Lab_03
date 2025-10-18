cmake_minimum_required(VERSION 3.10)
project(Lab3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(linked_lists_test google_test/linked_lists_test.cpp)
target_link_libraries(linked_lists_test GTest::gtest GTest::gtest_main)

# For the main program
add_executable(linked_lists linked_lists.cpp)
