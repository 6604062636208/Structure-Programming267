#include <stdio.h>

int main(){
	int n, num, sum;
	printf("Enter limits : ");
	scanf("%d", &n);
	printf("Perfect number between 1 to %d are:\n", n);
	for(num=1; num<=n; num++){
		sum = 0;
		for(int i=1; i<=num / 2; i++){
			if(num % i == 0){
				sum += i;
			}
		}
		if(sum == num && num != 0){
			printf("%d\n", num);
		}
	}
	return 0;
}
