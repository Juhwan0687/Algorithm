#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s,b;
	
	cin>>s;
	cin>>b;
	
	int cnt=0;
	
	for(int i=0;i<s.size();i++){
		if(s.substr(i,b.size())==b){
			cnt++;
		}
	}
	
	cout<<cnt;
}
