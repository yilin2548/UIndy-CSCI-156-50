// Name: Yilin Liu
// Date: 1/29/2017
// Desc: Demostration of three loop

#include <iostream>

using namespace std;

int main(){
    int forIter = 0;
    int whileIter = 0;
    int doWhileIter = 0;
    
    // for-loop
    cout << "For loop: " << endl;
    for(int i = 0; i < forIter; i++){
        cout << "iter: " << i << endl;
    }
    
    //while loop
    cout << "While loop: " << endl;
    while(whileIter > 0){
        cout << "iter: " << whileIter << endl;
        whileIter--;
    }
    
    //do-while loop
    cout << "Do-while loop: " << endl;
    do{
        cout << "iter: " << doWhileIter << endl;
        doWhileIter--;
    }while(doWhileIter > 0);
    
    
}