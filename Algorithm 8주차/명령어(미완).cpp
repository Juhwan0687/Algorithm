#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n;
	
	string c,d;
	
	cin>>n;
	
	int a,b;
	
	c.c_str();
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==0){
			cin>>d;
			c=c.substr(0,b-1)+d+c.substr(b+d.size(),c.size()-1);
		}
		
		else if(a==1){
			c=c.substr(0,b-1)+c.substr(b+1,c.size()-1);
		}
		
		else{
			cout<<c;
		}
	}
}
