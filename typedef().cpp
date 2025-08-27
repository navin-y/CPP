#include<iostream>
using namespace std;

typedef int (*operation)(int, int);

int add(int a, int b){ return a+b; }
int mul(int a, int b){ return  a*b; }

int main(){
    operation op;
    op=add;
    cout<<op(5,6)<<endl;
    cout<<op(3,2)<<endl;
}