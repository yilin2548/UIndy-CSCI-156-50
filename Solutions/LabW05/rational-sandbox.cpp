// Name: Yilin Liu-Leitke
// Date: 2/15/18
// Desc: Lab W05 - the sandbox testing the Rational class.

#include <iostream>
#include "Rational.h"

using namespace std;

int main(){
  // Example usage of the Rational class
  Rational a;
  cout << a.print() << " = 1/1" << endl;
  Rational b(1,2);
  cout << b.print() << " = 1/2" << endl;
  cout << b.getNumerator() << " = 1" << endl;
  cout << b.getDenominator() << " = 2" << endl;
  Rational c;
  c.setNumerator(7);
  c.setDenominator(6);
  cout << c.print() << " = 7/6" << endl;
  b.addBy(3);
  cout << b.print() << " = 7/2" << endl;
  a.multBy(10);
  cout << a.print() << " = 10/1" << endl; 
  cout << a.add(b).print() << " = 27/2" << endl;
  cout << a.mult(b).print() << " = 70/2" << endl;
  cout << a.print() << " = 10/1" << endl;
  cout << b.print() << " = 7/2" << endl;
  

  Rational d(5, 1);
  cout << a.isEqualTo(d) << " = 0" << endl;
  Rational e(10,2);
  cout << e.isEqualTo(d) << " = 1" << endl;
  cout << e.isGreaterThan(d) << " = 0" << endl;
  cout << e.isGreaterOrEqualTo(d) << " = 1" << endl;
  Rational f(11,2);
  cout << f.isEqualTo(d) << " = 0" << endl;
  cout << f.isGreaterThan(d) << " = 1" << endl;
  cout << f.isGreaterOrEqualTo(d) << " = 1" << endl;
  
  return 0;
}

