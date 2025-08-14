#include<iostream>
using namespace std;

int main(){
  int n,rowsum=0,rdsum=0,ldsum=0,colsum=0;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      cin>>arr[i][j];
  }
  if(n==1){
    cout<<"yes";
    return 0;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      rowsum+=arr[i][j];
      if(i==j)
        ldsum+=arr[i][j];
      if(i+j==n-1)
        rdsum+=arr[i][j];
      colsum+=arr[j][i];
    }
  }
  if((colsum/3)==(rowsum/3) && (colsum/3)==ldsum && (colsum/3)==rdsum &&
  (rowsum/3)==ldsum && (rowsum/3)==rdsum && ldsum==rdsum)
    cout<<"yes";
  else
    cout<<"no";
}


