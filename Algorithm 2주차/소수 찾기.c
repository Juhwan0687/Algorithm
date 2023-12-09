#include <stdio.h>

int main(){
	int n,m,i,j,k=0;
	
	scanf("%d %d",&n,&m);
	
	int count=m-n+1;
		
	for(i=n;i<=m;i++){
		if(i==1){
			k=1;
		}
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				k=1;
				break;
			}
		}
		if(k==1){
			k=0;
			count--;
		}
		else{
			printf("%d ",i);
		}
	}
	
	printf("\n%d",count);
	
	return 0;
}
