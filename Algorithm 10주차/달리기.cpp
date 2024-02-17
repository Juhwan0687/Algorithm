#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n,a;
	
	cin>>n;
	
	pair<int,int> run[n];
	pair<int,int> n1=make_pair(-1,-1);
	
	for(int i=0;i<n;i++){
		cin>>run[i].first>>a;
		
		run[i].second=5000-a;
		
		if(run[i]>n1){
			n1=run[i];
		}
	}
	
	int answer=0;
	
	for(int i=0;i<n;i++){
		answer+=n1.first-run[i].first;
	}
	
	cout<<"\n"<<answer+n1.second;
}
