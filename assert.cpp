#include <gtest/gtest.h>

bool iseven(unsigned int x)
{
  return x % 2 == 0;
}

void throw_exception()
{
  throw "nothing";
}

TEST(ExampleTest, Assert)
{
  // boolean
  ASSERT_TRUE(true);
  ASSERT_TRUE(true) << "should be true.";  // extra information

  // number
  ASSERT_EQ(1, 1); // ==
  ASSERT_NE(1, 2); // !=
  ASSERT_LT(1, 2); // <
  ASSERT_LE(1, 1); // <=
  ASSERT_GT(2, 1); // >
  ASSERT_GE(1, 1); // >=

  // float
  ASSERT_FLOAT_EQ(1.0f, 1.0f);
  ASSERT_DOUBLE_EQ(1.0, 1.0);
  ASSERT_NEAR(1, 2, 1);
  ASSERT_NEAR(0.001f, 0.000f, 0.001f);

  // c string
  ASSERT_STREQ("a", "a");
  ASSERT_STRNE("a", "b");
  ASSERT_STRCASEEQ("A", "a");
  ASSERT_STRCASENE("A", "b");

  // raw
  SUCCEED();
  //FAIL();
  //ADD_FAILURE();

  // predicate
  ASSERT_PRED1(iseven, 4);

  // exception
  ASSERT_ANY_THROW(throw_exception());
  ASSERT_NO_THROW(iseven(4));
}
