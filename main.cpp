#include <gtest/gtest.h>

unsigned int gcd(unsigned int x, unsigned int y)
{
  unsigned int z = x % y;
  if (z == 0)
    return y;
  else
    return gcd(y, z);
}

TEST(gcdtest, normal)
{
  EXPECT_EQ(10, gcd(30, 20));
}
