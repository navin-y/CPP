#include<iostream>
using namespace std;

int main(){
    int es=0,os=0;
    int arr[5]={55,30,12,72,40};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]<arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
   }
   for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
   cout<<"\n"<<"Second largest: "<<arr[1]<<endl;
   
   for(int i=0;i<5;i++){
       if(arr[i]%2==0)
            es+=arr[i];
        else
            os+=arr[i];
   }
   cout<<"Even sum: "<<es<<endl;
   cout<<"Odd sum: "<<os<<endl;
   
   cout<<"Sum: "<<es+os<<endl;
   cout<<"Avg: "<<(es+os)/5<<endl;
} 
