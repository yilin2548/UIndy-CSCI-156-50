/*  Name: Yilin Liu
    Date: 1/24/2018
    Desc: Demostration of using a struct to store information about a person.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct person_t {
  string name;
  int age;
  string gender;
  vector<string> fav_things;
}; //remember the semicolon is mandatory

// Example for printing out single person
// input: person_t &ps (pass by reference)
void print(const person_t &ps){
    cout<<"Name: "<<ps.name<<endl;
    cout<<"Age: "<<ps.age<<endl;
    cout<<"Gender: "<<ps.gender<<endl;
    for(unsigned i = 0; i < ps.fav_things.size(); i++){
        cout << ps.fav_things[i];
        if (i < ps.fav_things.size() - 1){
            cout << ", ";
        }
    }   
    cout << endl;
}

// Example for seaching a person by name
// intput: string searchName: name to search
//         person_t *pp: array of person, pp[size]
//         int size: size of the array pp
// return type: person_t
person_t search(string searchName, const person_t *pp, int size){
    for(int i = 0; i< size; i++){
        if(pp[i].name == searchName){
            cout << "found person!" << endl;
            return pp[i];
        }
    }    
}

int main(){
    person_t bob;
    bob.name = "Bob";
    bob.age = 15;
    bob.gender = "M";
    vector<string> things;
    things.push_back("Apple");
    things.push_back("Video Games");
    things.push_back("Computer");
    bob.fav_things = things;
    
    
    person_t people[10];
    people[0] = bob;
    people[1].name = "Mary";
    people[1].age = 20;
    people[1].gender = "F";
    vector<string> temp;
    temp.push_back("Peach");
    temp.push_back("Selfie");
    people[1].fav_things = temp;

    person_t foundPerson;
    foundPerson = search("Bob", people, 10);
    print(foundPerson);
    return 0;
}
