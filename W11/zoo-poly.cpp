#include<iostream>
#include<vector>
#include "animal.h"

using namespace std;

int main(){
    vector<Animal*> zoo;
    
    zoo.push_back(new Animal("Bob"));
    
    // bob.setName("Bob");
    //bob.setNumLegs(10);
    zoo[0]->setNumEyes(5);
    zoo[0]->setHasTeeth(1);
    zoo[0]->print();
    
    
    zoo.push_back(new Monster("Mike"));
    // mike.setName("Mike");
    zoo[1]->setHasTeeth(false);
    zoo[1]->setIsAggressive(false);
    // zoo[1]->setNumLegs(100);
    zoo[1]->setNumEyes(200);
    zoo[1]->print();
    
    zoo.push_back(new Monster());
    zoo[2]->setName("Abby");
    zoo[2]->print();
    
    zoo.push_back(new Rabbit("Brown", "Bunny"));
    zoo[3]->print();
    
    zoo.push_back(new Rabbit());
    zoo[4]->setEyeColor("Green");
    zoo[4]->print();
    
    return 0;
}