// Name: Yilin Liu
// Date: 1/29/2018
// Desc: Passing by value, passying by reference, and passing by pointer

#include <iostream>

using namespace std;

void passingByValue(int var){
    var = var + 1;
    cout << "Inside passingByValue: " << var << endl;
}
void passingByReference(int &var){
    var = var + 1;
    cout << "Inside passingByReference: " << var << endl;
}

void passingByPointer(int *var){
    *var = *var + 1;
    cout << "Inside passingByPointer: " << var << endl;
    int a = 5;
    var = &a;
    cout << "Inside passingByPointer: " << var << endl;
    cout << "Inside passingByPointer: " << *var << endl;
}

int main(){
    int var = 10;
    
    cout << "Before calling any functiosn: " << var << endl;
    
    // passingByValue(var);
    // cout << "After calling passingByValue: " << var << endl;
    
    // passingByReference(var);
    // cout << "Afer calling passingByReference: " << var << endl;
    
    passingByPointer(&var);
    cout << "Afer calling passingByPointer: " << var << endl;
    
}