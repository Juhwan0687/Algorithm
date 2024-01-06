#include <cstdio>

int f(int n);
int s(int n);
int t(int n);
int menu(int n,int m);

int main(){
	int n,m;
	
	scanf("%d %d",&n,&m);
	
	printf("%d",menu(n,m));
}

int menu(int n,int m){
	switch(m){
		case 1:
			return f(n);
		case 2:
			return s(n);
		case 3:
			return t(n);
	}
}

int f(int n){
	return (n-2)*(n+1)*n/2;
}

int s(int n){
	return (n*n*n)-((n-1)*(n-1)*(n-1));
}

int t(int n){
	return (3*n*n*n)-(n*n)-(3*n);
}
