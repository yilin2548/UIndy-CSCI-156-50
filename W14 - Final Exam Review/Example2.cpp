#include<iostream>
#include<stdexcept>
using namespace std;

double divide(int a, int b){
    if (b == 0) {
        throw logic_error("divided by zero");
        cout << "After throw" << endl;
    }
    return (double) a / b;
}
int main(){
    int a = 1;
    int b = 0;
    cout << "Before try" << endl;
    try{
        cout << "Inside try" << endl;
        double c = divide(a, b);
     } catch(logic_error &e) {
        cout << e.what() << endl;
    }
    cout << "After try" << endl;
}
