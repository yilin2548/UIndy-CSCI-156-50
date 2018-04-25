// Name: Yilin Liu-Leitke
// Date: 2/27/18
// Desc: the sandbox testing the Rational class.

#include <iostream>
#include "Rational.h"

using namespace std;

int main(){
  // Example usage of the Rational class
  Rational a;
  cout << a.print() << " = 1/1" << endl;
  
  try{
    Rational b(5,0);  // Should not work!
  } catch (exception &e) {
    cout << e.what() << endl;
  }
  
  try{
    Rational c(0, 1);
    cout << c.print() << " = 0/1" << endl;
    cout << a.divide(c).print() << endl; // Should not work!
  } catch (exception &e) {
    cout << e.what() << endl;
  }
  
  return 0;
}


