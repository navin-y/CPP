#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int t1=0,t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=2;i<n;i++){
        int t=t1+t2;
        cout<<t<<" ";
        t1=t2;
        t2=t;
    }
    return 0;
}