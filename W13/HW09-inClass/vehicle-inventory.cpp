/*  Name: <fill me in>
    Date: <fill me in>
    Description: main class for vehicle program
*/
#include <iostream>
#include <vector>
#include <string>
#include "vehicle.h"

using namespace std;

int main(){
    vector<Vehicle*> vehicles;
    Bike *a = new Bike();
    // cout << a << endl;
    vehicles.push_back(a);
    cout<<vehicles[0]->print()<<endl;
    if (dynamic_cast<Bike*>(a) != NULL)
    {
        std::cout << "a is a Bike" << std::endl;
    }
    return 0;
}