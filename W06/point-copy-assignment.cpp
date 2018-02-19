// Name: Yilin Liu
// Date: 2/19/2018
// Desc: Copy constructor and overloaded assignment

#include<iostream>
#include "Point-heap.h"
#include <sstream>
using namespace std;

void print(Point &a){
    cout << a.print() << endl;
}

int main(){
    Point a;
    a.setX(10);
    a.setY(10);
    Point a2(a);
    print(a2);
    print(a);
    print(a);
    
    Point b;
    b = a;
    print(b);
    
    Point c = a + b;
    print(c);
    
    return 0;
}