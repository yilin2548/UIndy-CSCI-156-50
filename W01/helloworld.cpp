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
        // Note that argv is a charactor so if we need to do operation to argv
        // as a number we need to call function atoi (included in cstdlib)
        sum += atoi(argv[i]);
    }
    cout << "Sum = " << sum << endl;
}