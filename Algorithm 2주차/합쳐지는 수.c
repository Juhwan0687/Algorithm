#include <stdio.h>

int main(){
	long long n;
	
	int count=0;
	int temp=0;
	
	scanf("%lld",&n);
	
	while(n>=10){
		temp=0;
		
		while(n){
			temp+=n%10;
			n/=10;
		}
		
		n=temp;
		count++;
	}
	
	printf("%d",count);
	return 0;
}
