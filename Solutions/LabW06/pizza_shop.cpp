/*  Name: Yilin Liu-Leitke
    Date: 2/27/2018
    Descrip
    tion:Pizza shop main file
*/
#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
#include "Topping.h"

using namespace std;

int getChoice(){
    int choice;
    cin >> choice;
    return choice;
}

int main(){
    vector<string> sauces;
    vector<int> sizes;
    vector<Topping> toppings;
    Pizza my_pizza;
    int choice;
    
    sauces.push_back("red");
    sauces.push_back("white");
    
    sizes.push_back(5);
    sizes.push_back(8);
    sizes.push_back(12);
    
    toppings.push_back(Topping("Pepperoni", 1.25));
    toppings.push_back(Topping("Mushrooms", 2.15));
    toppings.push_back(Topping("Olives", 0.75));
    toppings.push_back(Topping("Pineapple", 2.55));
    
    cout << "Welcome to the Pizza Shop!" <<endl << endl;
    cout << "This program will let you customize a pizza" << endl;
    cout << "and find the price." << endl << endl;
    // Get the size, and set the size and price
    while(true){
        cout << "What size would you like?" << endl;
        for (unsigned int i = 0; i < sizes.size(); i++){
            cout << i << ": " << sizes[i] << endl;
        }
        choice = getChoice();
        if (choice >= 0 && choice < (int)sizes.size()){
            my_pizza.setSize(sizes[choice]);
            my_pizza.setBasePrice((double)sizes[choice]);
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }
    // Get the sauce type
    while(true){
        cout << "What sauce would you like?" << endl;
        for (unsigned int i = 0; i < sauces.size(); i++){
            cout << i << ": " << sauces[i] << endl;
        }
        choice = getChoice();
        if (choice >= 0 && choice < (int)sauces.size()){
            my_pizza.setSauce(sauces[choice]);
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }
    while(true){
        cout << "Current pizza: " << my_pizza.getString() << endl;
        cout << "What topping(s) would you like, or -1 to finish" << endl;
        for (unsigned int i = 0; i < toppings.size(); i++){
            cout << i << ": " << toppings[i].getName() << endl;
        }
        choice = getChoice();
        if (choice >= 0 && choice < (int)toppings.size()){
            my_pizza.addTopping(toppings[choice]);
        } else if (choice == -1) {
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }
    cout << my_pizza.getReceipt() << endl;
}