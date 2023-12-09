#include <stdio.h>

int main(){
	int prob,i,j,k,score=0;
	
	scanf("%d",&prob);
	
	int ca[prob],sa[prob];
	
	for(i=1;i<=prob;i++){
		scanf("%d",&ca[i-1]);
	}
	
	printf("\n");
	
	for(j=1;j<=prob;j++){
		scanf("%d",&sa[j-1]);
	}
	
	for(k=0;k<=prob-1;k++){
		if(ca[k]==sa[k]){
			score++;
		}
	}
	
	printf("\n%d",score);
	
	return 0;
}
