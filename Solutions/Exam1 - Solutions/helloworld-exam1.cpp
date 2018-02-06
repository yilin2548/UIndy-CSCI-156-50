// Name: Yilin Liu
// Filename: helloworld.cpp
// Desc: Solution to exam 1 question 3

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    srand(time(NULL));
    string n[] = {"Jen","Cory","Titus","Kyle","Bailey"};
    if(argc == 1){
        cout << "Hello " << n[rand()%5] << "!" << endl;
    }
    else if(argc == 2){
        cout << "Hello " << argv[1] << "!" << endl;
    }
    else if(argc == 3){
        for(int i = 0; i < atoi(argv[2]); i++){
            cout << "[" << i+1 << "] "<< "Hello " << argv[1];
            for (int j = 0; j < i+1; j++){
                cout << "!";
            }
            cout << endl;
        }
    }
    else {
        cout << "Invalid parameters!" << endl;
    }
}