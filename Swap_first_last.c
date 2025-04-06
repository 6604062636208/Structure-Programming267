#include <stdio.h>
int main(){
	int n, count = 0, n1, mul = 1, i, first, last, n2, n3;
	printf("Input an digits number : ");
	scanf("%d", &n);
	n1 = n;
	n2 = n;
	first = n;
	last = n;
	while(n != 0){
		count++;
		n /= 10;
	}
	for(i=0; i<count-1; i++){
		mul *= 10;
	}
	while(first >= 10){
		first /= 10;
	}
	last = last%10;
	n3 = (last * mul) + (n2 % mul) - last + first;
	printf("swapped number : %d", n3);
	return 0;
}





