/* Name: Yilin Liu-Leitke
   Date: 2/28/2018
   Desc: sandbox to test the Pizza and Topping class
*/
#include <iostream>
#include <vector>
#include <sstream>
#include "Pizza.h"
#include "Topping.h"

using namespace std;

int main(){
  vector<Topping> toppings;
  toppings.push_back(Topping("pepperoni", 5.72));
  toppings.push_back(Topping("mushrooms", 3.24));
  toppings.push_back(Topping("olives", 2.92)); 
  
  // Testing code to speed development, 
  Pizza a(9, 9, "red");
  a.addTopping(toppings[0]);
  a.addTopping(toppings[2]);
  
  cout << a.getString() << endl;
  cout << a.getReceipt() << endl;
  
  // Add more testing lines here.
  
  return 0;
}
