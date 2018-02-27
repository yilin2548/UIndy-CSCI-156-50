/*  Name: Yilin Liu-Leitke
    Date: 02/27/2018
    Description: Pizza class implementation
    
*/
#include <string>
#include <sstream>
#include <vector>
#include "Pizza.h"

using namespace std;

Pizza::Pizza(){
    size = 0;
    base_price = 0;
    sauce = "";
}

Pizza::Pizza(int size, int base_price, string sauce){
    this->size = size;
    this->base_price = base_price;
    this->sauce = sauce;
}

Pizza::Pizza(const Pizza &other){
    size = other.size;
    base_price = other.base_price;
    sauce = other.sauce;
    toppings = other.toppings;
}

Pizza::~Pizza(){}

void Pizza::operator= (const Pizza &other){
    size = other.size;
    base_price = other.base_price;
    sauce = other.sauce;
    toppings = other.toppings;
}

int Pizza::getSize(){
    return size;
}

int Pizza::getBasePrice(){
    return base_price;
}

string Pizza::getSauce(){
    return sauce;
}

void Pizza::setSize(int size){
    this->size = size;
}

void Pizza::setBasePrice(int base_price){
    this->base_price = base_price;
}

void Pizza::setSauce(string sauce){
    this->sauce = sauce;
}

void Pizza::addTopping(Topping topping){
    toppings.push_back(topping);
}

string Pizza::getString(){
    stringstream ss;
    double total_price = base_price;
    ss << size << "\" pizza with " << sauce << " sauce, topped with: ";
    for (unsigned int i = 0; i < toppings.size(); i++){
        if (i != 0){
            ss << ", ";
        }
        total_price += toppings[i].getPrice();
        ss << toppings[i].getString();
    }
    ss << " $" << total_price;
    return ss.str();
}

string Pizza::getReceipt(){
    stringstream ss;
    ss << "Thank you for your order, here is your receipt:" << endl;
    double total_price = base_price;
    ss << size << "\" pizza with " << sauce << ": $" << base_price << endl;
    for (unsigned int i = 0; i < toppings.size(); i++){
        total_price += toppings[i].getPrice();
        ss << toppings[i].getReceipt() << endl;
    }
    ss << "Total Price: $" << total_price << endl;
    return ss.str();
}