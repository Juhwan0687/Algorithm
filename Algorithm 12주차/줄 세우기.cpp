#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,cnt=0;
	
	cin>>n;
	
	int height[n],height_ori[n];
	
	for(int i=0;i<n;i++){
		cin>>height[i];
		height_ori[i]=height[i];
	}
	
	sort(height,height+n);
	
	for(int i=0;i<n;i++){
		if(height[i]!=height_ori[i]){
			cnt++;
		}
	}
	
	cout<<"\n"<<cnt;
}
