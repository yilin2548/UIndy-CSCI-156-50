#include<iostream>
#include "animal.h"

using namespace std;

int main(){
    Animal bob("Bob");
    // bob.setName("Bob");
    //bob.setNumLegs(10);
    bob.setNumEyes(5);
    bob.setHasTeeth(1);
    bob.print();
    
    Monster mike("Mike");
    // mike.setName("Mike");
    mike.setHasTeeth(false);
    // mike.setIsAggressive(false);
    mike.setNumLegs(100);
    mike.setNumEyes(200);
    mike.print();
    
    Monster abby;
    abby.setName("Abby");
    abby.print();
    
    Rabbit bunny("Brown", "Bunny");
    bunny.print();
    
    return 0;
}