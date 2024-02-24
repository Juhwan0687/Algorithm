#include <iostream>
#include <queue>
using namespace std;

int main(){
	int a,b,n;
	
	cin>>a>>b;
	
	queue<int> math;
	
	math.push(a);
	
	while(!math.empty()){
		n=math.front();
		math.pop();
		
		if(n==b){
			cout<<"\n"<<1;
			
			return 0;
		}
		
		if(n*2<=b){
			math.push(n*2);
		}
		
		if((n*10+1)<=b){
			math.push(n*10+1);
		}
	}
	
	cout<<"\n"<<-1;
}
