// Name: Yilin
// Date: 1/29/2018
// Desc: Review of csci-155 final exam

#include <iostream>

using namespace std;

void myFunction (int b[], int size);

int main(){
    // q1-c
    // if(-1) cout << "donuts";
    // q1-d
    // for(int i = 0; i < 'a'; i++){
    //     cout << i<< "stuff!" << endl;
    // }
    
    // q1-f
    // int k[10] = {1, 2};
    // for (int i=0; i<10; i++){
    //     cout << k[i] << " " << endl;
    // }
    // cout << k[2] << endl;
    
    // q2-h
    int a = 5.1 + 7;
    cout << a << endl;
    
    // // q3-a
    // bool A = false;
    // bool B = false;
    // bool C = false;
    // cout << ((A && !B) || !C) << endl;
    
    // // q3-c
    // int x = 5;
    // int y = 3;
    
    // if(x = y) {cout << "Crazy Code!" << endl; }
    // cout << x << " " << y << endl;
    
    // // q3-d
    // int k = 2;
    // for(int i = 0; i < k * k; i++){
    //     cout << "Donuts!" << endl;
    // }
    
    // //q3-f
    // // int a[] = {1, 2, 3, 4, 5};
    // // myFunction (a, 5);
    
    // //q3-g
    // for(int i = 1; i <= 7; i++){
    //   for(int j = 0; j < i; j++){
    //     cout << '*';
    //   }
    //   for(int j = i; j > 0; j--){
    //     cout << '?';
    //   }
    //   cout << '\n';
    // }

}

void myFunction (int b[], int size){
    for (int i = 1 ; i < size; i++){
        b[i] = 2 * b[i];
    }   
}