#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

vector<int> v;
int n;
queue<pair<int,int> > q;

int map[500][500];
bool check[500][500]={false};

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int cnt=0;

void bfs(int x,int y){ 
	q.push(make_pair(x,y));
	check[x][y]=true;
	cnt++;
	
	while(!q.empty()){
		int a=q.front().first;
		int b=q.front().second;
		q.pop();
		
		for(int i=0;i<4;i++){
			int ax=a+dx[i];
			int by=b+dy[i];
			
			if(0<=ax&&0<=by&&ax<n&&by<n&&map[ax][by]==1&&check[ax][by]==false){
				q.push(make_pair(ax,by));
				check[ax][by]=true;
				cnt++;
			}
		}
	}
	v.push_back(cnt);
	cnt=0;
}
	
int main(){	
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&map[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]==1&&check[i][j]==false){
				bfs(i,j);
			}
		}
	}
	
	sort(v.begin(),v.end());
	
	cout<<v.size()<<"\n";
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"\n";
	}
}
