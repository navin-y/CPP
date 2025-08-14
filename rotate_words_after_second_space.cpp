#include<iostream>
using namespace std;

int main(){
    string str,res,res2;
    int c=0;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i-1]==' ')
            c++;
        if(c>1){
            res+=str[i];
        }
        else{
            res2+=str[i];
        }
    }
    cout<<res+' '+res2;
}

