#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string str1="navin";
    string str2="ivnnna";
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    int j=0;
    for(int i=0;i<str2.size();i++){
        if(str2[i]!=str1[j]){
            cout<<str2[i];
            return 0;
        }
        j++;
    }
}