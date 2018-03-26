#ifndef POINT_H
#define POINT_H
// Name: Yilin Liu-Letike
// Date: 2/15/18
// Desc: Definition of a class Point
#include <sstream>
#include <math.h>

using namespace std;

template<class T>
class Point{
  private:
    T x;
    T y;
    
  public:
    Point();
    Point(T a, T b);
    Point(const Point &other);
    ~Point();
    void setX(T x);
    void setY(T y);
    
    T getX() const;
    T getY() const;
    
    string print() const;
    float distanceToOrigin() const;
    float distanceToOther(const Point &other) const;
};

template<class T>
Point<T>::Point() {   // default constructor
    x = 0;
    y = 0;
    // cout << "Constructor was called on " << this << endl;
}

template<class T>
Point<T>::Point(T a, T b){ // Overloaded constructor
    x = a;
    y = b;
    // cout << "Overloaded constructor was called on" << this << endl;
}

template<class T>
Point<T>::Point(const Point &other){
    x = other.x;
    y = other.y;
}

template<class T>
Point<T>::~Point(){}

template<class T>
void Point<T>::setX(T x){ // setter
    this -> x = x;
}

template<class T>
void Point<T>::setY(T y){
    this -> y = y;
}

template<class T>
T Point<T>::getX() const{  // getter
    return x;
}

template<class T>
T Point<T>::getY() const{
    return y;
}

template<class T>
string Point<T>::print() const{
    stringstream s;
    s << "(" << x << ", " << y << ")";
    return s.str();
}

template<class T>
float Point<T>::distanceToOrigin() const{
    T x2 = x * x;
    T y2 = y * y;
    return sqrt(x2 + y2);
}

template<class T>
float Point<T>::distanceToOther(const Point<T> &other) const{
    T x_diff = x - other.x;
    T y_diff = y - other.y;
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

#endif