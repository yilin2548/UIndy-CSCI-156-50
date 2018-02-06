#include <iostream>

using namespace std;

class House {
  private:
    float height;
    float width;
    float depth;
    
   public:
    void setHeight(float h){
        height = h;
    }
    void setWidth(float w){
        width = w;
    }
    void setDepth(float d){
        depth = d;
    }
    float getHeight(){
        return height;
    }
    float getDepth(){
        return depth;
    }
    float getWidth(){
        return width;
    }
    float getSquareFootage(){
        return width * depth;
    }
};


int main(){
    House a;
    a.setHeight(10);
    a.setWidth(10);
    a.setDepth(10);
    cout << a.getHeight() << endl;
    cout << a.getSquareFootage() << endl;
    
    House b = a;
    b.setWidth(45);
    cout << b.getSquareFootage() << endl;
    
    House c;
    cout << c.getHeight() << endl;
    cout << c.getWidth() << endl;
    cout << c.getDepth() << endl;
    return 0;
}