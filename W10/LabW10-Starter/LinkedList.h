#ifndef LINKEDLIST_H
#define LINKEDLIST_H
/* Name: <fill me in>
   Date: <fill me in>
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
    
    // Lab W08
    int countNode();
    bool containNode(int);
};
#endif