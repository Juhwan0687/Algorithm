#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n,cnt=0;
	
	char word[100001];
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>word;
		
		stack<char> str;
		
		for(int j=0;word[j];j++){
			if(str.empty()){
				str.push(word[j]);
			}
			
			else if(word[j]==str.top()){
				str.pop();
			}
			
			else{
				str.push(word[j]);
			}
		}
		
		if(str.empty()){
			cnt++;
		}
	}
	
	cout<<"\n"<<cnt;
} 
