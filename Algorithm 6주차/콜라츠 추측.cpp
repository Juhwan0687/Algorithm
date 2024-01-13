#include <iostream>

int cnt=0;

int predict(int n);

int main(){
	int n;
	
	scanf("%d",&n);
	
	printf("%d",predict(n));
}

int predict(int n){
	if(n%2==0){
		n/=2;
		
		cnt++;
		
		if(n==1){
			return cnt;
		}
		
		else{
			return predict(n);
		}
	}
	
	else if(n!=1&&n%2!=0){
		n*=3;
		n++;
		
		cnt++;
		
		return predict(n);
	}
	if(n==1){
		return cnt;
	}
}
