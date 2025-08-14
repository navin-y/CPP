#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t1=0,t2=1,sum=0;
    while(n){
        int t=t1+t2;
        sum+=t1;t1=t2;
        t2=t;n--;
    }
    cout<<sum;
}