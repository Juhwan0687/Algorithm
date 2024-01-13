#include <iostream>

int main(){
	char str[1001];
	
	scanf("%s",&str);
	
	int result[26];
	
	for(int i=0;i<=25;i++){
		result[i]=-1;
	}
	
	printf("\n");
	
	for(int i='A';i<='Z';i++){
		printf(" %c ",i);
	}
	
	printf("\n");
	
	int cnt=0;
	
	for(int i='a';i<='z';i++){
		cnt=0;
		while(str[cnt]!='\0'){
			if(str[cnt]==i){
				result[i-'a']=cnt;
				break;
			}
			cnt++;
		}
	}
	
	for(int i=0;i<=25;i++){
		printf("%2d ",result[i]);
	}
}
