#include <iostream>
#include <sstream>
#include <math.h>
#include "Point-heap.h"

using namespace std;

Point::Point() {   // default constructor
    x = new int;
    y = new int;
    //*(this -> x) = 0;
    *x = 0;
    *y = 0;
    //cout << "Constructor was called on " << this << endl;
}

Point::Point(int a, int b){ // Overloaded constructor
    x = new int;
    y = new int;
    *x = a;
    *y = b;
    cout << "Overloaded constructor was called on" << this << endl;
}

Point::~Point(){
    cout << "Destructor was called on" << this << endl;
    delete x;
    delete y;
    x = NULL;
    y = NULL;
}

void Point::setX(int x){ // setter
    *(this -> x) = x;
}

void Point::setY(int y){
    *(this -> y) = y;
}

int Point::getX() const{  // getter
    return *x;
}

int Point::getY() const{
    return *y;
}

string Point::print() const{
    stringstream s;
    s << "(" << *x << ", " << *y << ")";
    return s.str();
}

float Point::distanceToOrigin() const{
    int x2 = *x * *x;
    int y2 = *y * *y;
    return sqrt(x2 + y2);
}

float Point::distanceToOther(const Point &other) const{
    int x_diff = *x - *other.x;
    int y_diff = *y - *other.y;
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}