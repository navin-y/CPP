#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int t1=0,t2=1;
    if(n==0 || n==1){
        cout<<"Present";
        return 0;
    }
    while(1){
        int t=t1+t2;
        t1=t2;
        t2=t;
        if(t==n){
            cout<<"Present";
            break;
        }
        if(t!=n && t>n){
            cout<<"Not Present";
            break;
        }
    }
    return 0;
}