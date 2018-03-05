/*  Name: Yilin Liu-Leitke
    Date: 2/27/2018
    Description: Topping class interface
*/
#ifndef TOPPING_H
#define TOPPING_H
#include <string>

using namespace std;

class Topping{
    private:
    string name;
    double price;
    bool vegetarian;
    
    public:
    Topping();
    Topping(string name, double price);
    Topping(string name, double price, bool vegetarian);
    Topping(const Topping &other);
    ~Topping();
    
    void operator=(const Topping &other);
    
    void setName(string name);
    void setPrice(double price);
    void setVegetarian(bool vegetarian);
    string getName();
    double getPrice();
    bool getVegetarian();
    string getString();
    string getReceipt();
    
};

#endif