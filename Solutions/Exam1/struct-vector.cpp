/*  Name: Yilin Liu
    Date: 2/5
    /2018
    Desc: Demostration of using a struct to store information about a person.
          And the solution to exam 1.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

struct person_t {
  string name;
  int age;
  string gender;
  vector<string> fav_things;
};//remember the semicolon is mandatory

// Example for printing out single person
// input: person_t &ps (pass by reference): a single person
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

// Example for printing out vector of person
// input: vector<person_t> &pp (pass by reference): a vector of person 
void print(const vector<person_t> &pp){
    // size() is a function of vector, return value always >= 0
    // So we can use unsigned i to compare with size()
    for(unsigned i=0; i<pp.size(); i++){
        print(pp[i]);
    }
}


// Example for searching inside a vector of person

// input: vector<person_t> &pp (pass by reference): a vector of person 
void search(const vector<person_t> &pp){
    string name;
    cout << "Which name would you like to search?" << endl;
    cin >> name;
    for(unsigned i = 0; i< pp.size(); i++){
        if(pp[i].name == name){
            cout << "found person!" << endl;
            print(pp[i]);
        }
    }

}

void printWGender(const vector<person_t> &pp, string gender){
    cout << "The following person are " << gender << endl;
    for(unsigned i = 0; i < pp.size(); i++){
        if(pp[i].gender == gender){
            print(pp[i]);
        }
    }
}

// random person generator
person_t randomPerson(){
    person_t p;
    string n[] = {"Alex", "Jamie", "Jessie", "Chris"};
    string g[] = {"M", "F"};
    string f[] = {"C++", "Eating", "Sleeping", "Pizza", "Running"};
    p.name = n[rand() % 4];
    p.age = rand() % 100 + 1;
    p.gender = g[rand() % 2];
    for (int i = 0; i < (rand() % 5 + 1); i ++){
        p.fav_things.push_back(f[rand() % 5]);
    }
    return p;
}


int main(){
    srand(time(NULL));
    person_t bob;
    bob.name = "Bob";
    bob.age = 15;
    bob.gender = "M";
    vector<string> things;
    things.push_back("Apple");
    things.push_back("Video Games");
    bob.fav_things = things;
    
    // Create a vector called people, type of person_t
    vector<person_t> people;
    // Vector's push_back function will add the variable to the
    // end of the vector.
    // Add the variable bob to vector people.
    people.push_back(bob);  
    // Add the 5 variables returned by function randomPerson to vector people.
    people.push_back(randomPerson());  
    people.push_back(randomPerson());
    people.push_back(randomPerson());
    people.push_back(randomPerson());
    people.push_back(randomPerson());
    
    
    print(people);

    //search(people);
    string gender;
    cout << "Which gender would you like to search?" << endl;
    cin >> gender;
    printWGender(people, gender);
    return 0;
}
