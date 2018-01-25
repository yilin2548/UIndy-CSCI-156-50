/*  Name: Yilin Liu
    Date: 1/24/2018
    Desc: Demostration of using a pointer to struct
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
    for(unsigned i=0; i<pp.size(); i++){
        print(pp[i]);
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
    
    vector<person_t> people;
    people.push_back(bob);
    // people.push_back(randomPerson());
    // people.push_back(randomPerson());
    // people.push_back(randomPerson());
    // people.push_back(randomPerson());
    // people.push_back(randomPerson());
    
    // define a pointer ps pointed to a new person
    // When access to a pointer to a struct use ->
    person_t *ps = new person_t;
    *ps = randomPerson();
    cout << "Randomly generated person: " << endl;
    print(*ps);
    
    ps->name = "Mary";
    ps->age = 20;
    ps->gender = "F";
    cout << "Changed to Mary: " << endl;
    print(*ps);
    
    // remember to delete dynamic memory
    delete ps;
    ps = NULL;

    return 0;
}
