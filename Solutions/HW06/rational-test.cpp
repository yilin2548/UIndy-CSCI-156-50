#include "gtest/gtest.h"

#include "Rational.h"

// some example tests
TEST(getDenominator, Default){
  Rational a;
  EXPECT_EQ(a.getDenominator(), 1);
}

TEST(getDenominator, Overloaded){
  Rational a(5,2);
  EXPECT_EQ(a.getDenominator(), 2);
}

TEST(setDenominator, 1){
  Rational a;
  a.setDenominator(5);
  EXPECT_EQ(a.getDenominator(), 5);
}

TEST(divide, 1){
  Rational a(11,2);
  Rational b(1,2);
  Rational c = a.divide(b);
  EXPECT_EQ(c.getNumerator(), 22);
  EXPECT_EQ(c.getDenominator(), 2);
}

// Add at least 4 more tests which trigger  
// exceptions, and pass the tests if they do
TEST(ZeroDenominator, 1){
  ASSERT_ANY_THROW(Rational(5, 0));
}

TEST(ZeroDenominator, 2){
  ASSERT_ANY_THROW(Rational(-1, 0));
}

TEST(DivideByZero, 1){
  ASSERT_ANY_THROW(Rational(1, 1).divide(Rational(0, 2)));
}

TEST(DivideByZero, 2){
  Rational a;
  ASSERT_ANY_THROW(a.divide(Rational(0, 2)));
}