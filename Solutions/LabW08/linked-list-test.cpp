/* Name: Yilin Liu-Leitke
   Date: 3/3/2018
   Desc: Unit testing using gtest for LinkedList class
*/

#include "gtest/gtest.h"

#include "LinkedList.h"


TEST(getListAsString, Default){
  LinkedList a;
  EXPECT_EQ(a.getListAsString(), "");
}

TEST(appendNode, 1){
  LinkedList a;
  a.appendNode(1);
  EXPECT_EQ(a.getListAsString(), "1");
}

TEST(appendNode, 2){
  LinkedList a;
  a.appendNode(1);
  a.appendNode(2);
  EXPECT_EQ(a.getListAsString(), "1 2");
}

TEST(deleteNode, 1){
  LinkedList a;
  a.appendNode(1);
  a.deleteNode(1);
  EXPECT_EQ(a.getListAsString(), "");
}

TEST(deleteNode, 2){
  LinkedList a;
  a.appendNode(1);
  a.appendNode(2);
  a.appendNode(3);
  a.deleteNode(2);
  EXPECT_EQ(a.getListAsString(), "1 3");
}


TEST(deleteNode, 3){
  LinkedList a;
  a.appendNode(1);
  a.appendNode(3);
  a.deleteNode(2);
  EXPECT_EQ(a.getListAsString(), "1 3");
}


TEST(countNode, 1){
  LinkedList a;
  a.appendNode(1);
  EXPECT_EQ(a.countNode(), 1);
}

TEST(countNode, 2){
  LinkedList a;
  EXPECT_EQ(a.countNode(), 0);
}

TEST(countNode, 3){
  LinkedList a;
  a.appendNode(1);
  a.appendNode(3);
  EXPECT_EQ(a.countNode(), 2);
}

TEST(countNode, 4){
  LinkedList a;
  a.appendNode(1);
  a.deleteNode(1);
  EXPECT_EQ(a.countNode(), 0);
}

TEST(countainNode, 1){
  LinkedList a;
  a.appendNode(1);
  EXPECT_EQ(a.containNode(1), true);
}

TEST(countainNode, 2){
  LinkedList a;
  a.appendNode(1);
  EXPECT_EQ(a.containNode(2), false);
}

TEST(countainNode, 3){
  LinkedList a;
  a.appendNode(1);
  a.deleteNode(1);
  EXPECT_EQ(a.containNode(1), false);
}

TEST(countainNode, 4){
  LinkedList a;
  a.appendNode(1);
  a.appendNode(2);
  a.deleteNode(1);
  a.appendNode(3);
  EXPECT_EQ(a.containNode(3), true);
}



