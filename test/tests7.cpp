#include <iostream>
#include <cstdlib>
#include <gtest/gtest.h>

using namespace testing;


TEST(flaky_tests_7, check_less_than_flaky){
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr))+6);
    double result = (double)rand()/RAND_MAX;
    std::cout<<"Check less than 0.5 (flaky): number "<<result<<std::endl;
    ASSERT_LT(result, 0.5);
}

int main(int argc, char *argv[])
{
    InitGoogleTest();
    return RUN_ALL_TESTS();
}