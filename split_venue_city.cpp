#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string venue="Eden Garderns,Kolkata";
    
    string city;
    stringstream ss(venue);
    
    getline(ss, city, ',');
    cout<<city<<endl;
    
    getline(ss, city, ',');
    cout<<city;
    
}