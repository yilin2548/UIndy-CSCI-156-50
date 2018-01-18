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