/*    @file IntVec_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the IntVec<int> class
*/

#include "gtest/gtest.h"

#include "IntVec.h"
// Copy constructor
TEST(copyconstruct_getAt, notThere2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  IntVec<int> b(a);
  ASSERT_ANY_THROW(b.getAt(2));
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  EXPECT_EQ(b.size(), 2);
}


TEST(copyconstruct_getAt, 1){
  IntVec<int> a;
  for(int i = 0; i < 80; i++){
    a.push_back(i);
    IntVec<int> b(a);
    EXPECT_EQ(b.getAt(i), i);
    EXPECT_EQ(b.size(), i+1);
  }
}

TEST(copyconstruct_getAt, copy_ptr1){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  IntVec<int> b(a);
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  a.push_back(7);
  EXPECT_EQ(a.getAt(2), 7);
  ASSERT_ANY_THROW(b.getAt(2));
}

TEST(copyconstruct_getAt, copy_ptr1_double){
  IntVec<double> a;
  a.push_back(3.2);
  a.push_back(-4.5);
  IntVec<double> b(a);
  EXPECT_EQ(b.getAt(0), 3.2);
  EXPECT_EQ(b.getAt(1), -4.5);
  a.push_back(6.123);
  EXPECT_EQ(a.getAt(2), 6.123);
  ASSERT_ANY_THROW(b.getAt(2));
}

TEST(copyconstruct_getAt, copy_ptr2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  IntVec<int> b(a);
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  b.push_back(7);
  EXPECT_EQ(b.getAt(2), 7);
  ASSERT_ANY_THROW(a.getAt(2));
}

// Assignment
TEST(assignment_getAt, notThere2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  IntVec<int> b;
  b.push_back(12345);
  b = a;
  ASSERT_ANY_THROW(b.getAt(2));
  EXPECT_EQ(b.getAt(0), 5);
  EXPECT_EQ(b.getAt(1), -6);
  EXPECT_EQ(b.size(), 2);
}


TEST(assignment_getAt, 3){
  IntVec<int> a;
  a.push_back(9);
  a = a;
  EXPECT_EQ(a.getAt(0), 9);
}

TEST(assignment_getAt, 4){
  IntVec<double> a;
  a.push_back(10.2);
  a = a;
  EXPECT_EQ(a.getAt(0), 10.2);
}

// Size
TEST(size, 1){
  IntVec<int> a;
  EXPECT_EQ(a.size(), 0);
}

TEST(size, 2){
  IntVec<int> a;
  a.push_back(5);
  EXPECT_EQ(a.size(), 1);
}

TEST(size, 2_double){
  IntVec<double> a;
  a.push_back(5.3);
  EXPECT_EQ(a.size(), 1);
}

TEST(size, 3){
  IntVec<int> a;
  for(int i = 0; i < 100; i++){
    a.push_back(i);
  }
  EXPECT_EQ(a.size(), 100);
}

TEST(size, 3_double){
  IntVec<int> a;
  for(int i = 0; i < 100; i++){
    a.push_back(i*1.1);
  }
  EXPECT_EQ(a.size(), 100);
}

TEST(size, 4){
  IntVec<int> a;
  for(int i = 0; i < 80; i++){
    a.push_back(i);
    EXPECT_EQ(a.size(), i + 1);
  }
}

TEST(size, 5){
  IntVec<int> a;
  for(int i = 0; i < 100; i++){
    a.push_back(i);
  }
  ASSERT_ANY_THROW(a.push_back(5));
  EXPECT_EQ(a.size(), 100);
}

// Pushback/getAt
TEST(push_getAt, 1){
  IntVec<int> a;
  a.push_back(5);
  EXPECT_EQ(a.getAt(0), 5);
}

TEST(push_getAt, neg){
  IntVec<int> a;
  a.push_back(5);
  EXPECT_EQ(a.getAt(-1), 5);
}

TEST(push_getAt, notThere){
  IntVec<int> a;
  ASSERT_ANY_THROW(a.getAt(0));
}

TEST(push_getAt, notThereNeg){
  IntVec<int> a;
  ASSERT_ANY_THROW(a.getAt(-1));
}

TEST(push_getAt, 2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  EXPECT_EQ(a.getAt(1), -6);
}

TEST(push_getAt, neg2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  EXPECT_EQ(a.getAt(-1), -6);
  EXPECT_EQ(a.getAt(-2), 5);
}

TEST(push_getAt, notThere2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  ASSERT_ANY_THROW(a.getAt(2));
}

TEST(push_getAt, notThereNeg2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(-6);
  ASSERT_ANY_THROW(a.getAt(-3));
}

TEST(push_getAt, 3){
  IntVec<int> a;
  for(int i = 0; i < 80; i++){
    a.push_back(i);
    EXPECT_EQ(a.getAt(i), i);
    EXPECT_EQ(a.getAt(-1), i);
  }
}

// Set at
TEST(setAt, notThere){
  IntVec<int> a;
  ASSERT_ANY_THROW(a.setAt(-5,0));
  ASSERT_ANY_THROW(a.getAt(-1));
  ASSERT_ANY_THROW(a.getAt(1));
}

TEST(setAt, 1pos){
  IntVec<int> a;
  a.push_back(10);
  a.setAt(-5,0);
  ASSERT_ANY_THROW(a.setAt(-6,1));
  EXPECT_EQ(a.getAt(0), -5);
  EXPECT_EQ(a.getAt(-1), -5);
  ASSERT_ANY_THROW(a.setAt(-3,2));
}

TEST(setAt, big){
  IntVec<int> a;
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
  IntVec<int> a;
  a.clear();
  EXPECT_EQ(a.size(), 0);
}

