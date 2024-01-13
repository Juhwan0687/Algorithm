#include <iostream>

int ans=1234567890;
int S[10],B[10];
int n;

void cook(int index,int s,int b,int cnt){
	if(index==n){
		int diff;
		
		if(s>b){
			diff=s-b;
		}
		
		else{
			diff=b-s;
		}
		
		if(diff<ans&&cnt!=n){
			ans=diff;
		}
		
		return;
	}
	cook(index+1,s*S[index],b+B[index],cnt);
	cook(index+1,s,b,cnt+1);
}

int main(){
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d %d",&S[i],&B[i]);
	}
	
	cook(0,1,0,0);
	
	printf("%d",ans);
}
