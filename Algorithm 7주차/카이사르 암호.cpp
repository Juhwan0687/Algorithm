#include <iostream>

int main(){
	char str[1001];
	
	int n;
	
	scanf("%d",&n);
	
	scanf("%s",&str);
	
	int cnt=0;
	
	while(str[cnt]!='\0'){
		str[cnt]+=n;
		if(str[cnt]>'Z'){
			str[cnt]-=26;
		}
		printf("%c",str[cnt]);
		cnt++;
	}
}
