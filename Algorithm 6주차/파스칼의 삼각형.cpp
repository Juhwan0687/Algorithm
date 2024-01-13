#include <iostream>

int tri[31][31]={0};

int paskal(int n,int m){
	if(n==m||m==1){
		return tri[n][m];
	}
	return paskal(n-1,m)+paskal(n-1,m-1);
}

int main(){
	int n,m;
	
	scanf("%d %d",&n,&m);
	
	for(int i=1;i<=30;i++){
		tri[i][i]=1;
	}
	
	for(int i=1;i<=30;i++){
		tri[i][1]=1;
	}
	
	printf("%d",paskal(n,m));
}
