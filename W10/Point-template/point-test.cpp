/* Name: Yilin Liu-Leitke
   Date: 3/26/2018
   Desc: Unit testing using gtest for Point<int> class
*/

#include "gtest/gtest.h"

#include "Point.h"

TEST(constructor, default){
  Point<int> a;
  EXPECT_EQ(a.getX(), 0);
  EXPECT_EQ(a.getY(), 0);
}

TEST(constructor, overloaded){
  Point<int> a(2, 3);
  EXPECT_EQ(a.getX(), 2);
  EXPECT_EQ(a.getY(), 3);
}

TEST(setX, 1){
  Point<int> a;
  a.setX(2);
  EXPECT_EQ(a.getX(), 2);
  EXPECT_EQ(a.getY(), 0);
}

TEST(setY, 1){
  Point<int> a;
  a.setY(2);
  EXPECT_EQ(a.getY(), 2);
  EXPECT_EQ(a.getX(), 0);
}

TEST(distanceToOrigin, 1){
  Point<int> a;
  EXPECT_EQ(a.distanceToOrigin(), 0);
}

TEST(distanceToOrigin, 2){
  Point<int> a(3, 4);
  EXPECT_DOUBLE_EQ(a.distanceToOrigin(), 5);
}

TEST(distanceToOther, 1){
  Point<int> a;
  Point<int> b;
  EXPECT_DOUBLE_EQ(a.distanceToOther(b), 0);
}

TEST(distanceToOther, 2){
  Point<int> a(10, 10);
  Point<int> b(6, 7);
  EXPECT_DOUBLE_EQ(a.distanceToOther(b), 5);
}