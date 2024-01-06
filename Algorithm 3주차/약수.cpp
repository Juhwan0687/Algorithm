#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a;
	
	scanf("%d",&a);
	
	int b[a];
	
	for(int i=1;i<=a;i++){
		scanf("%d",&b[i-1]);
	}
	
	if(a!=1){
		sort(b,b+a);
	
		printf("%d",b[0]*b[a-1]);
		
		return 0;
	}
	
	else{
		printf("%d",b[0]*b[0]);
		
		return 0;
	}
}
