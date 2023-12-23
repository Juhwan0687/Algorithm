#include <cstdio>
#include<vector>
using namespace std;

int main(){
	int city,info,from,to,value;
	
	scanf("%d",&city);
	
	int car[city+1][city+1]={0};
	
	scanf("%d",&info);
	
	for(int i=0;i<=info-1;i++){
		scanf("%d %d %d",&from,&to,&value);
		
		if(car[from][to]<value){
			car[from][to]=value;
		}
	}
	
	printf("\n");
	
	for(int i=1;i<=city;i++){
		for(int j=1;j<=city;j++){
			printf("%d ",car[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int cit[city],out[city];
	
	for(int i=1;i<=city;i++){
		for(int j=1;j<=city;j++){
			cit[i]=car[i][j];
		}
	}
	
	for(int i=1;i<=city;i++){
		for(int j=1;j<=city;j++){
			out[i]=car[j][i];
		}
	}
	
	for(int i=1;i<=city;i++){
		if(cit[i]>0&&cit[i]>out[i]){
			printf("%d ",i);
		}
	}
}
