#include <iostream>
#include <cstdlib>
#include <gtest/gtest.h>

using namespace testing;



TEST(flaky_tests_5, check_greater_than_flaky){
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr))+1);
    int result = rand()/RAND_MAX;
    std::cout<<"Check greater than 0.5 (flaky): number "<<result<<std::endl;
    ASSERT_GT(result, 0.5);
}

int main(int argc, char *argv[])
{
    InitGoogleTest();
    return RUN_ALL_TESTS();
}