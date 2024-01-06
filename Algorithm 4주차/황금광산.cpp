#include <cstdio>

int main(){
	int m,n,gold_max=0,gx=0,gy=0;
	
	scanf("%d %d",&m,&n);
	
	int mine[m+1][n+1]={0};
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&mine[j][i]);
		}
	}
	
	int a=0;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){	
			a=mine[j][i]+mine[j+1][i]+mine[j-1][i]+mine[j][i+1]+mine[j][i-1];
			
			if(gold_max<a){
				gold_max=a;
				
				gx=j;
				gy=i;
				
				a=0;
			}
		}
	}
	
	printf("%d %d %d",gx,gy,gold_max);
}
