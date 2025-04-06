#include <stdio.h>

int Sumnum(int n);

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", Sumnum(n));
	return 0;
}

int Sumnum(int n){
	if(n == 1)
		return 1;
	return n + Sumnum(n-1);
}
