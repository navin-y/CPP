#include<iostream>
using namespace std;

int main(){
  string str1,str2,res;
  cin>>str1;
  res=res+str1+'\n';
  while(str2!="####"){
    cin>>str2;
    int len=str1.length();
    if(str1[len-1]==str2[0])
      res=res+str2+'\n';
    str1=str2;
  }
  cout<<res;
}
