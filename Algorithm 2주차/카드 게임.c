#include <stdio.h>

int main(){
	int a[10],b[10],i,j,aco=0,bco=0;
	char res[10];
	
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	scanf("%d %d %d %d %d %d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5],&b[6],&b[7],&b[8],&b[9]);
	
	for(i=0;i<=9;i++){
		if(a[i]>b[i]){
			res[i]='A';
		}
		else if(a[i]<b[i]){
			res[i]='B';
		}
		else if(a[i]==b[i]){
			res[i]='D';
		}
	}
	
	for(j=0;j<=9;j++){
		if(res[j]=='A'){
			aco++;
		}
		else if(res[j]=='B'){
			bco++;
		}
		else if(res[j]=='D'){
			aco++;
			bco++;
		}
	}
	
	if(aco>bco){
		printf("A");
		return 0;
	}
	else if(bco>aco){
		printf("B");
		return 0;
	}
	else if(bco==aco){
		printf("D");
		return 0;
	}
}
