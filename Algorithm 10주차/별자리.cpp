#include <iostream>
using namespace std;

int main(){
	int n,m;
	
	cin>>n>>m;
	
	pair<int,int> star[n];
	pair<int,int> line[m];
	
	for(int i=0;i<n;i++){
		cin>>star[i].first>>star[i].second;
	}
	
	int sum=0;
	
	for(int i=0;i<m;i++){
		cin>>line[i].first>>line[i].second;
		
		sum+=(star[line[i].second-1].first-star[line[i].first-1].first)*(star[line[i].second-1].first-star[line[i].first-1].first)+(star[line[i].second-1].second-star[line[i].first-1].second)*(star[line[i].second-1].second-star[line[i].first-1].second);
	}
	cout<<"\n"<<sum;
}
