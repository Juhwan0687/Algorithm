#include <stdio.h>

int main(){
	int n,k,i,j=0;
	
	scanf("%d %d",&n,&k);
	
	int list[n];
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			list[j]=i;
			j++;
		}
	}
	
	if(k>j+1){
		printf("0");
		return 0;
	}
	else{
		printf("%d",list[k-1]);
		return 0;
	}
}
