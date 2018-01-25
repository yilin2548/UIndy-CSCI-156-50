/* Name: Yilin Liu
   Date: 1/23/2018
   Desc: Using a union to analyze how different types are stored in memory.
*/
#include <iostream>

using namespace std;

// This thing_t is a union, so a,b,c all are on top of each other. 
// Also, a,b,c each take up 4 bytes.

union thing_t{
  int a;
  char b[4];
  float c;
};

int main(){
  // Create a variable to put information.  This is only 4 bytes in size.
  thing_t package;
  // Treat the entire package as an int and put a number in it
  package.a = 300;
  // Now print it out
  cout << " a: " << package.a << endl;
  // Since a char is 1 byte, an array of 4 chars is 4 bytes.
  // Print out each byte as converted to an integer.
  // Note that ints are signed, so it will be negative if the leading bit
  // (most significant bit) is a 1.
  cout << "b0: " << (int)package.b[0] << endl;
  cout << "b1: " << (int)package.b[1] << endl;
  cout << "b2: " << (int)package.b[2] << endl;
  cout << "b3: " << (int)package.b[3] << endl;
  // Now treat the package as a float and print its value.
  cout << " c: " << package.c << endl;
  
  // Note the array's values seem to be backward.  This is because intel
  // chips use little-endian format, meaning the LEAST significant byte
  // is first, whichis backward from what we are used to.
  
  return 0;
}
