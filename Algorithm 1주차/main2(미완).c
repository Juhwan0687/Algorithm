#include <stdio.h>

int main(){
	int H,M,S;
	
	scanf("%d %d %d",&H,&M,&S);
	
	int T;
	
	scanf("%d",&T);
	
	if(T%60>S){
		S=60-T%60;
		if(M==0){
			M=59;
			H--;
		}
		else{
			M--;
		}
	}
	else{
		S-=T%60;
	}
	T-=T%60;
	
	T/=60;
	
	if(M<T%60){
		M=60-T%60;
		H--;
	}
	else{
		M-=T%60;
	}
	T-=T%60;
	
	T/=60;
	
	H-=T;
	
	M+=4;
	
	printf("%d %d %d",H,M,S);
}
