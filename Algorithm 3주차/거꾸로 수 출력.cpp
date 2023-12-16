#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> v;
	int i,j,n;
	
	for(i=0;i<=9;i++){
		scanf("%d",&n);
		v.push_back(n);
	}
	
	for(j=v.size();j>=1;j--){
		printf("\n%d",v[j-1]);
	}
}
