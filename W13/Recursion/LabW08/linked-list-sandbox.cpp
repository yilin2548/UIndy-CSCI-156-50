/* Name: Yilin Liu-Leitke
   Date: 3/3/2018
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
    
    Node* head = list.getHead();
    cout << list.countNode() << endl;
    cout << list.countNodeRec(head) << endl;
    
    cout << list.containNodeRec(head,2) << endl;
    cout << list.containNodeRec(head,4) << endl;
}