#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

int main(){
	int n,y;
	string x;
	
	cin>>n;
	
	stack<int> num;
	
	queue<string> name;
	
	for(int i=0;i<n;i++){
		cin>>y>>x;
		
		num.push(y);
		name.push(x);
	}
	
	cout<<"\n";
	
	for(int i=0;i<n;i++){
		cout<<num.top()<<" ";
		num.pop();
	}
	
	cout<<"\n";
	
	for(int i=0;i<n;i++){
		cout<<name.front()<<" ";
		name.pop();
	}
}
