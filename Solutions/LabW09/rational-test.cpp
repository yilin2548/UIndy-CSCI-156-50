#include "gtest/gtest.h"

#include "Rational.h"

// Uncomment the todouble.1 test to run it
TEST(todouble, 1){
  Rational a;
  double b = (double)a + 5.6;
  EXPECT_DOUBLE_EQ(b, 6.6);
}

// add at least 3 tests here to show your conversion works
TEST(todouble, 2){
  Rational a(2, 5);
  double b = (double)a;
  EXPECT_DOUBLE_EQ(b, 0.4);
}

TEST(todouble, 3){
  Rational a(2, 5);
  Rational b(3, 5);
  EXPECT_DOUBLE_EQ((double)a + (double)b, 1);
}

// Uncomment the staticCount.1 test to run it
TEST(staticCount, 1){
  EXPECT_EQ(Rational::numRationals(), 0);
}

// add at least 3 tests here to show your static variable
// and function work as specified
TEST(staticCount, 2){
  Rational a;
  EXPECT_EQ(a.numRationals(), 1);
}

TEST(staticCount, 3){
  Rational a;
  Rational b;
  Rational c;
  EXPECT_EQ(Rational::numRationals(), 3);
}

TEST(staticCount, 4){
  Rational *a = new Rational(2,3);
  EXPECT_EQ(Rational::numRationals(), 1);
  delete a;
}

TEST(staticCount, 5){
  Rational *a = new Rational(2,3);
  EXPECT_EQ(a->numRationals(), 1);
  delete a;
}