#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string a;
	
	cin>>a;
	
	string b;
	
	cin>>b;
	
	while(1){
		if(a.find(b)==0){
			a=a.substr(a.find(b)+b.size(),a.size()-1);
		}
		else{
			a=a.substr(0,a.find(b))+a.substr(a.find(b)+b.size(),a.size()-1);
		}
		
		if(a==""){
			cout<<"\nArt!";
			
			return 0;
		}
		
		if(a.size()<b.size()){
			printf("\n");
			
			cout<<a;
			
			return 0;
		}
	}
}
