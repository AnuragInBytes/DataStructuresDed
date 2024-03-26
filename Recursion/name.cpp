#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;

    cout << "Roronoa Zoro  ";
    i++;
    print(i, n);
}

int main(){
    int n;
    cout << "enter how many times you want to print the name: ";
    cin >> n;
    print(1, n);
    return 0;
}