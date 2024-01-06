#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int num,n[8];
	
	scanf("%d",&num);
	
	for(int i=1;i<=8;i++){
		n[i-1]=num%10;
		
		num-=num%10;
		num/=10;
	}
	
	sort(n,n+8);
	
	int cnt[9]={0};
	
	for(int i=0;i<=7;i++){
		switch(n[i]){
			case 0:
				cnt[0]++;
				break;
			case 1:
				cnt[1]++;
				break;
			case 2:
				cnt[2]++;
				break;
			case 3:
				cnt[3]++;
				break;
			case 4:
				cnt[4]++;
				break;
			case 5:
				cnt[5]++;
				break;
			case 6:
				cnt[6]++;
				break;
			case 7:
				cnt[7]++;
				break;
			case 8:
				cnt[8]++;
				break;
			case 9:
				cnt[6]++;
				break;
		}
	}
	
	int set=0;
	
	while(1){
		set++;
		cnt[0]--;
		cnt[1]--;
		cnt[2]--;
		cnt[3]--;
		cnt[4]--;
		cnt[5]--;
		cnt[6]-=2;
		cnt[7]--;
		cnt[8]--;
		if(cnt[0]<=0&&cnt[1]<=0&&cnt[2]<=0&&cnt[3]<=0&&cnt[4]<=0&&cnt[5]<=0&&cnt[6]<=0&&cnt[7]<=0&&cnt[8]<=0){
			printf("%d",set);
			return 0;
		}
	}
}
