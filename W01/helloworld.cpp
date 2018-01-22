/*  Name: Yilin Liu
    Date: 1/17/2018
    Desc: Demo of passing parameter to the program
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    cout << "Hello world!" << endl;
    cout << "Parameters count:" << argc << endl;
    int sum = 0;
    for (int i=0; i < argc; i++){
        cout << argv[i] << endl;
        sum += atoi(argv[i]);
    }
    cout << "Sum = " << sum << endl;
}