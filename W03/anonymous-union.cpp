/* Name: Paul Talaga
   Date: 1/30/17  Morning class
   Desc: Demonstration of an anonymous union.  Here it is defined in main
         so a and b will be variables in main, but refer to the same place
         in memory.
*/
#include <iostream>

using namespace std;

int main(){

  union{
    int a;
    float b;
  };
  
  a = 5;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "a's address: " << &a << endl;
  cout << "b's address: " << &b << endl;
  
  return 0;
}