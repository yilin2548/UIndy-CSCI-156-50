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
 
  Rational b(5,0);  // Should not work!
  
  return 0;
}


