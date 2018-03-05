#include "gtest/gtest.h"
#include "Point.h"

TEST(getX, Default){
    Point a;
    EXPECT_EQ(a.getX(), 0);
}

TEST(getX, Overload){
    Point a(5, 6);
    EXPECT_EQ(a.getX(), 5);
}

TEST(getY, Overload){
    Point a(3, 4);
    EXPECT_EQ(a.getY(), 4);
}