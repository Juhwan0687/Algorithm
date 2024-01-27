#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n;
	
	string str,c,d;
	
	cin>>n;
	
	int a,b;
	
	for(int i=1;i<=n;i++){
		cin>>a;
		
		if(a==0){
			cin>>b;
			cin>>c;
			
			if(b==0){
				str=c+str.substr(0,str.size());
			}
			else if(b==str.size()-1){
				d=str[b];
				str=str.substr(0,b)+c;
				str+=d;
			}
			else{
				str=str.substr(0,b)+c+str.substr(b,str.size()-b);
			}
		}
		
		else if(a==1){
			cin>>b;
			
			if(b==0){
				str=str.substr(1,str.size()-1);
			}
			else if(b==str.size()-1){
				str=str.substr(0,str.size()-1);
			}
			else{
				str=str.substr(0,b)+str.substr(b+1,str.size()-b);
			}
		}
		else if(a==2){
			cout<<str;
			printf("\n");
		}
	}
}
