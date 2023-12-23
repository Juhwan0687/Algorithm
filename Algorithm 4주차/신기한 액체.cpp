#include <iostream>

int main(){
	int r,d;
	
	scanf("%d %d",&r,&d);
	
	int v[r][d];
	
	int liq_x,liq_y;
	
	for(int i=0;i<=d-1;i++){
		for(int j=0;j<=r-1;j++){
			scanf("%d",&v[j][i]);
		}
	}
	
	for(int i=0;i<=d;i++){
		for(int j=0;j<=r;j++){
			if(v[j][i]==2){
				liq_x=j;
				liq_y=i;
			}
		}
	}
	
	while(v[liq_x][liq_y+1]==0||v[liq_x+1][liq_y]==0){
		if(v[liq_x][liq_y+1]==0){
			liq_y++;
		}
		
		else if(v[liq_x+1][liq_y]==0){
			liq_x++;
		}
	}
	
	printf("\n%d %d",liq_x,liq_y);
}
