#include <iostream>

int sum(int n);

int main(){
	int n;
	
	scanf("%d",&n);
	
	printf("%d",sum(n));
}

int sum(int n){
	if(n==0){
		return 0;
	}
	else{
		return n%10+sum(n/10);
	}
}
