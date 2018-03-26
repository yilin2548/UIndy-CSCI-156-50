// Name: Yilin Liu-Leitke
// Date: 3/26/2018
// Desc: demo for template function and template class

#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

template<class T>
T square(T number){
    return number * number;
}

template <class T1, class T2>
bool sameSize(T1 n1, T2 n2){
    return sizeof(n1) == sizeof(n2);
}

template <class BOB>
class Shuffle10{
  public:
    BOB data[10];
    
    string print(){
        bool taken[10];
        for(int i=0; i<10; i++){
            taken[i] = 0;
        }
        stringstream s;
        for(int i = 0; i < 10; i++){
            int rand_loc = rand() % 10;
            while(taken[rand_loc]){
                rand_loc = rand() % 10;
            }
            s << data[rand_loc] << " ";
            taken[rand_loc] = 1;
        }
        return s.str();
    }
};


int main(){
    srand(time(0));
    cout << square(2) << endl;  //works for integer
    cout << square(2.2) << endl; // double
    cout << square('!') << endl; // char
    cout << square(true) << endl; // bool
    // cout << square("Bob") << endl; // but not work for string
    
    // cout << sizeof(int) << endl;
    // cout << sizeof(double) << endl;
    // cout << sizeof(char) << endl;
    // cout << sizeof(bool) << endl;
    cout << sameSize(2, 3) << endl;
    cout << sameSize(2, '2') << endl;
    cout << sameSize('2', true) << endl;
    
    cout << "Shuffle a: " << endl;
    Shuffle10<int> a;
    for(int i=0; i < 10; i++){
        a.data[i] = i;
    }
    cout << a.print() << endl;
    
    cout << "Shuffle b:" << endl;
    Shuffle10<char> b;
    for(int i = 0; i < 10; i++){
        b.data[i] = 'a' + i;
    }
    cout << b.print() << endl;
    
    cout << "Shuffle c:" << endl;
    Shuffle10<string> c;
    c.data[0] = "pizza";
    c.data[1] = "donut";
    c.data[2] = "coke";
    cout << c.print() << endl;
    return 0;
}