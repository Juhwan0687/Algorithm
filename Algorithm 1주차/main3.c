#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int sum;
	
	int i;
	
	sum=0;
	
	for(i=0;i<=3;i++){	
		sum+=n%10;
		n-=n%10;
		n/=10;
	}
	
	printf("%d",sum);
}
