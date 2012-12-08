#include <gtest/gtest.h>

int gcd(int x, int y)
{
  return 0;
}

TEST(gcdtest, normal)
{
  EXPECT_EQ(10, gcd(30, 20));
}
