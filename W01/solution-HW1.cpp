#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    if(argc == 1){
        cout << "Hello World!" << endl;
    }
    else if(argc == 2){
        cout << "Hello " << argv[1] << "!" << endl;
    }
    else if(argc == 3){
        for(int i = 0; i < atoi(argv[2]); i++){
            cout << "[" << i+1 << "] "<< "Hello " << argv[1] << "!" << endl;
        }
    }
    else {
        cout << "Invalid parameters!" << endl;
    }
}