#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	vector <pair<int,int> > v;
	
	int n,cnt=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		int a,b;
		
		cin>>a>>b;
		
		v.push_back(make_pair(a,b));
	}
	
	sort(v.begin(),v.end());
}