TEST(clear, 1){
  IntVec<int> a;
  a.push_back(5);
  EXPECT_EQ(a.size(), 1);
  a.clear();
  EXPECT_EQ(a.size(), 0);
}

TEST(clear, 2){
  IntVec<int> a;
  a.push_back(6);
  a.push_back(7);
  EXPECT_EQ(a.size(), 2);
  a.clear();
  EXPECT_EQ(a.size(), 0);
}

// Sum
TEST(sum, 0){
  IntVec<int> a;
  EXPECT_EQ(a.sum(), 0);
}

TEST(sum, 1){
  IntVec<int> a;
  a.push_back(5);
  EXPECT_EQ(a.sum(), 5);
}

TEST(sum, 2){
  IntVec<int> a;
  int sum = 0;
  for(int i = 0; i < 100; i++){
    a.push_back( i * 14583);
    sum += 14583 * i;
  }
  EXPECT_EQ(a.sum(), sum);
}

TEST(sum, 3){
  IntVec<double> a;
  double sum = 0;
  for(int i = 0; i < 100; i++){
    a.push_back( i * 14583 * 1.1);
    sum += 14583 * i * 1.1;
  }
  EXPECT_EQ(a.sum(), sum);
}

// Get as string
TEST(getAsString, 0){
  IntVec<int> a;
  EXPECT_EQ(a.getAsString(), "[]");
}

TEST(getAsString, 1){
  IntVec<int> a;
  a.push_back(5);
  EXPECT_EQ(a.getAsString(), "[5]");
}

TEST(getAsString, 2){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(6);
  EXPECT_EQ(a.getAsString(), "[5, 6]");
}

TEST(getAsString, 3){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(6);
  a.push_back(10);
  EXPECT_EQ(a.getAsString(), "[5, 6, 10]");
}

TEST(getAsString, 4){
  IntVec<double> a;
  a.push_back(5.1);
  a.push_back(6.2);
  a.push_back(10.3);
  EXPECT_EQ(a.getAsString(), "[5.1, 6.2, 10.3]");
}

// ==

TEST(equality, 0){
  IntVec<int> a;
  IntVec<int> b;
  EXPECT_EQ(a == b, true);
}

TEST(equality, 1){
  IntVec<int> a;
  a.push_back(5);
  IntVec<int> b;
  EXPECT_EQ(a == b, false);
}

TEST(equality, 2){
  IntVec<int> a;
  IntVec<int> b;
  b.push_back(6);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}

TEST(equality, 3){
  IntVec<int> a;
  a.push_back(6);
  IntVec<int> b;
  b.push_back(6);
  EXPECT_EQ(a == b, true);
  EXPECT_EQ(b == a, true);
}

TEST(equality, 4){
  IntVec<int> a;
  a.push_back(5);
  IntVec<int> b;
  b.push_back(6);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}

TEST(equality, 5){
  IntVec<int> a;
  a.push_back(5);
  a.push_back(6);
  IntVec<int> b;
  b.push_back(5);
  b.push_back(6);
  EXPECT_EQ(a == b, true);
  EXPECT_EQ(b == a, true);
}

TEST(equality, 6){
  IntVec<int> a;
  a.push_back(6);
  a.push_back(5);
  IntVec<int> b;
  b.push_back(5);
  b.push_back(6);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}

TEST(equality, 7){
  IntVec<double> a;
  a.push_back(2.3);
  a.push_back(4.5);
  IntVec<double> b;
  b.push_back(4.5);
  b.push_back(2.3);
  EXPECT_EQ(a == b, false);
  EXPECT_EQ(b == a, false);
}

TEST(equality, 8){
  IntVec<double> a;
  a.push_back(2.3);
  a.push_back(4.5);
  IntVec<double> b;
  b.push_back(2.3);
  b.push_back(4.5);
  EXPECT_EQ(a == b, true);
  EXPECT_EQ(b == a, true);
}

TEST(GetMax, 1){
  IntVec<int> a;
  a.push_back(2);
  EXPECT_EQ(a.GetMax(), 2);
}

TEST(GetMax, 2){
  IntVec<int> a;
  a.push_back(2);
  a.push_back(1);
  a.push_back(3);
  EXPECT_EQ(a.GetMax(), 3);
}

TEST(GetMax, 3){
  IntVec<int> a;
  a.push_back(-2);
  a.push_back(-1);
  a.push_back(-3);
  EXPECT_EQ(a.GetMax(), -1);
}

TEST(GetMax, 4){
  IntVec<double> a;
  a.push_back(1.1);
  a.push_back(1.11);
  a.push_back(1.111);
  EXPECT_EQ(a.GetMax(), 1.111);
}

TEST(GetMax, 5){
  IntVec<double> a;
  a.push_back(-1.1);
  a.push_back(-1.11);
  a.push_back(-1.111);
  EXPECT_EQ(a.GetMax(), -1.1);
}

TEST(GetMin, 1){
  IntVec<int> a;
  a.push_back(2);
  EXPECT_EQ(a.GetMin(), 2);
}

TEST(GetMin, 2){
  IntVec<int> a;
  a.push_back(2);
  a.push_back(1);
  a.push_back(3);
  EXPECT_EQ(a.GetMin(), 1);
}

TEST(GetMin, 3){
  IntVec<int> a;
  a.push_back(-2);
  a.push_back(-1);
  a.push_back(-3);
  EXPECT_EQ(a.GetMin(), -3);
}

TEST(GetMin, 4){
  IntVec<double> a;
  a.push_back(0.1);
  a.push_back(0.3);
  a.push_back(0.5);
  EXPECT_EQ(a.GetMin(), 0.1);
}

TEST(GetMin, 5){
  IntVec<double> a;
  a.push_back(-0.4);
  a.push_back(-1.2);
  a.push_back(-100);
  EXPECT_EQ(a.GetMin(), -100);
}