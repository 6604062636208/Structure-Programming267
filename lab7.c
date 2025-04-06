#include <stdio.h>

/* function prototype */
int f1(int);
float f2(int *, int);

/* global variable */
int a = 10;
int b = 5;

int f1(int a){
	return a - 1;
}
float f2( int *k, int y ){
	*k = f1(a);
	a *= 5;	
	y = f1(a);
	return *k + y + 0.5;
}
int main(){
	int x, y;
	x = f1(a + b);
	y = f1(b);
	printf("%d\n", x);
	printf("%.2f\n", f2(&x, y));
	printf("%d\n", a);
	printf("%d\n", x);
	printf("%d\n", y);
	getchar();
	return 0;
}
