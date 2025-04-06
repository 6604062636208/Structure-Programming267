#include <stdio.h>

int sum_recursive(int n) {
    if (n == 1)
        return 1;
    return n + sum_recursive(n - 1);
}

int main(){
	int n_numbers;
    scanf("%d", &n_numbers);
    printf("%d", sum_recursive(n_numbers));
	return 0;
}


