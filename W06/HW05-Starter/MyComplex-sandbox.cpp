/*    @file sandbox.cpp    
      @author <fill me in>
      @date <fill me in>  

			@description Sandbox for MyComplex
*/

#include <iostream>


#include "MyComplex.h"

using namespace std;

int main(int argc, char* argv[]){
  // Use this program to test your MyComplex implementation!
 
  
  MyComplex a(5,6);
  cout << "a: " << a.getAsString() << endl;
  MyComplex b(8,-2);
  cout << "b: " << b.getAsString() << endl;
  
  cout << "a + b: " << (a + b).getAsString() << endl;
  cout << "a - b: " << (a - b).getAsString() << endl;
  cout << "a * b: " << (a * b).getAsString() << endl;
  cout << "a / b: " << (a / b).getAsString() << endl;
  
  cout << "Distance squared: " << a.dist2(b) << endl;
  cout << "a's magnitude squared: " << a.mag2() << endl;
  
  cout << "a == b? " << (a == b) << endl;
  
  cout << "a real: " << a.getReal() << endl;
  cout << "a imag: " << a.getImaginary() << endl;
  
  a.setReal(10);
  a.setImaginary(99);
  
  cout << "changed a: " << a.getAsString() << endl;
  
	
	return 0;
}
