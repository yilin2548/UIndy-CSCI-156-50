// Name: Yilin Liu
// Date: 2/7/2018
// Desc: Copy constructor and = assignment - Topic of W06

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
    print(a);
    // print(a);
    
    Point b;
    b = a;
    print(b);
    return 0;
}