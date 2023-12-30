#include <cstdio>

int main(){
	int paper,bigp[101][101]={0};
	
	scanf("%d",&paper);
	
	for(int i=0;i<paper;i++){
		int x,y;
		
		scanf("%d %d",&x,&y);
		
		for(int j=y;j<y+10;j++){
			for(int g=x;g<x+10;g++){
				bigp[j][g]=1;
			}
		}
	}
	
	int a=0;
	
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			a+=bigp[i][j];
		}
	}
	printf("\n%d",a);
}
