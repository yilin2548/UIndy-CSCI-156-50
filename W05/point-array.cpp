// Name: Yilin Liu-Letike
// Date: 2/15/18
// Desc: In class demo of array of objects
#include <iostream>
// #include "Point.h // if you want to use static memory
#include "Point-heap.h" // if you want to use heap memory

using namespace std;

int main(){
    float a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        cout << a[i] << endl;
    }
    
    // Each object in the array b will be initialized
    // to (0, 0)
    Point b[5];
    for(int i = 0; i < 5; i++){
        cout << b[i].print() << endl;
    }    
    
    // You can also initialize array of object by c[] = {...}
    Point c[] = {Point(1, 2), Point(2, 3), Point(4, 5)};
    for(int i = 0; i < 3; i++){
        cout << c[i].print() << endl;
    }    
    
    return 0;
}