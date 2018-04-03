#include<iostream>

using namespace std;

int main(){
    // int *head;
    // head = new int[100];

    // for (unsigned int i=0; i < 10; i++){
    //     head[i] = i;
    // }
    
    // for (unsigned int i=0; i < 10; i++){
    //     cout << head[i] << endl;
    //     cout << *(head + i) << endl;
    // }
    
    int a[5] = {1, 2, 3, 4, 5};
    cout << a << endl;
    int *head = a;
    cout << a[1] << endl;
    int *head2 = &a[1];
    
    for (unsigned int i = 0; i < 5; i++){
        cout << head[i] << " ";
    }
    cout << endl;
    for (unsigned int i = 0; i < 4; i++){
        cout << head2[i] << " ";
    }
    cout << endl;
    
    return 0;
}