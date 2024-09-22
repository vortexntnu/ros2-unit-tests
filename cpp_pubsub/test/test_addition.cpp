#include <gtest/gtest.h>

TEST(cpp_pubsub, a_first_test)
{
  ASSERT_EQ(4, 2 + 2);
  ASSERT_EQ(5, 3 + 2);
  ASSERT_EQ(-6, 2 - 8);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
