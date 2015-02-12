#include "gtest/gtest.h"

#include "func.h"

TEST(test_add, handles_zero) {
    EXPECT_EQ(0, add(0, 0));
}

TEST(test_add, handles_positive) {
    EXPECT_EQ(2, add(1, 1));
    EXPECT_EQ(7, add(3, 4));
}

TEST(test_sub, handles_zero) {
    EXPECT_EQ(0, sub(0, 0));
}

TEST(test_sub, handles_positive) {
    EXPECT_EQ(2, sub(5, 3));
}

TEST(test_sub, handles_negative) {
    EXPECT_EQ(-1, sub(1, 2));
}

