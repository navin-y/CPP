#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {3,7,2,6,4,9};
    sort(v.begin(),v.end(),greater<int>());
    for(int i : v)
        cout<<i<<" ";
}