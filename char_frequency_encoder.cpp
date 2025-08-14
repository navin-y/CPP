#include<iostream>
using namespace std;

int main() {
	string str,res;
	int c;
	getline(cin,str);
	int len=str.length();
	for(int i=0; i<len; i++) {
		c=1;
		for(int j=0; j<len; j++) {
			if(str[i]==str[j] && str[i]!='*' && i!=j) {
				c++;
				str[j]='*';
			}
		}
		/*if(str[i]!='*')
		    cout<<str[i]<<c;*/
		char t=c+'0';
	    if(str[i]!='*')
            res=res+str[i]+t;
	}
	cout<<res;
}
