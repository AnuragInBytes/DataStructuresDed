#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//using double pointer
void reverseArray(int arr[], int s, int e){
    if(s>=e) return;
    swap(arr[s], arr[e]);
    reverseArray( arr, s+1, e-1);
}

//using single pointer
void reverseArraySingle(int arr[], int i, int size){
    if(i >= size/2) return;

    swap(arr[i], arr[size-i-1]);
    reverseArraySingle(arr, i+1, size);
}
int main(){
    int size = 5;
    int arr[5] = {1,2,4,5,1};
    
    cout << "Array before reverse..." << endl;
    printArray(arr, size);
    cout << "Array after reverse using double pointer..." << endl;

    reverseArray(arr, 0, size-1);
    printArray(arr, size);

    cout << "reverse again using single pointer..." << endl;
    reverseArraySingle(arr, 0, size);
    printArray(arr, size);
    return 0;
}