#include "gtest/gtest.h"

#include "func.h"

TEST(test_add, handles_zero) {
    EXPECT_EQ(0, add(0, 0));
}

TEST(test_add, handles_positive) {
    EXPECT_EQ(2, add(1, 1));
    EXPECT_EQ(7, add(3, 4));
}

