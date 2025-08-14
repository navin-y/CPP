#include <iostream>
#include <algorithm>
using namespace std;

class Square {
public:
    void operator()(int x) {
        cout << x * x << " ";
    }
};

int main() {
    int arr[] = {1, 2, 3};
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<"Normal for loop:\n";
    for(int i=0;i<l;i++){
        Square()(arr[i]);
    }
    
    cout<<"\nFor Each:\n";
    for_each(arr, arr+3, Square());
}
