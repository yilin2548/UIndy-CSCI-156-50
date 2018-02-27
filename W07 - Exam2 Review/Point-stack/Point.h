#ifndef POINT_H
#define POINT_H
// Name: Yilin Liu-Letike
// Date: 2/15/18
// Desc: Definition of a class Point

using namespace std;

class Point{
  private:
    int x;
    int y;
    
  public:
    Point();
    Point(int a, int b);
    Point(const Point &other);
    ~Point();
    void setX(int x);
    void setY(int y);
    
    int getX() const;
    int getY() const;
    
    string print() const;
    float distanceToOrigin() const;
    float distanceToOther(const Point &other) const;
};
#endif