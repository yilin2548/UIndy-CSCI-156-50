#ifndef LINKEDLIST_H
#define LINKEDLIST_H
/* Name: Yilin Liu-Leitke
   Date: 3/3/2018
   Desc: Definition of LinkedList class
*/
// You don't have to change this file
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
    
    // Lab W08
    int countNode();
    bool containNode(int);
    
    Node* getHead();
    int countNodeRec(Node* cur);
    bool containNodeRec(Node* cur, int n);
};
#endif