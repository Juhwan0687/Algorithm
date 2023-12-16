#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,a[100000];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max_score=0,min_score=100,sum=0;
	for(int i=0;i<n;i++){
		if(max_score<a[i]){
			max_score=a[i];
		}
		if(min_score>a[i]){
			min_score=a[i];
		}
		sum+=a[i];
	}
	printf("\n%d",(sum-min_score-max_score)/(n-2));
}
