#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
	queue<int> y;
	
	int n,k;
	
	cin>>n>>k;
	
	int a[k];
	
	for(int i=1;i<=n;i++){
		y.push(i);//14
	}
	
	while(1){
		if(y.size()<k){
			break;
		}
		
		for(int i=0;i<k-1;i++){
			a[i]=y.front();
			y.pop();
		}
		cout<<y.front()<<" ";
		
		y.pop();
		
		for(int i=0;i<k-1;i++){
			y.push(a[i]);
		}
	}
	int j=y.size();
	for(int i=0;i<j;i++){
		cout<<y.front()<<" ";
		y.pop();		
	}
}
