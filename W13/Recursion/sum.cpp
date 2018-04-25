#include <iostream>

using namespace std;

int sum(int n){
    int ret = 0;
    for (int i = 0 ; i <= n ; i ++){
        ret += i;
    }
    return ret;
}

int sumRec(int n){
    // cout << "n: " << n << endl;
    if (n <= 0) return 0;
    return sumRec(n-1) + n;
}

int Fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fib(n-1) + Fib(n-2);
}

int main(){
    cout << sum(100) << endl;
    cout << "Recursion sum: " << sumRec(100) << endl;
    cout << Fib(20) << endl;
    return 0;
}