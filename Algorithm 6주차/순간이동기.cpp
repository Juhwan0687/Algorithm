#include <cstdio>

int tele[1001];

int move(int p,int t);

int main(){
	int n,p,t;
	
	scanf("%d %d %d",&n,&p,&t);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&tele[i]);
	}
	
	printf("%d",move(p,t));
}

int move(int p,int t){
	if(t==0) return p;
	return move(tele[p],t-1);
}
