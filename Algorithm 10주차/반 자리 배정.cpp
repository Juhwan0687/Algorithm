#include <iostream>
#include <utility>
using namespace std;

struct classroom{
	int s;
	int h;
};

int main(){
	int n,m;
	
	cin>>n>>m;
	
	struct classroom loc[m][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>loc[j][i].s>>loc[j][i].h;
		}
	}
	
	pair<int,int> s1;
	pair<int,int> s2;
	
	cin>>s1.first>>s1.second;
	cin>>s2.first>>s2.second;
	
	s1.first--;
	s1.second--;
	s2.first--;
	s2.second--;
	
	pair<int,int> p1=make_pair(loc[s1.second][s1.first].s,loc[s1.second][s1.first].h);
	pair<int,int> p2=make_pair(loc[s2.second][s2.first].s,loc[s2.second][s2.first].h);
	
	loc[s1.second][s1.first].s=p2.first;
	loc[s1.second][s1.first].h=p2.second;
	loc[s2.second][s2.first].s=p1.first;
	loc[s2.second][s2.first].h=p1.second;
	
	cout<<"\n";
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<loc[j][i].s<<" "<<loc[j][i].h<<" ";
		}
		cout<<"\n";
	}
}
