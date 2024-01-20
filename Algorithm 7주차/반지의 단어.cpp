#include <iostream>

int main(){
	int l;
	
	scanf("%d",&l);
	
	char s[l],s2[l];
	
	scanf("%s",&s);
	
	scanf("%s",&s2);
	
	int cnt[2]={0};
	
	for(int i=0;i<=l-1;i++){
		for(int j=0;j<=l-1;j++){
			if(s[i%l]==s2[j%l]){
				cnt[0]=i;
				cnt[1]=j;
				
				break;
			}
		}
		break;
	}
	
	int check=0,a=cnt[1];
	
	for(int i=cnt[0];i<=l+cnt[0]-1;i++){
		for(int j=a;j<=l+a-1;j++){
			if(s[i%l]==s2[j%l]){
				check++;
				a++;
				
				break;
			}
		}
	}
	
	printf("%d %d %d\n",cnt[0],cnt[1],check);
	
	if(check==l){
		printf("Yes");
		
		return 0;
	}
	
	else{
		printf("No");
		
		return 0;
	}
}
