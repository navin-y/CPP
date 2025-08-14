#include<iostream>
using namespace std;

int main(){
    int *x;
    int size=(char *)(x+1)-(char *)x;
    cout<<size;
}