#ifndef LINKEDLIST_H
#define LINKEDLIST_H
/* Name: Yilin Liu-Leitke
   Date: 3/5/2018
   Desc: Definition of LinkedList class
*/

#include <string>

using namespace std;

struct Node{
    int value;
    Node *next;
};

class LinkedList{
  private:
    Node *head;
    Node *tail;
    
  public:
    // Constructor
    LinkedList();
    
    // Destructor
    ~LinkedList();
    
    // Operations
    void appendNode(int);
    void deleteNode(int);
    string getListAsString() const;
    
};
#endif