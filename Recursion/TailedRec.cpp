#include<iostream>
using namespace std;

// Tail recurssion or backtracking huihuihui....

void print(int i, int n){
    if(i<1) return;

    print(i-1, n);
    cout << i << " ";
}

void printt(int i, int n){
    if(i>n) return;

    printt(i+1, n);
    cout << i << " ";
}

int main(){
    int n;
    cout << "enter the limit: ";
    cin >> n;

    print(n, n);
    cout << endl << endl;

    printt(1, n);
    return 0;
}