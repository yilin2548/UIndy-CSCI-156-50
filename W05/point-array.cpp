#include <iostream>
// #include "Point.h // if you want to use static memory
#include "Point-heap.h" // if you want to use heap memory

using namespace std;

int main(){
    float a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        cout << a[i] << endl;
    }
    
    Point b[5];
    for(int i = 0; i < 5; i++){
        cout << b[i].print() << endl;
    }    
    
    Point c[] = {Point(1, 2), Point(2, 3), Point(4, 5)};
    for(int i = 0; i < 3; i++){
        cout << c[i].print() << endl;
    }    
    
    return 0;
}