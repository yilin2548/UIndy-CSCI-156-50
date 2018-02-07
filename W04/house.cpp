#include <iostream>

using namespace std;

class House {
  private:
    float height;
    float width;
    float depth;
    
   public:
    void setHeight(float h){ //Setter
        if(h < 0){
            cout << "Height cannot be negative" << endl;
        }
        else {
            height = h;
        }
    }
    void setWidth(float w){
        width = w;
    }
    void setDepth(float d){
        depth = d;
    }
    float getHeight(){  // Getter
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
    
    bool sameFootage(House other){
        // if(width * depth == other.width * other.depth){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return getSquareFootage() == other.getSquareFootage();
    }
};


int main(){
    House a;
    a.setHeight(-10);
    a.setWidth(10);
    a.setDepth(10);
    cout << a.getHeight() << endl;
    cout << a.getSquareFootage() << endl;
    
    House b = a;
    //b.setWidth(45);
    b.setWidth(1);
    b.setDepth(100);
    cout << b.getSquareFootage() << endl;
    
    cout << b.sameFootage(a) << endl;
    return 0;
}