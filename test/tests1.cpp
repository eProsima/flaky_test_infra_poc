#include <iostream>
#include <cstdlib>
#include <gtest/gtest.h>

using namespace testing;

TEST(flaky_tests_1, check_even){
    int num = 2;
    int result = num%2;
    std::cout<<"Check even: number "<<num<<std::endl;
    ASSERT_EQ(result, 0);
}


int main(int argc, char *argv[])
{
    InitGoogleTest();
    return RUN_ALL_TESTS();
}