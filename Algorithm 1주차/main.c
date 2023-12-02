#include <stdio.h>

int main(){
	char C; long long L; int I; double D; char S[101];
	
	scanf("%c %d %lld %lf %s",&C,&I,&L,&D,S);
	printf("%s %lf %lld %d %c",S,D,L,I,C);
	
	return 0;
}
