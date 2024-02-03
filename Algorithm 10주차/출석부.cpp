#include <iostream>
#include <cstring>
using namespace std;

struct student{
	int id;
	int attend;
	int miss;
	string name;
};

int main(){
	int n;
	
	cin>>n;
	
	struct student stu[n];
	
	for(int i=0;i<n;i++){
		cin>>stu[i].id>>stu[i].name>>stu[i].attend>>stu[i].miss;
	}
	
	int m;
	
	cin>>m;
	
	string find[m];
	
	int s=n;
	
	for(int i=0;i<m;i++){
		cin>>find[i];
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(find[i]==stu[j].name){
				cout<<stu[j].id<<" "<<stu[j].attend<<" "<<stu[j].miss<<"\n";
				break;
			}
			else{
				s--;
			}
			if(s==0){
				cout<<"-1\n";
				break;
			}
		}
	}
}
