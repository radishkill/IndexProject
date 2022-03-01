#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "formula.h"

namespace testing
{

  // Returns an AssertionResult object to indicate that an assertion has
  // succeeded.
  AssertionResult AssertionSuccess();

  // Returns an AssertionResult object to indicate that an assertion has
  // failed.
  AssertionResult AssertionFailure();

}

class QueueTest : public ::testing::TestWithParam<::testing::tuple<int, int>>
{
protected:
  void SetUp() override
  {
  }
  private:
  // void TearDown() override {}
  Formula f0;
};

testing::AssertionResult IsEven(int n)
{
  if ((n % 2) == 0)
    return testing::AssertionSuccess();
  else
    return testing::AssertionFailure() << n << " is odd";
}

TEST(BaseTest, Test1)
{
  GTEST_SKIP() << "Skipping single test";
  EXPECT_TRUE(IsEven(3));
  EXPECT_THAT("This a", ::testing::StartsWith("This"));
  EXPECT_PRED_FORMAT2(::testing::FloatLE, 1.1, 1.2);

  // arrange
  // act
  // assert
  // EXPECT_EQ(Formula::bla(0), 0); //通过
  // ASSERT_DEATH(Formula::Foo(), "qq");
}