#ifndef LINKEDLIST_H
#define LINKEDLIST_H
/* Name: <fill me in>
   Date: <fill me in>
   Desc: Definition of LinkedList class
*/
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;
template<class T>
struct Node{
    T value;
    Node *next;
};

template<class T>
class LinkedList{
  private:
    Node<T> *head;
    Node<T> *tail;
    
  public:
    // Constructor
    LinkedList();
    
    // Destructor
    ~LinkedList();
    
    // Operations
    void appendNode(T);
    void deleteNode(T);
    string getListAsString() const;
    
    // Lab W08
    int countNode();
    bool containNode(T);
};


// Constructor
template<class T>
LinkedList<T>::LinkedList(){
    head = NULL;
    tail = NULL;
}

// Destructor
template<class T>
LinkedList<T>::~LinkedList(){
    Node<T> *nodePtr;
    Node<T> *nextNode;
    
    nodePtr = head;
    while(nodePtr){
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

// Operations
template<class T>
void LinkedList<T>::appendNode(T n){
    Node<T> *newNode = new Node<T>;
    newNode->value = n;
    newNode->next = NULL;
    
    // if no node in the list
    if(!head){
        head = newNode;
        tail = newNode;
    } // else append the node at the end
    else{
        tail->next = newNode;
        tail = tail->next;
    }
}

template<class T>
void LinkedList<T>::deleteNode(T n){
    if(!head){
        throw logic_error("The list is empty!");
        return;
    }
    Node<T> *nodePtr;
    Node<T> *previousNode;
    // if delete the first node
    if(head->value == n){
        nodePtr = head->next;
        delete head;
        head = nodePtr;
        // if the deleted node is the last node as well
        if(!nodePtr){
            tail = nodePtr;
        }
    }
    else{
        nodePtr = head;
        while (nodePtr!=NULL && nodePtr->value != n){
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (nodePtr){
            previousNode->next = nodePtr->next;
            delete nodePtr; 
            // if the deleted node is the last node
            if(!previousNode->next){
                tail = previousNode;
            }
        }
        if (nodePtr == NULL){
            throw logic_error("No such node found!");
        }
        
    }
}

template<class T>
string LinkedList<T>::getListAsString() const{
    stringstream ss;
    Node<T> *nodePtr;
    nodePtr = head;
    while(nodePtr){
        ss << nodePtr -> value;
        if(nodePtr->next) ss << " ";
        nodePtr = nodePtr -> next;
    }
    return ss.str();
}


// Lab W08 functions
template<class T>
int LinkedList<T>::countNode(){
    Node<T> *nodePtr;
    nodePtr = head;
    int num = 0;
    while (nodePtr!=NULL){
        num++;
        nodePtr = nodePtr->next;
    }
    return num;
}

template<class T>
bool LinkedList<T>::containNode(T n){
    Node<T> *nodePtr;
    nodePtr = head;
    while (nodePtr!=NULL){
        if (nodePtr->value == n){
            return true;
        }
        nodePtr = nodePtr->next;
    }
    return false;
}



#endif