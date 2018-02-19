// Name: Yilin Liu-Leitke
// Date: 2/19/2018
// Desc: Implementation of Address class
#include "Address.h"
#include <sstream>
#include <string>

using namespace std;

  Address::Address(){
    user = "";
    domain = "";
  }
  Address::Address(const string &user, const string &domain){
    this -> user = user;
    this -> domain = domain;
  }
  Address::~Address(){}
  
  void Address::setUser(const string &user){
    this -> user = user;
  }
  void Address::setDomain(const string &domain){
    this -> domain = domain;
  }
  string Address::print() const{
    stringstream s;
    s << user << "@" << domain;
    return s.str();
  }
