#ifndef ANIMAL_H
#define ANIMAL_H

// Name: Yilin Liu-Leitke
// Date: 4/2/2018
// Desc: Definition of Base class Animal and derived class Monster

#include<iostream>

using namespace std;

class Animal {
  private:
    int numLegs;
    int numEyes;
    string name;
    bool hasTeeth;
    
  public:
    Animal(){
        cout << "Base class constructor called" << endl;
        name = "Josh";
        numLegs = 2;
        numEyes = 2;
        hasTeeth = true;
    }
    
    Animal(string n){
        cout << "Base class name constructor called" << endl;
        name = n;
        numLegs = 2;
        numEyes = 2;
        hasTeeth = true;
    }
    
  protected:
    void setNumLegs(int l){
        numLegs = l;
    }
 
  public:
    int getNumLegs(){
        return numLegs;
    }
    void setNumEyes(int e){
        numEyes = e;
    }
    int getNumEyes(){
        return numEyes;
    }
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
    void setHasTeeth(bool t){
        hasTeeth = t;
    }
    bool getHasTeeth(){
        return hasTeeth;
    }
    
    virtual void print(){
        cout << "Base class print called" << endl;
        cout << "Name: " << name << endl;
        cout << "No. of Legs: " << numLegs << endl;
        cout << "No. of Eyes: " << numEyes << endl;
        cout << "Has teeth?: " << hasTeeth << endl;
    }
    
    virtual void setIsAggressive(bool a){
        cout << "Base class setIsAggressive called" << endl;
    }
    
    virtual void setEyeColor(string c){
        cout << "Base class setEyeColor called" << endl;
    }
};


class Monster : public Animal {
  public:
    bool isAggressive;
    
    Monster(){
        cout << "Monster default constructor called" << endl;
        setNumLegs(100);
        isAggressive = false;
    }
    
    Monster(string n) : Animal(n){
        cout << "Monster name constructor called" << endl;
        isAggressive = false;
    }
    
    void setIsAggressive(bool a){
        isAggressive = a;
    }
    
    bool getIsAggressive(){
        return isAggressive;
    }
    
    void setNumLegs(int l){
        if(l < 100){  // Monster must have at least 100 legs
            l = 100;
        }
        Animal::setNumLegs(l);
    }
    
    void print(){
        Animal::print();
        cout << "Is aggressive?: " << isAggressive << endl;
        cout << endl;
    }
    
};


class Rabbit : public Animal{
  private:
    string eyeColor;
  
  public:
    Rabbit(){
        cout << "Rabbit default constructor called" << endl;
        eyeColor = "Red";
    }
    
    Rabbit(string c, string n) : Animal(n){
        cout << "Rabbit override constructor called" << endl;
        eyeColor = c;
    }
  
    void setEyeColor(string c){
        eyeColor = c;
    }
    
    string getEyeColor(){
        return eyeColor;
    }
    
     void print(){
        Animal::print();
        cout << "Eye color: " << eyeColor << endl;
        cout << endl;
    }
};


#endif