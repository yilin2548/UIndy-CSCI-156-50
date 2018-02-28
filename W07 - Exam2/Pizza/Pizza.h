/*  Name: Yilin Liu-Leitke
    Date: 2/27/2018
    Description: Pizza class interface
*/
#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <vector>
#include "Topping.h"

using namespace std;

class Pizza{
    private:
    int size;
    int base_price;
    string sauce;
    vector<Topping> toppings;
    
    public:
    Pizza();
    Pizza(int size, int base_price, string sauce);
    Pizza(const Pizza &other);
    ~Pizza();
    
    void operator= (const Pizza &other);
    
    int getSize();
    int getBasePrice();
    string getSauce();
    void setSize(int size);
    void setBasePrice(int base_price);
    void setSauce(string sauce);
    
    void addTopping(Topping topping);
    string getString();
    string getReceipt();
};

#endif