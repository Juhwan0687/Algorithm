#include <iostream>

int main(){
	int n,s[100];
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&s[i-1]);
	}
	
	int sum=0;
	
	for(int i=n-2;i>=0;i--){
		if(s[i+1]<=s[i]){
			int diff=s[i]-s[i+1]+1;
			sum+=diff;
			s[i]=s[i]-diff;
		}
	}
	printf("%d",sum);
}
