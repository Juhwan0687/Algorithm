#include <cstdio>

int sum=0;

int div(int n);

int main(){
	int n;
	
	scanf("%d",&n);
	
	printf("%d",div(n));
}

int div(int n){
	if(n<10) return sum+n;
	sum+=n%10;
	return div(n/10);
}
