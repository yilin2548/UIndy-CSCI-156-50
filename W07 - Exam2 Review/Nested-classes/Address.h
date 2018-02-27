#ifndef ADDRESS_H
#define ADDRESS_H
// Name: Yilin Liu-Leitke
// Date: 2/19/2018
// Desc: Header for Address class
#include <string>
using namespace std;

class Address{       //bob@uindy.edu
  private:
  string user;
  string domain;
  
  public:
  Address();
  Address(const string &user, const string &domain);
  ~Address();
  void setUser(const string &user);
  void setDomain(const string &domain);
  string print() const;
};

#endif