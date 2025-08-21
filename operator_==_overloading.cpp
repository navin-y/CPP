#include<iostream>
using namespace std;

class Compare{
    private:
        string name;
    public:
        Compare() : name("null"){}
        Compare(string n) : name(n){}
        
        bool operator == (Compare &obj){
            return name == obj.name;
        }
};

int main(){
    Compare s1("navin");
    Compare s2("siran");
    if(s1==s2)
        cout<<"same";
    else
        cout<<"not same";
}