/*    @file IntVec_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the IntVec class
*/

#include "gtest/gtest.h"

#include "IntVec.h"
// Copy constructor
TEST(copyconstruct_getAt, notThere2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  IntVec b(a);
  ASSERT_ANY_THROW(b.getAt(2));
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  EXPECT_EQ(b.size(), 2);
}


TEST(copyconstruct_getAt, 1){
  IntVec a;
  for(int i = 0; i < 80; i++){
    a.push_back(i);
    IntVec b(a);
    EXPECT_EQ(b.getAt(i), i);
    EXPECT_EQ(b.size(), i+1);
  }
}

TEST(copyconstruct_getAt, copy_ptr1){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  IntVec b(a);
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  a.push_back(7);
  EXPECT_EQ(a.getAt(2), 7);
  ASSERT_ANY_THROW(b.getAt(2));
}

TEST(copyconstruct_getAt, copy_ptr2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  IntVec b(a);
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  b.push_back(7);
  EXPECT_EQ(b.getAt(2), 7);
  ASSERT_ANY_THROW(a.getAt(2));
}

// Assignment
TEST(assignment_getAt, notThere2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  IntVec b;
  b.push_back(12345);
  b = a;
  ASSERT_ANY_THROW(b.getAt(2));
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  EXPECT_EQ(b.size(), 2);
}


TEST(assignment_getAt, 3){
  IntVec a;
  a.push_back(9);
  a = a;
  EXPECT_EQ(a.getAt(0), 9);
}

// Size
TEST(size, 1){
  IntVec a;
  EXPECT_EQ(a.size(), 0);
}

TEST(size, 2){
  IntVec a;
  a.push_back(5);
  EXPECT_EQ(a.size(), 1);
}

TEST(size, 3){
  IntVec a;
  for(int i = 0; i < 100; i++){
    a.push_back(i);
  }
  EXPECT_EQ(a.size(), 100);
}

TEST(size, 4){
  IntVec a;
  for(int i = 0; i < 80; i++){
    a.push_back(i);
    EXPECT_EQ(a.size(), i + 1);
  }
}

TEST(size, 5){
  IntVec a;
  for(int i = 0; i < 100; i++){
    a.push_back(i);
  }
  ASSERT_ANY_THROW(a.push_back(5));
  EXPECT_EQ(a.size(), 100);
}

// Pushback/getAt
TEST(push_getAt, 1){
  IntVec a;
  a.push_back(5);
  EXPECT_EQ(a.getAt(0), 5);
}

TEST(push_getAt, neg){
  IntVec a;
  a.push_back(5);
  EXPECT_EQ(a.getAt(-1), 5);
}

TEST(push_getAt, notThere){
  IntVec a;
  ASSERT_ANY_THROW(a.getAt(0));
}

TEST(push_getAt, notThereNeg){
  IntVec a;
  ASSERT_ANY_THROW(a.getAt(-1));
}

TEST(push_getAt, 2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  EXPECT_EQ(a.getAt(1), -6);
}

TEST(push_getAt, neg2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  EXPECT_EQ(a.getAt(-1), -6);
  EXPECT_EQ(a.getAt(-2), 5);
}

TEST(push_getAt, notThere2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  ASSERT_ANY_THROW(a.getAt(2));
}

TEST(push_getAt, notThereNeg2){
  IntVec a;
  a.push_back(5);
  a.push_back(-6);
  ASSERT_ANY_THROW(a.getAt(-3));
}

TEST(push_getAt, 3){
  IntVec a;
  for(int i = 0; i < 80; i++){
    a.push_back(i);
    EXPECT_EQ(a.getAt(i), i);
    EXPECT_EQ(a.getAt(-1), i);
  }
}

// Set at
TEST(setAt, notThere){
  IntVec a;
  ASSERT_ANY_THROW(a.setAt(-5,0));
  ASSERT_ANY_THROW(a.getAt(-1));
  ASSERT_ANY_THROW(a.getAt(1));
}

TEST(setAt, 1pos){
  IntVec a;
  a.push_back(10);
  a.setAt(-5,0);
  ASSERT_ANY_THROW(a.setAt(-6,1));
  EXPECT_EQ(a.getAt(0), -5);
  EXPECT_EQ(a.getAt(-1), -5);
  ASSERT_ANY_THROW(a.setAt(-3,2));
}

TEST(setAt, big){
  IntVec a;
  for(int i = 0; i < 100; i++){
    a.push_back(i);
    EXPECT_EQ(a.getAt(i), i);
    EXPECT_EQ(a.getAt(-1), i);
  }
  for(int i = 0; i < 100; i++){
    a.setAt(i+1,i);
    EXPECT_EQ(a.getAt(i), i+1);
  }
}

// clear
TEST(clear, 0){
  IntVec a;
  a.clear();
  EXPECT_EQ(a.size(), 0);
}

TEST(clear, 1){
  IntVec a;
  a.push_back(5);
  EXPECT_EQ(a.size(), 1);
  a.clear();
  EXPECT_EQ(a.size(), 0);
}

TEST(clear, 2){
  IntVec a;
  a.push_back(6);
  a.push_back(7);
  EXPECT_EQ(a.size(), 2);
  a.clear();
  EXPECT_EQ(a.size(), 0);
}

// Sum
TEST(sum, 0){
  IntVec a;
  EXPECT_EQ(a.sum(), 0);
}

TEST(sum, 1){
  IntVec a;
  a.push_back(5);
  EXPECT_EQ(a.sum(), 5);
}

TEST(sum, 2){
  IntVec a;
  int sum = 0;
  for(int i = 0; i < 100; i++){
    a.push_back( i * 14583);
    sum += 14583 * i;
  }
  EXPECT_EQ(a.sum(), sum);
}

// Get as string
TEST(getAsString, 0){
  IntVec a;
  EXPECT_EQ(a.getAsString(), "[]");
}

TEST(getAsString, 1){
  IntVec a;
  a.push_back(5);
  EXPECT_EQ(a.getAsString(), "[5]");
}

TEST(getAsString, 2){
  IntVec a;
  a.push_back(5);
  a.push_back(6);
  EXPECT_EQ(a.getAsString(), "[5, 6]");
}

TEST(getAsString, 3){
  IntVec a;
  a.push_back(5);
  a.push_back(6);
  a.push_back(10);
  EXPECT_EQ(a.getAsString(), "[5, 6, 10]");
}

// ==

TEST(equality, 0){
  IntVec a;
  IntVec b;
  EXPECT_EQ(a == b, true);
}

TEST(equality, 1){
  IntVec a;
  a.push_back(5);
  IntVec b;
  EXPECT_EQ(a == b, false);
}

TEST(equality, 2){
  IntVec a;
  IntVec b;
  b.push_back(6);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}

TEST(equality, 3){
  IntVec a;
  a.push_back(6);
  IntVec b;
  b.push_back(6);
  EXPECT_EQ(a == b, true);
  EXPECT_EQ(b == a, true);
}

TEST(equality, 4){
  IntVec a;
  a.push_back(5);
  IntVec b;
  b.push_back(6);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}

TEST(equality, 5){
  IntVec a;
  a.push_back(5);
  a.push_back(6);
  IntVec b;
  b.push_back(5);
  b.push_back(6);
  EXPECT_EQ(a == b, true);
  EXPECT_EQ(b == a, true);
}

TEST(equality, 6){
  IntVec a;
  a.push_back(6);
  a.push_back(5);
  IntVec b;
  b.push_back(5);
  b.push_back(6);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}


