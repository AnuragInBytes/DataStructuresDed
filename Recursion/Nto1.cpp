#include<iostream>
using namespace std;

void print(int n, int i){
    if(n<i) return ;

    cout << n << " ";
    n--;
    print(n, 1);
}

int main(){
    int n;
    cout << "enter the limit : ";
    cin >> n;
    print(n, 1);

    return 0;
}