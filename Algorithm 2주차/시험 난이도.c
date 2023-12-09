#include <stdio.h>

int main(){
	int stud,score=0,i,a;
	
	scanf("%d",&stud);
	
	for(i=1;i<=stud;i++){
		scanf("%d",&a);
		score+=a;
	}
	
	if(score/stud>=80){
		printf("Easy");
		return 0;
	}
	else if(score/stud>=60){
		printf("Normal");
		return 0;
	}
	else{
		printf("Hard");
		return 0;
	}
}
