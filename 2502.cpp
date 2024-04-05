#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int d,k,a=1,b=1;
	
	cin>>d>>k;
	
	vector<int> v;
	
	while(1){
		v.push_back(a);
		v.push_back(b);
	
		for(int i=2;i<d;i++){
			v.push_back(v[i-1]+v[i-2]);
		}
		
		if(v[d-1]==k){
			cout<<a<<b;
			
			return 0;
		}
		
		if()
	}
}
