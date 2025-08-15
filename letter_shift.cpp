#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            if(str[i]=='z') str[i]='a';
            else if(str[i]=='Z') str[i]='A';
            else str[i]=str[i]+1;
        }
    }
    cout<<str;
}