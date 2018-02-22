// Name: Yilin Liu-Leitke
// Date: 2/19/2018
// Desc: Implementation of Email class
#include "Email.h"
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Default constructor
Email::Email(){
  subject = "";
  message = "";
}

// Copy constructor
Email::Email(const Email &other){
  sender = other.sender;
  subject = other.subject;
  message = other.message;
  //option 1:
  //recipients = other.recipients;
  
  //option 2:
  for (unsigned int i = 0; i < other.recipients.size(); i++){
      recipients.push_back(other.recipients[i]);
  }
}

// Assignment operator=
void Email::operator=(const Email &other){
  sender = other.sender;
  subject = other.subject;
  message = other.message;
  //option 1:
  //recipients = other.recipients;
  
  //option 2:
  recipients.clear();
  for (unsigned int i = 0; i < other.recipients.size(); i++){
      recipients.push_back(other.recipients[i]);
  }
}



// Destructor
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

