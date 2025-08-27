#include<iostream>
#include<cstring>
#include<algorithm>
#include<array>
using namespace std;

int main(){
    int arr[5];
    fill(arr, arr+5, 3);
    
    array<int, 5> arr1;
    arr1.fill(9);
    
    char ch[5];
    memset(ch, '#', sizeof(ch));
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" - "<<ch[i]<<" - "<<arr1[i]<<endl;
    }
}