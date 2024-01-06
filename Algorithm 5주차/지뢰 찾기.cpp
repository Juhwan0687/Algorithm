#include <iostream>

int main(){
	int n,m,c;
	
	scanf("%d %d",&n,&m);
	
	scanf("%d",&c);
	
	int x[c]={0},y[c]={0};
	
	for(int i=0;i<c;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	int map[n+1][m+1]={0};
	
	int cnt=0;
	
	for(int i=0;i<c;i++){
		map[x[i]][y[i]]=-1;
	}
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(map[j][i]==-1){
				continue;
			}
			if(map[j-1][i-1]==-1){
				cnt++;
			}
			if(map[j][i-1]==-1){
				cnt++;
			}
			if(map[j+1][i-1]==-1){
				cnt++;
			}
			if(map[j-1][i]==-1){
				cnt++;
			}
			if(map[j+1][i]==-1){
				cnt++;
			}
			if(map[j-1][i+1]==-1){
				cnt++;
			}
			if(map[j][i+1]==-1){
				cnt++;
			}
			if(map[j+1][i+1]==-1){
				cnt++;
			}
			map[j][i]=cnt;
			cnt=0;
		}
	}
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%2d ",map[j][i]);
		}
		printf("\n");
	}
}
