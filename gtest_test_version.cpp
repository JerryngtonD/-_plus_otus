#include "gtest/gtest.h"

#include "lib.hpp"

TEST(VERSION_TEST, CURRENT_VERSION_MORE_THAN_ONE) {
    ASSERT_TRUE(version() > 1);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}