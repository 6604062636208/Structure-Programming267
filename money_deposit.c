#include <stdio.h>

double savings_recursive(double p0, int n) {
    if (n == 0)
        return p0;
    return 1.05 * savings_recursive(p0, n - 1);
}

int main(){
	double p0 = 10000;
    int n = 30;
    printf("Deposits after %d years: %.2f baht\n", n, savings_recursive(p0, n));
	return 0;
}



