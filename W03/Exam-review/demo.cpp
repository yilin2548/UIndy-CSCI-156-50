/* Name: Paul Talaga
   Date: 1/15/17
   Desc: Demonstration of using command-line parameters in a program.
            Try compiling this like: g++ demo.cpp
         Then running:  ./a.out
                 also:  ./a.out bob mary
                 also:  ./a.out grace\ smith bill
         And trying to understand what the argc and argv do in main below.
*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cout << "There were " << argc << " parameters, here they are: " << endl;
  for(int i = 0; i < argc; i++){
    cout << i << ":" << argv[i] << endl;
  }
  return 0;
}
