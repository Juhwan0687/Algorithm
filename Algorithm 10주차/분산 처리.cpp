#include <iostream>
using namespace std;

int main(){
	int t;
	
	scanf("%d",&t);
	
	int a,b,c=1;
	
	for(int i=0;i<t;i++){
		scanf("%d %d",&a,&b);
				
		for(int j=0;j<b;j++){
			c*=a;
			c%=10;
		}
		if(c==0){
			cout<<"10\n";
		}
		else{
			printf("%d\n",c);
		}
		
		c=1;
	}
	
	return 0;
}
