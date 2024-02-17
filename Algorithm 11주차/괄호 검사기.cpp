#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<char> s;
	
	char str[1000001];
	
	cin>>str;
	
	for(int i=0;str[i];i++){
		if(str[i]=='('||str[i]=='{'||str[i]=='['){
			s.push(str[i]);
		}
		else{
			if(s.empty()){
				cout<<"0";
				return 0;
			}
			else if(s.top()!='('&&str[i]==')'){
				cout<<"0";
				return 0;
			}
			else if(s.top()!='{'&&str[i]=='}'){
				cout<<"0";
				return 0;
			}
			else if(s.top()!='['&&str[i]==']'){
				cout<<"0";
				return 0;
			}
			s.pop();
		}
	}
	if(s.empty()){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}
