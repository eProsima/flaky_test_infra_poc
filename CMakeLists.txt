cmake_minimum_required(VERSION 3.0.0)
project(flaky_test_infra VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_subdirectory(test)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
