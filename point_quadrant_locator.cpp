#include<iostream>
using namespace std;
 
int main(){
    float a,b;
    cin>>a>>b;
    if(a==0 && b==0)
        cout<<"Origin";
    else if((a==0 && b>0) || (a==0 && b<0))
        cout<<"Y axis";
    else if((a>0 && b==0) || (a<0 && b==0))
        cout<<"X axis";
    else if(a>0 && b>0)
        cout<<"I Quad";
    else if(a<0 && b>0)
        cout<<"II Quad";
    else if(a<0 && b<0)
        cout<<"III Quad";
    else
        cout<<"IV Quad";
}