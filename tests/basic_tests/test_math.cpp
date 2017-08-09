#include <iostream>

#include "gtest.h"
#include "Math.h"


using ::testing::TestWithParam;
using ::testing::tuple;


class TestMath : public TestWithParam<
    tuple<double, double, double, double> > {
protected:
  double expectedAddition, expectedMultiply;
  Math* math;

  virtual void SetUp() {
    double a, b;
    std::tie(a, b, expectedAddition, expectedMultiply) = GetParam();
    math = new Math(a, b);

    std::cout << "\n\na: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "expected Addition: " << expectedAddition << std::endl;
    std::cout << "expected Multiplication: " << expectedMultiply << "\n\n"
              << std::endl;
  }

  virtual void TearDown() {
    delete math;
    math = nullptr;
  }
};


TEST_P(TestMath, Addition) {
  EXPECT_DOUBLE_EQ(expectedAddition, math->addition());
}


TEST_P(TestMath, Multiplication) {
  EXPECT_DOUBLE_EQ(expectedMultiply, math->multiply());
}


INSTANTIATE_TEST_CASE_P(MathTests, TestMath,
                        testing::Values(
                            // (a, b, expectedAddition, expectedMultiply)
                            std::make_tuple(2., 3., 5., 6.),
                            std::make_tuple(0., 0., 0., 0.),
                            std::make_tuple(2., -3., -1., -6.)
                        )
);


TEST(Vector, Equals) {
  std::vector<double> a, b;

  a = {1., 2., 3.};
  b = {1., 2., 3.};
  ASSERT_EQ(a, b);
}

