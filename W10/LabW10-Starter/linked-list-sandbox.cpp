/* Name: <fill me in>
   Date: <fill me in>
   Desc: A sandbox to test the LinkedList class
*/
#include"LinkedList.h"
#include <iostream>
using namespace std;

int main(){
    LinkedList list;
    list.appendNode(1);

    cout << "The linked list is:" << endl;
    cout << list.getListAsString() << endl;  
    list.deleteNode(1);
    cout << "After delete node 1:" << endl;
    cout << list.getListAsString() << endl;
    
    list.appendNode(1);
    cout << "After append node 1:" << endl;
    cout << list.getListAsString() << endl;
    
    list.appendNode(2);
    list.appendNode(3);
    
    cout << "The linked list is:" << endl;
    cout << list.getListAsString() << endl;
    
    list.deleteNode(2);
    cout << "After delete node 2:" << endl;
    cout << list.getListAsString() << endl;
    cout << "Linked list contain 2: " << list.containNode(2) << endl; 
    cout << "There are " << list.countNode() << " nodes." << endl;
    
    list.deleteNode(2);
    cout << "After try delete node 2 again:" << endl;
    cout << list.getListAsString() << endl;
    cout << "There are " << list.countNode() << " nodes." << endl;
    
    list.appendNode(2);
    cout << "After append node 2:" << endl;
    cout << list.getListAsString() << endl;
    
    list.deleteNode(1);
    cout << "After delete node 1:" << endl;
    cout << list.getListAsString() << endl;
    cout << "Linked list contain 1: " << list.containNode(1) << endl; 
    cout << "There are " << list.countNode() << " nodes." << endl;
    
    list.appendNode(1);
    cout << "After append node 1:" << endl;
    cout << list.getListAsString() << endl;
    cout << "Linked list contain 1: " << list.containNode(1) << endl; 
    cout << "There are " << list.countNode() << " nodes." << endl;

}