#include <stdio.h>

int main(){
	int end, isprime;
	printf("Find prime 1 to : ");
	scanf("%d", &end);
	printf("All prime number between 1 to %d are:\n", end);
	for(int i=2; i<=end; i++){
		isprime = 1;
		for(int j=2; j<=i/2; j++){
			if(i%j == 0){
				isprime = 0;
				break;
			}
		}
		if(isprime == 1){
			printf("%d, ", i);
		}
	}
	return 0;
}




