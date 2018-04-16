/*    @file vehicle-sandbox.cpp    
      @author Yilin Liu-Leitke
      @date 4/15/2018 

			@description Sandbox for the Bicycle, Car, Truck and Airplane classes
*/

#include <iostream>
#include <vector>

#include "vehicle.h"

using namespace std;

int main(int argc, char* argv[]){
  Bike a;
  a.setColor("Red");
  a.setYear(2016);
  cout << a.print() << endl;
  
  Car b;
  b.setColor("Silver");
  b.setPassengers(5);
  b.setYear(2014);
  b.setAir(true);
  b.setDVD(true);
  cout << b.print() << endl;
  
  Truck c;
  c.setColor("Blue");
  c.setPassengers(2);
  c.setWheels(8);
  c.setYear(2016);
  c.setCap(10000);
  cout << c.print() << endl;
  
  Airplane d;
  d.setColor("White");
  d.setPassengers(20);
  d.setProps(4);
  d.setYear(2010);
  d.setCap(20000);
  cout << d.print() << endl;
}
 
