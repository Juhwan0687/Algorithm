#include <iostream>
#include <cstring>
using namespace std;

char board[51]={0};

int move(int now){
	if(now<1){
		return 1;
	}
	else if(now>50){
		return 50;
	}
	else if(board[now]==0){
		return now;
	}
	int next;
	if('a'<=board[now]&&board[now]<='z'){
		next=now-(board[now]-'a'+1);
	}
	else{
		next=now+(board[now]-'A'+1);
	}
	return move(next);
}

int main(){
	int n,d;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		char c;
		cin>>m>>c;
		board[m]=c;
	}
	cin>>d;
	
	cout<<move(d+1);
}
