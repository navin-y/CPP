#include<iostream>
#include<climits>
using namespace std;

int main(){
    int r,c,max;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    cout<<"Highest element row wise:"<<endl;
    for(int i=0;i<r;i++){
        max=INT_MIN;
        for(int j=0;j<c;j++){
            if(arr[i][j]>max)
                max=arr[i][j];
        }
        cout<<max<<" "<<endl;
    }
    cout<<"Highes element column wise:"<<endl;
    for(int i=0;i<c;i++){
        max=INT_MIN;
        for(int j=0;j<r;j++){
            if(arr[j][i]>max)
                max=arr[j][i];
        }
        cout<<max<<" "<<endl;
    }
    
}
