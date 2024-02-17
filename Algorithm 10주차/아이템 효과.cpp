#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	
	pair<int,double> item[n];
	
	for(int i=0;i<n;i++){
		cin>>item[i].first>>item[i].second;
	}
	
	int num,weight;
	double speed;
	
	cin>>num>>weight>>speed;
	
	item[num-1].first=weight;
	item[num-1].second=speed;
	
	int suma=0;
	double sumb=1;
	
	for(int i=0;i<n;i++){
		suma+=item[i].first;
		sumb*=item[i].second;
	}
	
	int j=suma*sumb;
	
	cout<<"\n"<<j;
}
