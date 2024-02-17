#include <iostream>
using namespace std;

struct information{
	int onum;
	int mnum;
	int size;
	int cost;
};

int cnt=0;

int main(){
	int n,m;
	
	cin>>n;
	
	struct information info[n];
	
	for(int i=0;i<n;i++){
		cin>>m;
		
		switch(m){
			case 0:
				cin>>info[cnt].onum>>info[cnt].mnum>>info[cnt].size>>info[cnt].cost;
				cnt++;
				break;
			
			case 1:
				int an,nb,ch;
				cin>>an>>nb>>ch;
				
				for(int j=0;j<n;j++){
					if(info[j].onum==an){
						switch(nb){
							case 0:
								info[j].onum=ch;
								break;
							
							case 1:
								info[j].mnum=ch;
								break;
								
							case 2:
								info[j].size=ch;
								break;
							
							case 3:
								info[j].cost=ch;
								break;
						}
						break;
					}
				}
				break;
				
			case 2:
				int a;
				cin>>a;
				
				for(int j=0;j<n;j++){
					if(info[j].onum==a){
						cout<<"\n"<<info[j].onum<<" "<<info[j].mnum<<" "<<info[j].size<<" "<<info[j].cost<<"\n";
						break;
					}
				}
				break;
		}
	}
}
