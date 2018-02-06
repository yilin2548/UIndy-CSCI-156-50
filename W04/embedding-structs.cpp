/* Name: Yilin Liu
   Date: 2/5/18
   Desc: Demonstration of putting one struct inside another.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct address_t{       //bob@uindy.edu
    string user;
    string domain;
};

struct email_t{
    address_t sender;
    vector<address_t> recipients;
    string subject;
    string message;
};

void print(const address_t &a){
    cout << a.user << "@" << a.domain;
}

void print(const email_t &e){
    cout << "From: ";
    print(e.sender);
    cout << endl;
    cout << "To:";
    for(unsigned i = 0; i < e.recipients.size(); i++){
        print(e.recipients[i]);
        cout << ", ";
    }
    cout << endl;
    
    cout << "Subject: " << e.subject << endl;
    cout << "Message: " << e.message << endl << endl;
}


int main(){
    email_t a;
    // address_t b;
    // b.user = "bob";
    // b.domain = "uindy.edu";
    // a.sender = b;
    a.sender.user = "bob";
    a.sender.domain = "uindy.edu";
    // address_t b = {"bill", "uindy.edu"}
    a.recipients.push_back((address_t){"bill", "uindy.edu"});
    a.recipients.push_back((address_t){"kevin", "uindy.edu"});
    a.subject = "Embedding a structure";
    a.message = "Teach me how.";
    
    print(a);
    return 0;

}
