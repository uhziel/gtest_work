#include <gtest/gtest.h>

int gcd(int x, int y)
{
  int z = x % y;
  if (z == 0)
    return y;
  else
    return gcd(y, z);
}

TEST(gcdtest, normal)
{
  EXPECT_EQ(10, gcd(30, 20));
}
