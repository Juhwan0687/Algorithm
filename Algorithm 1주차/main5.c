#include <stdio.h>

int main(){
	int a,b,c,d;
	int sum[3],i,j;
	
	for(i=0;i<=2;i++){
		scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
		sum[i]=a+b+c+d;
	}
	
	for(j=0;j<=2;j++){
		switch(sum[j]){
			case 3:
				printf("A\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 1:
				printf("C\n");
				break;
			case 0:
				printf("D\n");
				break;
			case 4:
				printf("E\n");
				break;
		}
	}
} 
