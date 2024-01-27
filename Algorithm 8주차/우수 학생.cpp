#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	int n,check=0,pos=0;
	
	string name;
	
	cin>>n;
	
	vector<string> best;
	
	for(int i=0;i<n;i++){
		check=0;
		pos=0;
		
		cin>>name;
		
		for(int j=0;j<best.size();j++){
			if(name!=best[j]){
				check++;
			}
			else{
				pos=j;
			}
		}
		
		if(check==best.size()&&best.size()==3){
			best[0]=best[1];
			best[1]=best[2];
			best[2]=name;
		}
		
		else if(check==best.size()&&best.size()!=3){
			best.push_back(name);
		}
		
		else if(check!=best.size()){
			switch(best.size()){
				case 3:
					best[pos%3]=best[(pos+1)%3];
					best[2]=name;
					break;
				case 2:
					best[0]=best[1];
					best[1]=name;
					break;
			}
		}
		
		printf("\n");
		
		for(int k=0;k<best.size();k++){
			cout<<best[k]+" ";
		}
		printf("\n\n");
	}
} 
