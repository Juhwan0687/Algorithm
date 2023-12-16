#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,s[10000],rank[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		rank[i]=1;
		for(int j=0;j<n;j++){
			if(s[i]<s[j]) rank[i]++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",rank[i]);
	}
}
