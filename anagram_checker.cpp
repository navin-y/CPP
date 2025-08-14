#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,c,sc=0;
  cin>>n;
  int pos[n];
  string input[n];
  for(int i=0;i<n;i++)
    cin>>input[i];
  for(int i=0;i<n-1;i++){
    c=0;
    int len1=input[i].length();
    int len2=input[i+1].length();
    for(int k=0;k<len1;k++){
      for(int j=0;j<len2;j++){
        if(input[i][k]==input[i+1][j]){
          c++;
          sc+=c;
          break;
        }
      }
      if(c>0) break;
    }
    if(c==0){
      cout<<"No"<<"\n"<<0;
      return 0;
    }
  }
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=input[i].length();
cout<<sum-sc;
}

#include<iostream>
using namespace std;

int main(){
  string str1,str2;
  int c=0;
  cout<<"Enter the first string"<<endl;
  getline(cin,str1);
  cout<<"Enter the second string"<<endl;
  getline(cin,str2);
  string temp=str2;
  if(str1.length()!=str2.length()){
    cout<<str1<<" and "<<str2<<" are not anagrams";
    return 0;
  }
  int len=str1.length();
  for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
      if(str1[i]==temp[j] && str1[i]!='*' && str1[i]==' '){
        c++;
        temp[j]='*';
      }
    }
  }
  if(c==len-1)
    cout<<str1<<" and "<<str2<<" are anagrams";
  else
    cout<<str1<<" and "<<str2<<" are not anagrams";
}
