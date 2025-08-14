#include<iostream>
using namespace std;

int main(){
    string str;
    
    getline(cin,str);
    int len=str.length();
    bool isPalindrome = true;
    
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome)
        cout<<str<<" is Palindrome";
    else
        cout<<str<<" is not Palindrome";
}