#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n*n-n;
    }
    else{
        cout<<n*n+n;
    }
    return 0;
}