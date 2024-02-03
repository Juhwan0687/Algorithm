#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	
	pair<int,int> score[n];
	
	for(int i=0;i<n;i++){
		int t,a;
		
		cin>>t>>a;
		
		score[i]=make_pair(t,a);
	}
	
	int winner=0;
	
	for(int i=0;i<n;i++){
		if(score[winner]<score[i]){
			winner=i;
		}
	}
	
	cout<<winner+1;
}
