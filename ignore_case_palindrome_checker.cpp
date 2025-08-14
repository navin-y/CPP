#include<iostream>
#include<cctype>
using namespace std;

int main(){
  string str,res;
  int c=0;
  getline(cin,str);
  for(char ch : str){
    if(isalpha(ch))
      res+=tolower(ch);
  }
  int len=res.length();
  for(int i=0;i<len/2;i++){
      if(res[i]!=res[len-i-1])
        c++;
  }
  (c)?cout<<"Not Palindrome":cout<<"Palindrome";
}