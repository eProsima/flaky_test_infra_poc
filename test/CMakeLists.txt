cmake_minimum_required(VERSION 3.0.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(flaky_tests_1 tests1.cpp)
add_executable(flaky_tests_2 tests2.cpp)
add_executable(flaky_tests_3 tests3.cpp)
add_executable(flaky_tests_4 tests4.cpp)
add_executable(flaky_tests_5 tests5.cpp)
add_executable(flaky_tests_6 tests6.cpp)
add_executable(flaky_tests_7 tests7.cpp)
add_executable(flaky_tests_8 tests8.cpp)
add_executable(flaky_tests_9 tests9.cpp)

# Link Google Test library
target_link_libraries(flaky_tests_1 GTest::gtest_main)
target_link_libraries(flaky_tests_2 GTest::gtest_main)
target_link_libraries(flaky_tests_3 GTest::gtest_main)
target_link_libraries(flaky_tests_4 GTest::gtest_main)
target_link_libraries(flaky_tests_5 GTest::gtest_main)
target_link_libraries(flaky_tests_6 GTest::gtest_main)
target_link_libraries(flaky_tests_7 GTest::gtest_main)
target_link_libraries(flaky_tests_8 GTest::gtest_main)
target_link_libraries(flaky_tests_9 GTest::gtest_main)

add_test(NAME check_even COMMAND flaky_tests_1)
add_test(NAME check_even_flaky COMMAND flaky_tests_2)
add_test(NAME check_odd_flaky COMMAND flaky_tests_3)
add_test(NAME check_greater_than_0_3_flaky COMMAND flaky_tests_4)
add_test(NAME check_greater_than_flaky COMMAND flaky_tests_5)
add_test(NAME check_less_than_0_3_flaky COMMAND flaky_tests_6)
add_test(NAME check_less_than_flaky COMMAND flaky_tests_7)
add_test(NAME check_greater_than_0_7_flaky COMMAND flaky_tests_8)
add_test(NAME check_less_than_0_7_flaky COMMAND flaky_tests_9)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
