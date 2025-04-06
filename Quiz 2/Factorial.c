#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);  
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d! = ", num);
    for(int i = num; i > 0; i--){
    	printf("%d", i);
    	if(i > 1){
    		printf(" x ");
		}
	}
	printf(" = %d\n", factorial(num));
    return 0;
}

