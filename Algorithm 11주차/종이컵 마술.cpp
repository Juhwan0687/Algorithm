#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n,k=0;
	
	stack<int> cup;
	
	cin>>n;
	
	cup.push(k);
	
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		
		while(!cup.empty()){
			if(cup.top()>=k){
				break;
			}
			else{
				cup.pop();
			}
		}
		
		cup.push(k);
	}
	
	cout<<"\n"<<cup.size();
}
