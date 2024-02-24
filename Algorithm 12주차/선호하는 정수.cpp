#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,b;
	
	cin>>n;
	
	b=0;
	
	vector<int> num;
	
	for(int i=0;i<n;i++){
		int a;
		
		cin>>a;
		
		num.push_back(a);
	}
	
	sort(num.begin(),num.end());
	
	int ans=num[0];
	int cnt=1;
	int max=0;
	for(int i=0;i<n-1;i++){
		if(num[i]==num[i+1]){
			cnt++;
		}
		else{
			cnt=1;
		}
		if(cnt>max){
			max=cnt;
			ans=num[i];
		}
	}
	cout<<ans;
}
