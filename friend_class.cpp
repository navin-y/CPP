#include<iostream>
using namespace std;

class BankAccount{
    private:
        string AccNum;
        double balance;
    public:
        BankAccount(string a, double b):AccNum(a), balance(b){}
        
        //auditor can only access the BankAccount
        friend class Auditor;
};

class Auditor{
    public:
        void Audit(BankAccount& acc){
            cout<<"Account number: "<<acc.AccNum<<endl<<"Balance: "<<acc.balance<<endl;
        }
};

int main(){
    BankAccount a1("1234124", 56000);
    Auditor a2;
    a2.Audit(a1);
}