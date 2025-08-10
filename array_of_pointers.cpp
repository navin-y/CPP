#include<iostream>
using namespace std;

int main(){
    int x=10,y=20,z=30;
    int *arr[3];
    arr[0]=&x;
    arr[1]=&y;
    arr[2]=&z;
    for(int i=0;i<3;i++)
        cout<<*arr[i]<<" ";
}