#include <iostream>

int main(){
	int x,y,a;
	
	scanf("%d %d",&x,&y);
    
    printf("%d.",x/y);
	x%=y;
	
	for(int i=0;i<9;i++){
		x*=10;
        printf("%d",x/y);
		a=x/y;
		if(x%y==0){
			break;
		}
		x-=(x/y)*y;
	}
}
