#include<iostream>
using namespace std;

void summ(int i, int sum){
    if(i<1){
        cout  << sum << endl;
        return;
    }
    summ(i-1, sum+i);
}

int summm(int n){
    if(n==1) return 1;
    return n + summm(n-1);
}
    

int main(){
    int i;
    cout << "enter the limit: ";
    cin >> i;

    summ(i, 0);
    cout << endl << endl;
    cout << summm(i);
}