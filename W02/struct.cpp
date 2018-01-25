/*  Name: Yilin Liu
    Date: 1/24/2018
    Desc: Demostration of using a struct to store information about a person.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struct (Type) name: person_t
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

/*
// Example for seaching a person by name and return a person variable
// intput: string searchName: name to search
//         person_t *pp: array of person, pp[size]
//         int size: size of the array pp
// return type: person_t
person_t searchPerson(string searchName, const person_t *pp, int size){
    for(int i = 0; i< size; i++){
        if(pp[i].name == searchName){
            cout << "found person!" << endl;
            return pp[i];
        }
    }    
    // However, if a person cannot be found after for loop, 
    // no return variable is provided.
    // If you complile with g++ -Wall there will be a warning
}
*/

// Alternatively, a better way to do search is a void function print out the person info
void search(const person_t *pp, int size){
    string name;
    cout << "Which name would you like to search?" << endl;
    cin >> name;
    for(int i = 0; i< size; i++){
        if(pp[i].name == name){
            cout << "found person!" << endl;
            print(pp[i]);
        }
    }

}

int main(){
    // Create a variable called bob, with the type of person_t
    person_t bob;
    bob.name = "Bob";
    bob.age = 15;
    bob.gender = "M";
    vector<string> things;
    things.push_back("Apple");
    things.push_back("Video Games");
    things.push_back("Computer");
    bob.fav_things = things;
    
    // Create an array called people, size of 10, tyep of person_t
    person_t people[10];
    people[0] = bob;
    people[1].name = "Mary";
    people[1].age = 20;
    people[1].gender = "F";
    vector<string> temp;
    temp.push_back("Peach");
    temp.push_back("Selfie");
    people[1].fav_things = temp;
    
    /*
    person_t foundPerson;
    foundPerson = searchPerson("Bob", people, 10);
    print(foundPerson);
    */
    
    search(people, 10);
    
    return 0;
}
