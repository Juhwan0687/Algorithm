#include <iostream>
#include <cstring>
using namespace std;

struct bookshelf{
	string name;
	int genre;
	int bookn;
};

int main(){
	int n;
	
	cin>>n;
	
	struct bookshelf book[n];
	
	for(int i=0;i<n;i++){
		cin>>book[i].name>>book[i].genre>>book[i].bookn;
	}
	
	string find;
	
	cin>>find;
	
	for(int i=0;i<n;i++){
		if(book[i].name==find){
			cout<<"\n"<<book[i].genre<<" "<<book[i].bookn;
		}
	}
}
