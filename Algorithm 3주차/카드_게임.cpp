#include<iostream>
#include<vector>
using namespace std; 

int main(){
	vector<int> A;
	vector<int> B;
	vector<int> Asco;
	vector<int> Bsco;
	
	int A_sum=0;
	int B_sum=0;
	
	printf("==A==\n");
	
	for(int i=1;i<=10;i++){
		int n;
		
		scanf("%1d",&n);
		
		A.push_back(n);
	}
	
	printf("\n==B==\n");
	
	for(int i=1;i<=10;i++){
		int n;
		
		scanf("%1d",&n);
		
		B.push_back(n);
	}
	
	for(int i=0;i<=9;i++){
		if(A[i]>B[i]){
			Asco.push_back(3);
			Bsco.push_back(0);
		}
		
		else if(A[i]<B[i]){
			Asco.push_back(0);
			Bsco.push_back(3);
		}
		
		else if(A[i]==B[i]){
			Asco.push_back(1);
			Bsco.push_back(1);
		}
	}
	
	for(int i=0;i<=9;i++){
		A_sum+=Asco[i];
		B_sum+=Bsco[i];
	}
	
	printf("\n%d %d",A_sum,B_sum);
	
	if(A_sum>B_sum){
		printf("\nA");
		
		return 0;
	}
	
	else if(A_sum<B_sum){
		printf("\nB");
		
		return 0;
	}
	
	else if(A_sum==B_sum&&A[9]>B[9]){
		printf("\nA");
		
		return 0;
	}
	
	else if(A_sum==B_sum&&A[9]<B[9]){
		printf("\nB");
		
		return 0;
	}
	
	else{
		int cnt=0;
		
		for(int i=0;i<=9;i++){
			if(A[i]==B[i]){
				cnt++;
			}
		}
		
		if(cnt==10){
			printf("\nD");
			
			return 0;
		}
		
		int k;
		
		for(int i=9;i>=0;i--){
			if(A[i]>B[i]||A[i]<B[i]){
				k=i;
				
				break;
			}
		}
		
		if(A[k]>B[k]){
			printf("\nA");
			
			return 0;
		}
		
		else if(A[k]<B[k]){
			printf("\nB");
			
			return 0;
		}
	}
}
