#include <iostream>

using namespace std;
class ParkingLot{
  private:
    string name;
    int spots;
    float rate;
    int occupied;
  public:
    string getName(){
        return name;
    }
    //......
    void carEnter(){
        occupied += 1;
    }
    
};
int main(){
    ParkingLot economy;
    ParkingLot standard;
    ParkingLot premium;
    return 0;
}