/* Name: Yilin Liu-Leitke
   Date: 3/5/2018
   Desc: Unit testing using gtest for LinkedList class
*/

#include "gtest/gtest.h"

#include "LinkedList.h"


TEST(getListAsString, Default){
  LinkedList a;
  EXPECT_EQ(a.getListAsString(), "");
}
