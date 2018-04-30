/*    @file Property_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the Property class
*/

#include "gtest/gtest.h"
#include <stdexcept>

#include "Property.h"


// Default & getters
TEST(def_get, 1){
  Property a;
  EXPECT_EQ(a.getAddress(), "Not Set");
  ASSERT_FLOAT_EQ(a.getSquareFt(), 0.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 0.0);
}

// One parameter constructor & getters
TEST(addr_get, 1){
  Property a("Here Place");
  EXPECT_EQ(a.getAddress(), "Here Place");
  ASSERT_FLOAT_EQ(a.getSquareFt(), 0.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 0.0);
}

// Two parameter constructor & getters
TEST(addr_get, 2){
  Property a("Here Place2", 5.0);
  EXPECT_EQ(a.getAddress(), "Here Place2");
  ASSERT_FLOAT_EQ(a.getSquareFt(), 5.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 5.0 / 43560.0);
}

// Two parameter constructor & getters, verifying floats internally
TEST(addr_get, 3){
  Property a("Here Place2", 5.5);
  EXPECT_EQ(a.getAddress(), "Here Place2");
  ASSERT_FLOAT_EQ(a.getSquareFt(), 5.5);
  ASSERT_FLOAT_EQ(a.getAcres(), 5.5 / 43560.0);
}

// Check to see if copy constructor works
TEST(copy, 1){
  Property a("Here Place2", 5.6);
  EXPECT_EQ(a.getAddress(), "Here Place2");
  ASSERT_FLOAT_EQ(a.getSquareFt(), 5.6);
  ASSERT_FLOAT_EQ(a.getAcres(), 5.6 / 43560.0);
  Property b(a);
  EXPECT_EQ(b.getAddress(), "Here Place2");
  ASSERT_FLOAT_EQ(b.getSquareFt(), 5.6);
  ASSERT_FLOAT_EQ(b.getAcres(), 5.6 / 43560.0);
}

// Check to see if copy constructor works and does a deep copy
// FIXME
TEST(copy, 2){
  Property a("Here Place2", 5.6);
  a.setAcres(10000.0);
  EXPECT_EQ(a.getAddress(), "Here Place2");
  ASSERT_FLOAT_EQ(a.getSquareFt(), 5.6);
  ASSERT_FLOAT_EQ(a.getAcres(), 5.6 / 43560.0);
  Property b(a);
  EXPECT_EQ(b.getAddress(), "Here Place2");
  ASSERT_FLOAT_EQ(b.getSquareFt(), 5.6);
  ASSERT_FLOAT_EQ(b.getAcres(), 5.6 / 43560.0);
}

// Does setter work?
// FIXME
TEST(set, acres1){
  Property a;
  ASSERT_FLOAT_EQ(a.getSquareFt(), 0.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 0.0);
  ASSERT_FLOAT_EQ(a.getSquareFt(), 43560.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 1.0);
  a.setAcres(1.0);
}

// Does setter work?
// FIXME
TEST(set, acres2){
  Property a;
  ASSERT_FLOAT_EQ(a.getSquareFt(), 0.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 2.5);
  a.setAcres(2.5);
  ASSERT_FLOAT_EQ(a.getAcres(), 0.0);
  ASSERT_FLOAT_EQ(a.getSquareFt(), 43560.0 * 2.5);
  
}

// Does setter work?
// FIXME
TEST(set, ft1){
  Property a;
  ASSERT_FLOAT_EQ(a.getSquareFt(), 5.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 5.0 / 43560.0);
  a.setSquareFt(5);
  ASSERT_FLOAT_EQ(a.getSquareFt(), 0.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 0.0);
  
}

// Does setter work?
TEST(set, ft2){
  Property a;
  ASSERT_FLOAT_EQ(a.getSquareFt(), 0.0);
  ASSERT_FLOAT_EQ(a.getAcres(), 0.0);
  a.setSquareFt(3.5);
  ASSERT_FLOAT_EQ(a.getSquareFt(), 3.5);
  ASSERT_FLOAT_EQ(a.getAcres(), 3.5 / 43560.0);
}

// Is tax calculation working?
TEST(tax, 1){
  Property a;
  ASSERT_FLOAT_EQ(a.getYearTax(), 0.0);  
}

// Is tax calculation working?
TEST(tax, 2){
  Property a("Not for sale", 1);
  ASSERT_FLOAT_EQ(a.getYearTax(), 0.25); 
}

// Is tax calculation working?
TEST(tax, 3){
  Property a("Still not for sale", 10);
  ASSERT_FLOAT_EQ(a.getYearTax(), 2.5); 
}

// Is tax calculation working after a setter?
TEST(tax, 4){
  Property a;
  a.setSquareFt(100);
  ASSERT_FLOAT_EQ(a.getYearTax(), 25.0); 
}

// Is tax calculation working after a setter?
TEST(tax, 5){
  Property a;
  a.setAcres(100 * 4 / 43560.0);
  ASSERT_FLOAT_EQ(a.getYearTax(), 100); 
}




