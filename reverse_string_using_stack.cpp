#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string str;
    stack<char> s;
    cin>>str;
    for(int i=0;i<str.length();i++)
        s.push(str[i]);
    string rev="";
    while(!s.empty()){
        rev+=s.top();
        s.pop();
    }
    cout<<rev;
}