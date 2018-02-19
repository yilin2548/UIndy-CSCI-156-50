/* Name: Yilin Liu-Leitke
   Date: 2/17/2018
   Desc: Demonstration of putting one class inside another.
*/
#include <iostream>
#include <string>

#include "Address.h"
#include "Email.h"

using namespace std;

int main(){
  Email a;
  a.setSender(Address("bob", "uindy.edu"));
  a.addRecipient(Address("bill","uindy.edu"));
  a.addRecipient(Address("kevin","uindy.edu"));
  a.setSubject("Classes");
  a.setMessage("Teach me what you know!");
  cout << a.print();
  
  return 0;

}
