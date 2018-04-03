/*    @file IntVec.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements vector-like container for integers.
*/

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include "IntVec.h"

const int MAX_LENGTH = 100;


IntVec::IntVec(){
  head = new int[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
}


IntVec::IntVec(const IntVec& other){
  head = new int[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
  for(unsigned int i = 0; i < other.my_size; i++){
    push_back(other.head[i]);
  }
}

IntVec& IntVec::operator=(const IntVec& other){
  if( this == &other){
    return *this;
  }
  delete[] head;
  head = NULL;
  head = new int[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
  
  for(unsigned int i = 0; i < other.my_size; i++){
    push_back(other.head[i]);
  }
  return *this;
}

IntVec::~IntVec(){
  delete[] head;
  head = NULL;
}

unsigned int IntVec::size() const{
  return my_size;
}

void IntVec::push_back(int val){
  // Do we have space?
  if( my_capacity > my_size){
    head[my_size] = val;
    my_size++;
    return;
  }
  throw logic_error("Out of space");
}

string IntVec::getAsString() const{
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

void IntVec::clear(){
  delete[] head;
  head = new int[MAX_LENGTH];
  my_size = 0;
  my_capacity = MAX_LENGTH;
}

long IntVec::sum() const{
  long ret = 0;
  for(unsigned int i = 0; i < my_size; i++){
    ret = ret + head[i];
  }
  return ret;  
}

int IntVec::getAt(int loc) const{
  if(loc < 0){
    loc = (int)my_size + loc;  // Adding a negative
  }
  if(loc >= (int)my_size || loc < 0){
    throw logic_error("Location not valid");
  }
  return head[loc];
}

void IntVec::setAt(int val, int loc){
  if(loc < 0){
    loc = (int)my_size + loc;  // Adding a negative
  }
  if(loc >= (int)my_size || loc < 0){
    throw logic_error("Location not valid");
  }
  head[loc] = val;
}

bool IntVec::operator==(const IntVec& rhs) const{
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

/***********************************************/


