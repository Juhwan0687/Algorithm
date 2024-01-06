#include <iostream>

int main(){
	int m,cnt=0;
	
	scanf("%d",&m);
	
	int h[m+1]={0};
	
	for(int i=0;i<m;i++){
		scanf("%d",&h[i]);
	}
	
	int a=0;
	
	for(int i=m-1;i>=0;i--){
		for(int j=i;j<=m;j++){
			if(h[i]<h[j]){
				a=1;
				break;
			}
		}
		cnt++;
		if(a==1){
			cnt--;
			a=0;
		}
	}
	
	printf("%d",cnt);
}