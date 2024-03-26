#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string word, int s, int e){
    if(s>=e) return true;
    if(word[s] != word[e]) return false;
    return checkPalindrome(word, s+1, e-1);
}

int main(){
    string word = "MADAM";

    // cout << size(word);
    if(checkPalindrome(word, 0, size(word)-1)) cout << "Yes its a palindrome..." << endl;
    else cout << "Not a palindrome..." << endl;
}