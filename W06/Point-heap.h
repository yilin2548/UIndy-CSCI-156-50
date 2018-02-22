#ifndef POINT_H
#define POINT_H
// Name: Yilin Liu-Letike
// Date: 2/15/18
// Desc: Definition of a class Point on the heap
using namespace std;
class Point{
  private:
    int *x;
    int *y;
    
  public:
    Point();
    Point(int a, int b);
    ~Point();
    
    Point(const Point &other);
    
    void setX(int x);
    void setY(int y);
    
    int getX() const;
    int getY() const;
    
    string print() const;
    float distanceToOrigin() const;
    float distanceToOther(const Point &other) const;
    
    // void operator=(const Point &other);
    Point& operator=(const Point &other);
    Point operator+(const Point &other);
};
#endif