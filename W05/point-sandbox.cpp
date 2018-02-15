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
    
    //cout << a -> print() << endl;
/*
    Point a;
    cout << "After calling defualt constructor a: ";
    cout << a.print() << endl;
    a.setX(10);
    a.setY(10);
    cout << "a: x "<<a.getX() << endl;
    cout << "a: ";
    cout << a.print() << endl;
    
    cout << "A's distance to origin (14.1421): " << a.distanceToOrigin() << endl;
    
    Point b(6, 7);
    cout << "b: ";
    // b.setX(15);
    // b.setY(10);
    cout << b.print() << endl;
    
    cout <<"Distance between a and b is (5): " << a.distanceToOther(b) << endl;
*/
    return 0;
}