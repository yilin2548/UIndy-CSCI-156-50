/*    @file MyComplex.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements a class for manipulating complex numbers.
*/

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include "MyComplex.h"

// A freebe
string MyComplex::getAsString() const{
  stringstream s;
  s << "(" << real << " + " << imaginary << "i)";
  return s.str();
}

// Fill this in with your MyComplex implementation!
