cmake_minimum_required(VERSION 3.0.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(check_even_pass tests1.cpp)
add_executable(check_even_flaky tests2.cpp)
add_executable(check_odd_flaky tests3.cpp)

# Link Google Test library
target_link_libraries(check_even_pass GTest::gtest_main)
target_link_libraries(check_even_flaky GTest::gtest_main)
target_link_libraries(check_odd_flaky GTest::gtest_main)

add_test(NAME check_even_pass COMMAND check_even_pass)
add_test(NAME check_even_flaky COMMAND check_even_flaky)
add_test(NAME check_odd_flaky COMMAND check_odd_flaky)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
