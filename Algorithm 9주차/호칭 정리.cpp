#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string other,me;
	
	cin>>me;
	cin>>other;
	
	for(int i=0;i<=12;i++){
		if(me[i]>other[i]){
			cout<<"sir";
			
			return 0;
		}
		else if(me[i]<other[i]){
			cout<<"kid";
			
			return 0;
		}
	}
}
