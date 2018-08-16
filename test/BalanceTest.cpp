#include <gtest/gtest.h>
#include "../inc/Balance.hpp"

struct BalanceTest : public ::testing::Test{};

TEST_F(BalanceTest, feedOneUnbalancedBracket){
    Balance b;
    EXPECT_EQ(b.check("{"), false);
}

TEST_F(BalanceTest, feedTwoBalancedBrackets){
    Balance b;
    EXPECT_EQ(b.check("{}"), true);
}

TEST_F(BalanceTest, feedTwoBalancedBracketsDoubled){
    Balance b;
    EXPECT_EQ(b.check("{{}}"), true);
}

TEST_F(BalanceTest, feedTwoDifferentBalancedBrackets){
    Balance b;
    EXPECT_EQ(b.check("({})"), true);
}

TEST_F(BalanceTest, feedTwoDifferentUnbalancedBrackets){
    Balance b;
    EXPECT_EQ(b.check("{})"),false);
}