cmake_minimum_required(VERSION 3.0.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(flaky_tests tests.cpp)

# Link Google Test library
target_link_libraries(flaky_tests GTest::gtest_main)

add_test(NAME check_even COMMAND check_even)
add_test(NAME check_odd_flaky COMMAND check_even)
add_test(NAME check_even_flaky COMMAND check_even)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
