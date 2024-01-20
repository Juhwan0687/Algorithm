#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string a,b;
	
	cin>>a;
	cin>>b;
	
	if(a.size()>b.size()){
		cout<<a;
	}
	else{
		cout<<b;
	}
}
