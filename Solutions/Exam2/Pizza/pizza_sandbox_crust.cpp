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
  toppings.push_back(Topping("carrots", 2, true));
  toppings.push_back(Topping("onions", 3, true));
  
  // Testing code to speed development, 
  Pizza a(9, 9, "red");
  a.addTopping(toppings[0]);
  a.addTopping(toppings[2]);
  
  cout << a.getString() << endl;
  cout << a.getReceipt() << endl;
  
  // Add more testing lines here.
  a.addTopping(toppings[3]);
  a.addTopping(toppings[4]);
//   cout << a.getString() << endl;
//   cout << a.getReceipt() << endl;
  cout << toppings[3].getName() << endl;
  cout << toppings[4].getName() << endl;
  
  Topping t1("carrots", 2, true);
  Topping t2("onions", 2, true);
  cout << t1.getName() << endl;
  cout << t2.getName() << endl;
  return 0;
}
