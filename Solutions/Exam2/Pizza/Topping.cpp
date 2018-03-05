/*  Name: Yilin Liu-Leitke
    Date: 2/27/2018
    Description: Toppings class implementation
*/
#include "Topping.h"
#include <string>
#include <sstream>

using namespace std;

Topping::Topping(){
    name = "";
    price = 0.0;
}

Topping::Topping(string name, double price){
    this->name = name;
    this->price = price;
    this->vegetarian = false;   // 5 pts
}

Topping::Topping(string name, double price, bool vegetarian){  // 5 pts
    this->name = name;
    this->price = price;
    this->vegetarian = vegetarian;
}

Topping::Topping(const Topping &other){
    name = other.name;
    price = other.price;
    vegetarian = other.vegetarian;
}

Topping::~Topping(){}

void Topping::operator=(const Topping &other){
    name = other.name;
    price = other.price;
}

void Topping::setName(string name){
    this->name = name;
}

void Topping::setPrice(double price){
    this->price = price;
}
void Topping::setVegetarian(bool vegetarian){ // setter & getter 5 pts
    this->vegetarian = vegetarian;
}


string Topping::getName(){  // 5 pts
    stringstream ss;
    ss << name;
    if(vegetarian){
        ss << " VEGETARIAN";
    }
    return ss.str();
}

double Topping::getPrice(){
    return price;
}
bool Topping::getVegetarian(){
    return vegetarian;
}

string Topping::getString(){
    stringstream ss;
    ss << name;
    return ss.str();
}

string Topping::getReceipt(){
    stringstream ss;
    ss << "  " << name << ": $" << price;
    return ss.str();
}