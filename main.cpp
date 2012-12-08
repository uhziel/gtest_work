#include <cassert>
#include <gtest/gtest.h>

unsigned int gcd(unsigned int x, unsigned int y)
{
  assert(x > 0);
  assert(y > 0);

  unsigned int z = x % y;
  if (z == 0)
    return y;
  else
    return gcd(y, z);
}

TEST(gcdtest, normal)
{
  EXPECT_EQ(10, gcd(30, 20));
  EXPECT_EQ(6, gcd(30, 12));
  EXPECT_EQ(15, gcd(30, 15));
  EXPECT_EQ(1, gcd(30, 1));
  EXPECT_EQ(10, gcd(20, 30));
}
