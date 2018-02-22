#include <iostream>
#include <vector>
#include "Point-heap.h"

using namespace std;

int main(){
    vector<Point*> points;
    points.push_back(new Point());
    points.push_back(new Point(1, 2));
    points.push_back(new Point(1, 2));
    points.push_back(new Point(1, 2));
    
    for(unsigned i=0; i < points.size(); i++){
        cout << points[i] -> print() << endl;
    }
    
    for(unsigned i=0; i < points.size(); i++){
        delete points[i];
    }
}