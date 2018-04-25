#include<iostream>
#include<vector>
#include "animal.h"

using namespace std;

int main(){
    Animal zoo[4];
    
    zoo[0] = Animal("Bob");
    
    // bob.setName("Bob");
    zoo[0].setNumLegs(10);
    zoo[0].setNumEyes(5);
    zoo[0].setHasTeeth(1);
    zoo[0].print();
    
    zoo[1] = Monster("Mike");
    // mike.setName("Mike");
    zoo[1].setHasTeeth(false);
    zoo[1].setIsAggressive(false);
    zoo[1].setNumLegs(100);
    zoo[1].setNumEyes(200);
    zoo[1].print();
    
    zoo[2] = Monster();
    zoo[2].setName("Abby");
    zoo[2].print();
    
    zoo[3] = Rabbit("Brown", "Bunny");
    zoo[3].print();
    
    return 0;
}