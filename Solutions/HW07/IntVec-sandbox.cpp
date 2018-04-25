/*    @file sandbox.cpp    
      @author <fill me in>
      @date <fill me in>  

			@description Sandbox for IntVec
*/

#include <iostream>


#include "IntVec.h"

void doNothing(IntVec<int> a){
  a.push_back(5);
}

using namespace std;

int main(int argc, char* argv[]){
  // Use this program to test your IntVec implementation!
  IntVec<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  
  IntVec<int> b;
  b.push_back(2);
  b.push_back(3);
  b.push_back(4);
  
  
  // Used to test the copy constructor
  doNothing(a);
  
  // These should be the same if the copy constructor is working 
  // correctly.
  cout << "a: " << a.getAsString() << endl;
  cout << "b: " << b.getAsString() << endl;
  
  cout << "sum of a: " << a.sum() << endl;
  cout << "sum of b: " << b.sum() << endl;
  
	return 0;
}