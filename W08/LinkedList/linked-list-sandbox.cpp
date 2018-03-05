/* Name: Yilin Liu-Leitke
   Date: 3/5/2018
   Desc: A sandbox to test the LinkedList class
*/
#include"LinkedList.h"
#include <iostream>
using namespace std;

int main(){
    LinkedList list;
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(3);
    
    cout << "The linked list is:" << endl;
    cout << list.getListAsString() << endl;

}