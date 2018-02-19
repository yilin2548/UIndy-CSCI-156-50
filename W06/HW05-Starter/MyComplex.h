#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H  

/*    @file MyComplex.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements a class for manipulating complex numbers.
*/

#include <string>

// There is no need to change this!

using namespace std;

class MyComplex{
  public:
  
  MyComplex(double, double);
  
  MyComplex operator+(const MyComplex &) const;
  MyComplex operator-(const MyComplex &) const;
  MyComplex operator*(const MyComplex &) const;
  MyComplex operator/(const MyComplex &) const;
  bool operator==(const MyComplex &) const;
  
  string getAsString() const;
  double mag2() const;
  double dist2(const MyComplex &) const;
  
  double getReal() const;
  double getImaginary() const;
  
  void setReal(double);
  void setImaginary(double);
  
  private:
  
  MyComplex();
  
  double real;
  double imaginary;
};


  
#endif
