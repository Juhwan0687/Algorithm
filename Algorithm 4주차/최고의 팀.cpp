#include <cstdio>
#include<vector>
using namespace std;

int main(){
	vector<int> v[10001];
	
	int stud,info;
	
	scanf("%d %d",&stud,&info);

	for(int i=0;i<info;i++){
		int from,to;
		
		scanf("%d %d",&from,&to);
		
		v[from].push_back(to);
	}
	
	printf("\n");
	
	for(int i=1;i<=stud;i++){
		int cnt=0;
		
		for(int j=0;j<v[i].size();j++){
			int t=v[i][j];
			
			for(int k=0;k<v[t].size();k++){
				if(i==v[t][k]){
					printf("%d ",t);
					
					cnt++;
					break;
				}
			}
		}
		if(cnt==0){
			printf("0");
		}
		
		printf("\n");
	}
}
