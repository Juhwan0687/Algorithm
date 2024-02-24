#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct score{
	int l;
	int e;
	int p;
};

bool cmp(score left,score right){
	if(left.l>right.l){
		return true;
	}
	else if(left.l==right.l){
		if(left.e>right.e){
			return true;
		}
		
		else if(left.e==right.e){
			return left.p>right.p;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}


int main(){
	int n;
	
	cin>>n;
	
	score score[n];
	
	for(int i=0;i<n;i++){
		cin>>score[i].l>>score[i].e>>score[i].p;
	}
	
	sort(score,score+n,cmp);
	
	cout<<"\n"; 
	
	for(int i=0;i<n;i++){
		cout<<score[i].l<<" "<<score[i].e<<" "<<score[i].p<<"\n";
	}
}
