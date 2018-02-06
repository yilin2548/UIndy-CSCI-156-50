/* Name: Paul Talaga
   Date: 1/30/17
   Desc: Implementation of a procedural method for maniplation a set
         of rectangles.
*/
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

float randFloatUnit(){
  return (rand()) / static_cast <float> (RAND_MAX);
}

struct xy_t{
  float x;
  float y;
};

// ul = Upper left, lr = Lower Right.  Assume upper left has smaller x and
// y values.
struct rectangle_t{
  xy_t ul;
  xy_t lr;
};

// Finds the area of the given rectangle
float getArea(const rectangle_t &r){
  return (r.lr.x - r.ul.x) * (r.lr.y - r.ul.y);
}

// Returns a random rectangle within max width and max height
rectangle_t randomRectangle(float width_max, float height_max){
  rectangle_t temp;
  temp.ul.x = randFloatUnit() * width_max;
  temp.ul.y = randFloatUnit() * height_max;
  temp.lr.x = (randFloatUnit() * (width_max - temp.ul.x)) + temp.ul.x;
  temp.lr.y = (randFloatUnit() * (height_max - temp.ul.y)) + temp.ul.y;
  return temp;
}

void printRectangle(const rectangle_t &r){
  cout << "Upper Left:  (" << r.ul.x << "," << r.ul.y << ")" << endl; 
  cout << "Lower Left:  (" << r.ul.x << "," << r.lr.y << ")" << endl;
  cout << "Upper Right: (" << r.lr.x << "," << r.ul.y << ")" << endl;
  cout << "Lower Left:  (" << r.lr.x << "," << r.lr.y << ")" << endl;
  cout << "Area: " << getArea(r) << endl;
}


int main(){
  // Place the rectangles in a vector
  vector<rectangle_t> rectangles;
  
  // Create 10 random rectangles within a box.
  for(int i = 0; i < 10; i++){
    rectangles.push_back(randomRectangle(400,400));
  }
  
  // Print all out
  for(unsigned i = 0; i < rectangles.size(); i++){
    printRectangle(rectangles[i]);
  }
  
  return 0;
}
