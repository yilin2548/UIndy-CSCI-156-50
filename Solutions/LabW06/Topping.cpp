/*  Name: Yilin Liu-Leitke
    Date: 02/27/2018
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
}

Topping::Topping(const Topping &other){
    name = other.name;
    price = other.price;
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

string Topping::getName(){
    return name;
}

double Topping::getPrice(){
    return price;
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