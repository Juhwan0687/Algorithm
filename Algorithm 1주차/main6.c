#include <stdio.h>

int main(){
	int a,b,c,d,e;
	scanf("%1d %1d %1d %1d %1d",&a,&b,&c,&d,&e);
	
	printf("%d",((a*a)+(b*b)+(c*c)+(d*d)+(e*e))%10);
}
