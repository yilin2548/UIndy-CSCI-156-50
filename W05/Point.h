#ifndef POINT_H
#define POINT_H
using namespace std;
class Point{
  private:
    int x;
    int y;
    
  public:
    Point();
    Point(int a, int b);
    
    void setX(int x);
    void setY(int y);
    
    int getX() const;
    int getY() const;
    
    string print() const;
    float distanceToOrigin() const;
    float distanceToOther(const Point &other) const;
};
#endif