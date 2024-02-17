#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
	int n;
	
	stack<int> s;
	queue<int> q;
		
	for(int i=0;i<10;i++){
		cin>>n;
		
		s.push(n);
		q.push(n);
	}
	
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	
	cout<<"\n";
	
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
