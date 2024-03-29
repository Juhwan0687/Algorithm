#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	
	vector<int> v;
	
	for(int i=0;i<n;i++){
		int a;
		
		cin>>a;
		
		v.push_back(a);
	}
	
	sort(v.begin(),v.end());
	
	v.erase(unique(v.begin(),v.end()),v.end());
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
