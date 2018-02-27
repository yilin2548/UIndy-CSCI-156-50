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
  
  Email b(a); // call copy constructor
  cout << b.print();
 
  Email c;
  c.setSender(Address("alice", "uindy.edu"));
  c.addRecipient(Address("abby1","uindy.edu"));
  c.addRecipient(Address("abby2","uindy.edu"));
  c.addRecipient(Address("abby3","uindy.edu"));
  c.addRecipient(Address("abby4","uindy.edu"));
  c.addRecipient(Address("abby5","uindy.edu"));
  c.setSubject("Spam");
  c.setMessage("This email only has five recipients.");
  c = a; // call assignment operator
  cout << c.print();
  
  return 0;

}
