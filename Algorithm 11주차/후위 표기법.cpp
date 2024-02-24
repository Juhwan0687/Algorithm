#include <iostream>
#include <stack>
using namespace std;

int main(){
	char str[101];
	
	cin>>str;
	
	stack<int> math;
	
	for(int i=0;str[i];i++){
		if('0'<=str[i]&&str[i]<='9'){
			math.push(str[i]-'0');
		}
		
		else{
			int a=math.top();
			math.pop();
			
			int b=math.top();
			math.pop();
			
			if(str[i]=='+'){
				math.push(a+b);
			}
			
			else{
				math.push(b-a);
			}
		}
	}
	
	cout<<math.top();
}
