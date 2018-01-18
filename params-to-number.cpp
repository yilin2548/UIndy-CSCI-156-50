/* Name: Paul Talaga
   Date: 1/15/17
   Desc: Demonstration of using command-line parameters in a program and 
         converting a parameter to a number.
         
         Try compiling this like: g++ params-to-number.cpp
         Then running:  ./a.out
                 also:  ./a.out 10 25
                 also:  ./a.out 25 hello
         And trying to understand what the argc and argv do in main below.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
  cout << "There were " << argc << " input parameters." << endl;
  
  for(int i = 0; i < argc; i++){
    cout << '[' << i << "] " << argv[i] << endl;
  }
  
  // Run this program with: ./a.out 50
  if(argc == 2){ // One parameter was given
    cout << "Number: " << atoi(argv[1]) + 10 << endl; 
  }
}

