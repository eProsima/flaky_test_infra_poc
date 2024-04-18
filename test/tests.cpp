#include <iostream>
#include <cstdlib>
#include "gtest/gtest.h"

using namespace testing;

TEST(flaky_tests, check_even){
    int num = 2;
    int result = num%2;
    std::cout<<"Check even: number "<<num<<std::endl;
    ASSERT_EQ(result, 0);
}

TEST(flaky_tests, check_even_flaky){
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr))+1);
    int num = rand();
    int result = num%2;
    std::cout<<"Check even flaky: number "<<num<<std::endl;
    ASSERT_EQ(result, 0);
}

TEST(flaky_tests, check_odd_flaky){
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));
    int num = rand();
    int result = num%2;
    std::cout<<"Check odd flaky: number "<<num<<std::endl;
    ASSERT_NE(result, 0);
}

int main(int argc, char *argv[])
{
    InitGoogleTest();
    return RUN_ALL_TESTS();
}