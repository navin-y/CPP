#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,x=0,d1=0,d2=0;
  cin>>n;
  int pos[n];
  string input[n];
  for(int i=0;i<n;i++)
    cin>>input[i];
  for(int i=0;i<n-1;i++){
    int c=0;
    int len1=input[i].length();
    int len2=input[i+1].length();
    for(int k=0;k<len1;k++){
      for(int j=0;j<len2;j++){
        if(input[i][k]==input[i+1][j]){
          c++;
          pos[x]=k;
          x++;
          break;
        }
      }
      if(c>0) break;
    }
    if(c==0){
      cout<<"No";
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  for(int i=0;i<input[0].length();i++)
    cout<<input[0][i]<<" ";
  cout<<"\n";
  d1=pos[0];
  for(int i=1;i<n;i++){
      if(i%2!=0){
          for(int j=1;j<input[i].length();j++){
              for(int k=0;k<d1;k++)
                cout<<"  ";
              cout<<input[i][j];
              if(j<input[i].length()-1)
                cout<<"\n";
              d2=j;
          }
      }
      else{
            //for(int k=0;k<d2+1;k++) cout<<" ";
            cout<<" ";
            for(int j=1;j<input[i].length();j++){
                cout<<input[i][j];
                if(j<input[i].length()-1)
                    cout<<" ";
            }
            cout<<"\n";
      }
  }
}


