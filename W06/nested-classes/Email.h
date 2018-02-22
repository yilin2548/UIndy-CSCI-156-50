#ifndef EMAIL_H
#define EMAIL_H
// Name: Yilin Liu-Leitke
// Date: 2/19/2018
// Desc: Header for Email class

#include "Address.h"
#include <string>
#include <vector>

using namespace std;

class Email{
  private:
  Address sender;
  vector<Address> recipients;
  string subject;
  string message;
  
  public:
  Email();
  Email(const Email &other);
  ~Email();
  void operator=(const Email &other);
  void setSender(const Address &sender);
  void addRecipient(const Address &recipient);
  void setSubject(const string &subject);
  void setMessage(const string &message);
  string print();

};

#endif