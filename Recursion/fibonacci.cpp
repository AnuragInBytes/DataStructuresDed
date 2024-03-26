#include<iostream>
using namespace std;

//time complexity 2^n very bad

int fibo(int n){
    if(n<=1) return n;

    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;

    cout << fibo(n);
    return 0;
}