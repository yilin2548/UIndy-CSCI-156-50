/*  Name: Yilin Liu
    Date: 1/22/2018
    Desc: Demostration of using a struct to store information about a person.
*/

#include <iostream>
#include <string>

using namespace std;

struct person_t {
  string name;
  int age;
  string gender;
};

void printPerson(person_t ps){
    cout<<"Name: "<<ps.name<<endl;
    cout<<"Age: "<<ps.age<<endl;
    cout<<"Gender: "<<ps.gender<<endl;
}

int main(){
    person_t bob;
    bob.name = "Bob";
    bob.age = 15;
    bob.gender = "M";
    
    printPerson(bob);
    
    person_t mary = {"Mary", 20, "F"};
    
    printPerson(mary);
    return 0;
}
