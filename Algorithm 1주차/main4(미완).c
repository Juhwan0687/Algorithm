#include <stdio.h>

int main(){
	int n,m,i;
	int j;
	
	scanf("%d %d %d",&n,&m,&i);
	
	if(i==n&&(i-1)%m==0){
		printf("0");
		return 0;
	}
	else{
		if(i%m!=0){
			printf("%d",i%m);
			return 0;
		}
		else{
			printf("%d",m);
			return 0;
		}
	}
}
