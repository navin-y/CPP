#include<iostream>
using namespace std;

namespace mine{
    void print(){
        cout<<"Im mine namespace\n";
    }
}

namespace library{
    void print(){
        cout<<"Im library namespace\n";
    }
}

int main(){
    mine::print();
    library::print();
}