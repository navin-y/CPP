#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	string input[n];
	for(int i=0; i<n; i++) {
		cin>>input[i];
	}
	if(n==2){
	  cout<<input[0]<<'\n'<<input[1];
	  return 0;
	}
	cout<<input[0]<<'\n';
	bool visited[n]= {false};
	visited[0]=true;
	string current=input[0];

	for(int i=0; i<n-1; i++) {

		for(int k=0; k<n; k++) {
			if(visited[k]) continue;
			int c=0;
			for(int j=0; j<input[i].length(); j++) {
				if(current[j]!=input[k][j])
					c++;
			}
			if(c==1) {
				cout<<input[k]<<'\n';
				visited[k]=true;
				current=input[k];
			}
		}
	}
}