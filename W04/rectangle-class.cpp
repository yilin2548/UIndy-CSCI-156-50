/* Name: Paul Talaga
   Date: 1/30/17
   Desc: Implementation of a class
         of rectangles.
*/
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

float randFloatUnit(){
  return (rand()) / static_cast <float> (RAND_MAX);
}

// We'll keep xy a struct for now, later we'll convert it too
struct xy_t{
  float x;
  float y;
};

// Note we implement this class in-line, that is within the class defintion.
// For small classes this is OK, but for larger ones this is not desired.
// Rather split it into a definition file (.h) and implemention (.cpp)
class Rectangle{
  public:
  Rectangle(){  // Default Constructor
    ul.x = 0.0;
    ul.y = 0.0;
    lr.x = 0.0;
    lr.y = 0.0;
  }
  
  // If 2 floats are given, create a random rectangle within
  // that width and height.
  Rectangle(float width_max, float height_max){
    ul.x = randFloatUnit() * width_max;
    ul.y = randFloatUnit() * height_max;
    lr.x = (randFloatUnit() * (width_max - ul.x)) + ul.x;
    lr.y = (randFloatUnit() * (height_max - ul.y)) + ul.y;
  }
  
  void print() const{
    cout << "Upper Left:  (" << ul.x << "," << ul.y << ")" << endl; 
    cout << "Lower Left:  (" << ul.x << "," << lr.y << ")" << endl;
    cout << "Upper Right: (" << lr.x << "," << ul.y << ")" << endl;
    cout << "Lower Left:  (" << lr.x << "," << lr.y << ")" << endl;
    cout << "Area: " << getArea() << endl;
  }
  
  // const means this function will not change the instance, just read
  float getArea() const{
    // We do this calculation each time just in case the rectangle changes.
    return (lr.x - ul.x) * (lr.y - ul.y);
  }
  
  // Getters
  xy_t getUpperLeft() const{
    return ul;
  }
  
  xy_t getLowerRight() const{
    return lr;
  }
  
  // Setters          // Pass by const-reference for speed & safety
  void setUpperLeft(const xy_t &temp){
    ul = temp;
  }
  
  void setLowerRight(const xy_t &temp){
    lr = temp;
  }
  
  private:
  xy_t ul;
  xy_t lr;
};


int main(){
  // Place the rectangles in a vector
  vector<Rectangle> rectangles;
  
  // Create 10 random rectangles within a box.
  for(int i = 0; i < 10; i++){
    rectangles.push_back( Rectangle(400,400) );
  }
  
  // Print all out
  for(int i = 0; i < 10; i++){
    rectangles[i].print();
  }
  
  // Other ways to create an instance of the Rectangle Class
  Rectangle a;  // This will call the default constructor.
    // Not that unlike an int type (which is a primitive), creating
    // an instance of a class calls the constructor, which should
    // initialize the class.  Thus setting a default value isn't needed.
  
  Rectangle b(10,20);  // This will call the overloaded constructor.
  
  return 0;
}
