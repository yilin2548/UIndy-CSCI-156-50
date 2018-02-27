// Name: Yilin Liu
// Date: 2/7/2018
// Desc: Demonstration of a point class
//       A sandbox to test out the point class implementation

#include<iostream>
#include "Point-heap.h"
#include <sstream>
using namespace std;

#define SIZE 100

int main(){
    
    Point *a = new Point();
    a -> setX(10);
    a -> setY(10);
    cout << a -> print() << endl;
    
    cout << "a: " << a << endl;
    delete a;
    a = NULL;
    cout << "a: " << a << endl;
    Point *b = new Point(6,7);
    cout << "b: " << b->print() << endl;
    
    return 0;
}