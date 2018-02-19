// Name: Yilin Liu-Leitke
// Date: 2/19/2018
// Desc: Implementation of Email class
#include "Email.h"
#include <sstream>
#include <string>
#include <vector>

using namespace std;

Email::Email(){
  subject = "";
  message = "";
}

Email::~Email(){}

void Email::setSender(const Address &sender){
  this -> sender = sender;
}

void Email::addRecipient(const Address &recipient){
  this -> recipients.push_back(recipient);
}

void Email::setSubject(const string &subject){
  this -> subject = subject;
}

void Email::setMessage(const string &message){
  this -> message = message;
}

string Email::print(){
  stringstream s;
  s << "From: ";
  s << sender.print();
  s << endl;
  s << "To: ";
  for(unsigned i = 0; i < recipients.size(); i++){
    s << recipients[i].print();
    s << ", ";
  }
  s << endl;
  s << "Subject: " << subject << endl;
  s << "Message: " << message << endl << endl;
  return s.str();
}

