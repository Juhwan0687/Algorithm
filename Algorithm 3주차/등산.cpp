#include<cstdio>
#include<vector>
using namespace std;

int main(){
	vector <int> high;
	vector <int> sum;

	int n,d;
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&d);
		high.push_back(d);
	}
	
	for(int i=0;i<=high.size()-1;i++){
		if(high[i]>high[i+1]){
			sum[i]=0;
		}
		else{
			sum.push_back(high[i+1]-high[i]);
		}
	}
	
	int max_high=0,a=0;
	
	for(int i=0;i<=n-1;i++){
		if(max_high<sum[i]){
			max_high=sum[i];
			a=i;
		}
	}
	if(a==0){
		a++;
	}
	if(max_high>0)printf("\n%d %d",a,a+1);
	else printf("0");
}
