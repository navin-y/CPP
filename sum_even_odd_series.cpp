#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int se=0,so=0;
    if(n%2==0){
        for(int i=0;i<=n;i+=2)
            se+=i;
        cout<<se-(n/2);
        return 0;
    }
    else{
        for(int i=1;i<=n;i+=2)
            so+=i;
        cout<<so;
        return 0;
    }
}