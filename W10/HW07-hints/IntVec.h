#ifndef INTVEC_H
#define INTVEC_H  

/**   @file IntVec.h    
      @author Paul Talaga    
      @date March 27, 2017     
      @version 0.02   
      
      This IntVec class implements a vector-like class that stores integers.
      It also can return statistics about the data and return new IntVec's 
      based on arithmetic operations on them.
      
      This class may not use vector!
      */

#include <string>


using namespace std;

/**
  * Storage class able to dynamically store integer arrays
*/
template<class T>
class IntVec{

public:

  IntVec();
  IntVec(const IntVec<T>& other);  
  IntVec& operator=(const IntVec& other);
  ~IntVec();
  void push_back(T value);
  T getAt(int loc) const;
  void setAt(T val, int loc);
  unsigned int size() const;
  void clear();
  T sum() const;
  string getAsString() const;
  bool operator==(const IntVec& rhs) const;
  
  private:
  T* head;
  unsigned int my_size;
  unsigned int my_capacity;  

  void preAllocate(unsigned int cap);  
};


template<class T>
IntVec<T>::IntVec(){
  head = new T[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
}

template<class T>
IntVec<T>::IntVec(const IntVec<T>& other){
  head = new T[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
  for(unsigned int i = 0; i < other.my_size; i++){
    push_back(other.head[i]);
  }
}

template<class T>
IntVec<T>& IntVec<T>::operator=(const IntVec<T>& other){
  if( this == &other){
    return *this;
  }
  delete[] head;
  head = NULL;
  head = new T[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
  
  for(unsigned int i = 0; i < other.my_size; i++){
    push_back(other.head[i]);
  }
  return *this;
}

template<class T>
IntVec<T>::~IntVec(){
  delete[] head;
  head = NULL;
}

template<class T>
unsigned int IntVec<T>::size() const{
  return my_size;
}

template<class T>
void IntVec<T>::push_back(int val){
  // Do we have space?
  if( my_capacity > my_size){
    head[my_size] = val;
    my_size++;
    return;
  }
  throw logic_error("Out of space");
}

template<class T>
string IntVec<T>::getAsString() const{
  if(my_size == 0){
    return "[]";
  }
  string ret = "[";
  for(unsigned int i = 0; i < my_size-1; i++){
    // Use a stringstream to convert int to string
    stringstream out;
    out << head[i];
    ret = ret + out.str() + ", ";
  }
  // tack on the end without a comma
  stringstream out;
  out << head[my_size - 1]; // my_size shouldn't be 0 because we checked
  ret = ret + out.str();

  ret = ret + "]";
  return ret;  
}

template<class T>
void IntVec<T>::clear(){
  delete[] head;
  head = new int[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
}

template<class T>
T IntVec<T>::sum() const{
  T ret = 0;
  for(unsigned int i = 0; i < my_size; i++){
    ret = ret + head[i];
  }
  return ret;  
}

template<class T>
T IntVec<T>::getAt(int loc) const{
  if(loc < 0){
    loc = (int)my_size + loc;  // Adding a negative
  }
  if(loc >= (int)my_size || loc < 0){
    throw logic_error("Location not valid");
  }
  return head[loc];
}

template<class T>
void IntVec<T>::setAt(T val, int loc){
  if(loc < 0){
    loc = (int)my_size + loc;  // Adding a negative
  }
  if(loc >= (int)my_size || loc < 0){
    throw logic_error("Location not valid");
  }
  head[loc] = val;
}

template<class T>
bool IntVec<T>::operator==(const IntVec<T>& rhs) const{
  if(my_size != rhs.my_size){
    return false;
  }
  for(unsigned int i = 0; i < my_size; i++){
    if(head[i] != rhs.head[i]){
      return false;
    }
  }
  return true;
}

  
#endif