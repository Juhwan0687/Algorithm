#include <iostream>

int main(){
	char str[1001];
	
	scanf("%s",&str);
	
	int cnt=0;	
	
	while(str[cnt]!='\0'){
		if('A'<=str[cnt]&&str[cnt]<='Z'){
			str[cnt]+=32;
		}		
		cnt++;
	}
	
	int c[26]={0};
	
	for(int i=0;i<=cnt-1;i++){
		c[str[i]-'a']++;
	}
	
	printf("\n");
	
	for(int i='A';i<='Z';i++){
		printf("%c ",i);
	}
	
	printf("\n");
	
	for(int i=0;i<=25;i++){
		printf("%d ",c[i]);
	}
}
