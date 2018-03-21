/*    @file MyComplex_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the MyComplex class
*/

#include "gtest/gtest.h"

#include "MyComplex.h"


// constructor & getAsString
TEST(construct_string,1){
  MyComplex a(1,2);
  EXPECT_EQ(a.getAsString(), "(1 + 2i)");
}

TEST(construct_string,2){
  MyComplex a(-1.5,2.5);
  EXPECT_EQ(a.getAsString(), "(-1.5 + 2.5i)");
}

// Setters/Getters
TEST(setReal, 1){
  MyComplex a(0,0);
  a.setReal(5);
  EXPECT_EQ(a.getAsString(), "(5 + 0i)");
}

TEST(setImaginary, 1){
  MyComplex a(0,0);
  a.setImaginary(5);
  EXPECT_EQ(a.getAsString(), "(0 + 5i)");
}

TEST(getReal, 1){
  MyComplex a(6.0,7.0);
  ASSERT_DOUBLE_EQ(a.getReal(), 6.0);
}

TEST(getImaginary, 1){
  MyComplex a(6.0,7.0);
  ASSERT_DOUBLE_EQ(a.getImaginary(), 7.0);
}

TEST(div, 1){
  EXPECT_EQ(MyComplex(3,2) / MyComplex(4,-3), MyComplex(6.0/25,17.0/25));
}

TEST(div, 2){
  ASSERT_ANY_THROW(MyComplex(3,2) / MyComplex(0,0));
}