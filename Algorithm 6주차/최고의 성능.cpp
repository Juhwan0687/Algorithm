#include <cstdio>

int n;
int p[20];
int ans;

void power(int index,int sum);

int main(){
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	power(0,0);
	
	printf("%d",ans);
	
	return 0;
}

void power(int index,int sum){
	if(index==n){
		if(ans<sum){
			ans=sum;
		}
		return;
	}
	int p1=p[index];
	int p2=p[index]*p[index]-40*p[index]+300;
	
	power(index+1,sum+p1);
	power(index+1,sum+p2);
}
