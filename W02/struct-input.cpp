/*  Name: Yilin Liu
    Date: 1/24/2018
    Desc: Demostration of input information to a struct.
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

int main(){
    person_t p;
    cout << "Enter name: ";
    cin >> p.name;
    
    cout << "Enter age: ";
    cin >> p.age;
    
    cout << "Enter gender: ";
    cin >> p.gender;
    
    cout << "Enter # of fav_things: ";
    // number of fav_things
    int num;
    cin >> num;
    vector<string> things;
    // a temp string to store the thing
    string temp;
    for(int i = 0 ; i < num; i++){
        cout << "[" << i+1 << "]: ";
        cin >> temp;
        // push back temp into vector things
        things.push_back(temp);
    }
    p.fav_things = things;
    
    cout << "The person you typed in is: " << endl;
    print(p);
    return 0;
}
