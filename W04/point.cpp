#include<iostream>
#include<math.h>

using namespace std;

class Point{
  private:
    int x;
    int y;
    
  public:
    Point() {   // default constructor
        x = 0;
        y = 0;
        cout << "Constructor was called on " << this << endl;
    }
    
    Point(int a, int b){ // Overloaded constructor
        x = a;
        y = b;
        cout << "Overloaded constructor was called on" << this << endl;
    }
    
    void setX(int x){ // setter
        this -> x = x;
    }
    
    void setY(int y){
        this -> y = y;
    }
    
    int getX() const{  // getter
        return x;
    }
    
    int getY() const{
        return y;
    }
    
    void print() const{
        cout << "(" << x << ", " << y << ")" << endl;
        cout << this << endl;
    }
    
    float distanceToOrigin() const{
        int x2 = x * x;
        int y2 = y * y;
        return sqrt(x2 + y2);
    }
    
    float distanceToOther(const Point &other) const{
        int x_diff = x - other.x;
        int y_diff = y - other.y;
        return sqrt(x_diff * x_diff + y_diff * y_diff);
    }
};

int main(){
    //const int SIZE = 100;
    Point a;
    cout << "After calling defualt constructor a: ";
    a.print();
    a.setX(10);
    a.setY(10);
    cout << "a: x "<<a.getX() << endl;
    cout << "a: ";
    a.print();
    
    cout << "A's distance to origin: 14.1421" << a.distanceToOrigin() << endl;
    
    Point b(6, 7);
    cout << "b: ";
    // b.setX(15);
    // b.setY(10);
    b.print();
    
    cout <<"Distance between a and b is: " << a.distanceToOther(b) << endl;
    
    return 0;
}