#include <cstdio>
#include<vector>
using namespace std;

int main(){
	vector<int> tx;
	vector<int> ty;
	vector<int> sx;
	vector<int> sy;
	
	int s,trap,steps,a,b;
	
	scanf("%d",&s);
	
	scanf("%d %d",&trap,&steps);
	
	for(int i=1;i<=trap;i++){
		scanf("%d %d",&a,&b);
		
		tx.push_back(a);
		ty.push_back(b);
	}
	
	for(int i=1;i<=steps;i++){
		scanf("%d %d",&a,&b);
		
		sx.push_back(a);
		sy.push_back(b);
	}
	
	a=0;
	
	for(int i=0;i<steps;i++){
		for(int j=0;j<trap;j++){
			if(tx[j]==sx[i]&&ty[j]==sy[i]){
				a=1;
				
				break;
			}
		}
		if(a==1){
			printf("%d",i+1);
			
			return 0;
		}
	}
	
	if(a==0){
		printf("-1");
		
		return 0;
	}
}
