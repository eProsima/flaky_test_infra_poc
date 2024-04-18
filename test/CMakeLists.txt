cmake_minimum_required(VERSION 3.0.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest CONFIG REQUIRED)

add_executable(flaky_tests tests.cpp)

# Link Google Test library
target_link_libraries(flaky_tests gtest)

add_test(NAME flaky_tests COMMAND flaky_tests)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
