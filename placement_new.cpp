// To construct objects in memory you’ve already allocated (e.g., from a memory pool).
// Placement new does not allocate memory, it only constructs the object.
// You must manually call the destructor.
// Often used in custom allocators and high-performance systems.
#include<iostream>
using namespace std;


class Demo{
public:
    int x;
    Demo(int val) : x(val){
        cout<<"Constructor called\n";
    }
    ~Demo(){
        cout<<"Destructor called\n";
    }
};

int main(){
    char buf[sizeof(Demo)];
    Demo *ptr=new (buf) Demo(33);
    cout<<"Value of x: "<<ptr->x<<endl;
    ptr->~Demo();
}