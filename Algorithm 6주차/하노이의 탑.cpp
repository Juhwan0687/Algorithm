#include <iostream>

void hanoi(int n,int from,int to);

int main(){
	int n;
	
	scanf("%d",&n);
	
	hanoi(n,1,3); 
}

void hanoi(int n,int from,int to){
	if(n==0){
		return;
	}
	hanoi(n-1,from,6-from-to);
	printf("%d %d\n",from,to);
	hanoi(n-1,6-from-to,to);
}
