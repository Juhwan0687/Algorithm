#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string sound;
	int n;
	
	cin >> sound;
	
	scanf("%d",&n);
	
	string r[n];
	
	for(int i=0;i<n;i++){
		cin >> r[i];
	}
	
	int cnt=0;
	
	for(int i=0;i<n;i++){
		if(r[i]==sound){
			cnt++;
		}
	}
	
	if(cnt==0){
		printf("\nNo");
		return 0;
	}
	
	else{
		printf("\nYes");
		return 0;
	}
}
