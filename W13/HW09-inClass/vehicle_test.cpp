/*    @file vehicle_test.cpp   
      @author Yilin Liu-Leitke
      @date 4/15/2018

			@description Tests for the classes in the vehicle.h file:
			Bicycle, Car, Truck, Airplane
*/

#include "gtest/gtest.h"

#include "vehicle.h"

// Bike Tests
TEST(bike, constructor){
  Bike a;
  EXPECT_EQ(a.getColor(), "");
  EXPECT_EQ(a.getPassengers(), 1);
  EXPECT_EQ(a.getWheels(), 2);
  EXPECT_EQ(a.getYear(), CURRENT_YEAR);
  EXPECT_EQ(a.getPrice(), 1000);
}

TEST(bike, getSetColor){
  Bike a;
  a.setColor("Red");
  EXPECT_EQ(a.getColor(), "Red");
}

TEST(bike, getSetPassengers){
  Bike a;
  a.setPassengers(2);
  EXPECT_EQ(a.getPassengers(), 1);
}

TEST(bike, getSetWheels){
  Bike a;
  a.setWheels(4);
  EXPECT_EQ(a.getWheels(), 2);
}

TEST(bike, getSetYear){
  Bike a;
  a.setYear(2000);
  EXPECT_EQ(a.getYear(), 2000);
  a.setYear(2020);
  EXPECT_EQ(a.getYear(), CURRENT_YEAR);
}

TEST(bike, getPrice){
  Bike a;
  a.setYear(2000);
  EXPECT_EQ(a.getPrice(), 0);
  a.setYear(2016);
  EXPECT_EQ(a.getPrice(), 800);
}

// Car
TEST(car, constructor){
  Car a;
  EXPECT_EQ(a.getColor(), "");
  EXPECT_EQ(a.getPassengers(), 1);
  EXPECT_EQ(a.getWheels(), 4);
  EXPECT_EQ(a.getYear(), CURRENT_YEAR);
  EXPECT_EQ(a.getPrice(), 5000);
}

TEST(car, getSetColor){
  Car a;
  a.setColor("Red");
  EXPECT_EQ(a.getColor(), "Red");
}

TEST(car, getSetPassengers){
  Car a;
  a.setPassengers(4);
  EXPECT_EQ(a.getPassengers(), 4);
  a.setPassengers(-1);
  EXPECT_EQ(a.getPassengers(), 4);
  a.setPassengers(11);
  EXPECT_EQ(a.getPassengers(), 4);
}

TEST(car, getSetWheels){
  Car a;
  a.setWheels(2);
  EXPECT_EQ(a.getWheels(), 4);
}

TEST(car, getSetYear){
  Car a;
  a.setYear(2000);
  EXPECT_EQ(a.getYear(), 2000);
  a.setYear(2020);
  EXPECT_EQ(a.getYear(), CURRENT_YEAR);
}

TEST(car, getSetAir){
  Car a;
  a.setAir(true);
  EXPECT_EQ(a.getAir(), true);
}

TEST(car, getSetDVD){
  Car a;
  a.setDVD(true);
  EXPECT_EQ(a.getDVD(), true);
}

TEST(car, getPrice){
  Car a;
  a.setPassengers(5);
  a.setAir(true);
  a.setDVD(false);
  a.setYear(1900);
  EXPECT_EQ(a.getPrice(), 300);
  Car b;
  b.setPassengers(4);
  b.setYear(2016);
  b.setAir(true);
  b.setDVD(true);
  EXPECT_EQ(b.getPrice(), 19300);
}

// Truck
TEST(truck, constructor){
  Truck a;
  EXPECT_EQ(a.getColor(), "");
  EXPECT_EQ(a.getPassengers(), 1);
  EXPECT_EQ(a.getWheels(), 4);
  EXPECT_EQ(a.getYear(), CURRENT_YEAR);
  EXPECT_EQ(a.getCap(), 0);
  EXPECT_EQ(a.getPrice(), 11800);
}

TEST(truck, getSetPassengers){
  Truck a;
  a.setPassengers(2);
  EXPECT_EQ(a.getPassengers(), 2);
  a.setPassengers(-1);
  EXPECT_EQ(a.getPassengers(), 2);
  a.setPassengers(5);
  EXPECT_EQ(a.getPassengers(), 2);
}

TEST(truck, getSetWheels){
  Truck a;
  a.setWheels(6);
  EXPECT_EQ(a.getWheels(), 6);
  a.setPassengers(3);
  EXPECT_EQ(a.getWheels(), 6);
  a.setPassengers(17);
  EXPECT_EQ(a.getWheels(), 6);
}

TEST(truck, getSetCap){
  Truck a;
  a.setCap(10000);
  EXPECT_EQ(a.getCap(), 10000);
  a.setCap(30000);
  EXPECT_EQ(a.getCap(), 10000);
}

TEST(truck, getPrice){
  Truck a;
  a.setWheels(4);
  a.setYear(1900);
  EXPECT_EQ(a.getPrice(), 1000);
  Truck b;
  b.setPassengers(2);
  b.setWheels(8);
  b.setYear(2016);
  b.setCap(10000);
  EXPECT_EQ(b.getPrice(), 25100);
}


// Airplane
TEST(airplane, constructor){
  Airplane a;
  EXPECT_EQ(a.getColor(), "");
  EXPECT_EQ(a.getPassengers(), 1);
  EXPECT_EQ(a.getWheels(), 0);
  EXPECT_EQ(a.getYear(), CURRENT_YEAR);
  EXPECT_EQ(a.getCap(), 0);
  EXPECT_EQ(a.getProps(), 1);
  EXPECT_EQ(a.getPrice(), 16100);
}

TEST(airplane, getSetPassengers){
  Airplane a;
  a.setPassengers(20);
  EXPECT_EQ(a.getPassengers(), 20);
  a.setPassengers(-1);
  EXPECT_EQ(a.getPassengers(), 20);
  a.setPassengers(41);
  EXPECT_EQ(a.getPassengers(), 20);
}

TEST(airplane, getSetWheels){
  Airplane a;
  a.setWheels(6);
  EXPECT_EQ(a.getWheels(), 0);
}

TEST(airplane, getSetCap){
  Airplane a;
  a.setCap(10000);
  EXPECT_EQ(a.getCap(), 10000);
  a.setCap(30000);
  EXPECT_EQ(a.getCap(), 10000);
}

TEST(airplane, getPrice){
  Airplane a;
  a.setProps(4);
  a.setCap(20000);
  a.setYear(1900);
  EXPECT_EQ(a.getPrice(), 106400);
  Airplane b;
  b.setPassengers(20);
  b.setProps(4);
  b.setYear(2010);
  b.setCap(20000);
  EXPECT_EQ(b.getPrice(), 136400);
}
