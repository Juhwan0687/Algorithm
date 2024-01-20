#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	
	string w[n];
	
	int cnt=n;
	
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	for(int i=0;i<n;i++){	
		string a=w[i];
	
		reverse(a.begin(),a.end());
		
		if(a!=w[i]){
			cnt--;
		}
	}
	
	cout<<cnt;
}
