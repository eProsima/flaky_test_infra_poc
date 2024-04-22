#include <iostream>
#include <cstdlib>
#include <gtest/gtest.h>

using namespace testing;



TEST(flaky_tests_6, check_less_than_0_3_flaky){
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr))+1);
    double result = rand()/RAND_MAX;
    std::cout<<"Check less than 0.3 (flaky): number "<<result<<std::endl;
    ASSERT_LT(result, 0.3);
}


int main(int argc, char *argv[])
{
    InitGoogleTest();
    return RUN_ALL_TESTS();
}