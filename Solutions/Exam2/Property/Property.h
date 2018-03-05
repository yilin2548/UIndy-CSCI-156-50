#ifndef PROPERTY_H
#define PROPERTY_h

/*
  Yilin Liu-Leitke
	2/28/2018
	Simple non-pointer object demo Property interface file.
*/

#include <string>

using namespace std;

// Class to store information about a property able to give the yearly taxes.
class Property{
  private:

  string address;
  float* square_foot; 

  public:
  Property();
  Property(string addr);
  Property(string addr, float sqft);
  Property(const Property &other);
  
  ~Property();
   
  // Setters // 6 pts
  void setAcres(float acres);
  void setSquareFt(float sqft);
  
  // Getters
  string getAddress() const;
  
  float getAcres() const;
  float getSquareFt() const;
  
  float getYearTax() const;
  
};


#endif

