/* Name: Yilin Liu-Leitke
   Date: 3/3/2018
   Desc: Implementation of LinkedList class
*/
#include <sstream>
#include"LinkedList.h"
using namespace std;


// Constructor
LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
}

// Destructor
LinkedList::~LinkedList(){
    Node *nodePtr;
    Node *nextNode;
    
    nodePtr = head;
    while(nodePtr){
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

// Operations
void LinkedList::appendNode(int n){
    Node *newNode = new Node;
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

void LinkedList::deleteNode(int n){
    if(!head){
        return;
    }
    Node *nodePtr;
    Node *previousNode;
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
    }
}

string LinkedList::getListAsString() const{
    stringstream ss;
    Node *nodePtr;
    nodePtr = head;
    while(nodePtr){
        ss << nodePtr -> value;
        if(nodePtr->next) ss << " ";
        nodePtr = nodePtr -> next;
    }
    return ss.str();
}


// Lab W08 functions

int LinkedList::countNode(){
    Node *nodePtr;
    nodePtr = head;
    int num = 0;
    while (nodePtr!=NULL){
        num++;
        nodePtr = nodePtr->next;
    }
    return num;
}
bool LinkedList::containNode(int n){
    Node *nodePtr;
    nodePtr = head;
    while (nodePtr!=NULL){
        if (nodePtr->value == n){
            return true;
        }
        nodePtr = nodePtr->next;
    }
    return false;
}

