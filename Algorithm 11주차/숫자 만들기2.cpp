#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
	int a,b,n,cnt=0;
	
	cin>>a>>b;
	
	queue<pair<int,int> > math;
	
	math.push(make_pair(a,0));
	
	while(!math.empty()){
		n=math.front().first;
		cnt=math.front().second;
		math.pop();
		
		if(n==b){
			cout<<"\n"<<cnt;
			
			return 0;
		}
		
		if(n*2<=b){
			math.push(make_pair(n*2,cnt+1));
		}
		
		if((n*10+1)<=b){
			math.push(make_pair(n*10+1,cnt+1));
		}
	}
	
	cout<<"\n"<<-1;
}
