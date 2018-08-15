#include <gtest/gtest.h>
#include "../inc/Balance.hpp"

struct BalanceTest : public ::testing::Test
{
};

TEST_F(BalanceTest, feedOneUnbalancedBracket)
{
    Balance b;
    EXPECT_EQ(b.check("{"), false);
}
