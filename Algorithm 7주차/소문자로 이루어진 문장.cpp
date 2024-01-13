#include <iostream>

int main(){
	char str[1001];
	
	scanf("%[^\n]",&str);
	
	int cnt=0;	
	
	while(str[cnt]!='\0'){
		if('A'<=str[cnt]&&str[cnt]<='Z'){
			printf("%c",str[cnt]+32);
		}
		else{
			printf("%c",str[cnt]);
		}
		
		cnt++;
	}
}
