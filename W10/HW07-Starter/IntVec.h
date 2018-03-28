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
class IntVec{

public:
  
  /**
    * Default constructor initializes to an empty array
    */
  IntVec();
  
  
  /**
    * Copy constructor
    */
  IntVec(const IntVec& other);  
  
  /**
    * Assignment operator
    */
  IntVec& operator=(const IntVec& other);
 
  /**
    * Class destructor
    */
  ~IntVec();
  
  
  /**
    * Push the value on the end of the array.
    */
  void push_back(int value);
  
  /**
    * Returns the value at position loc in the array, or an exception if
    * it isn't a valid location.
    * Negateive locations are allowed, are are defined as from the end.
    * -1 is the last element, -2 second to last, etc...
    */
  int getAt(int loc) const;
  
  /**
    * Put val in loc position.  Throws an exception if loc isn't a valid
    * location.  Negatives allowed, see getAt.
    */
  void setAt(int val, int loc);

  /**
    * Return the number of elements stored in IntVec
    */
  unsigned int size() const;
  
  /**
    * Removes all values in the current IntVec
    */
  void clear();
  
  /**
    * Return the sum or the values in the IntVec
    */
  long sum() const;
  
  /**
    * Returns a string of this IntVec with the format:
    * [1, 2, 3, .. 4]  The last value should not have a trailing comma.
    */
  string getAsString() const;
  
  /**
    * Returns true if both IntVec(s) contain the same values, in the same
    * order, false otherwise.  False if their sizes differ.
    */
  bool operator==(const IntVec& rhs) const;
  
  private:

  int* head;
  unsigned int my_size;
  unsigned int my_capacity;  

  void preAllocate(unsigned int cap);  
};
  
#endif