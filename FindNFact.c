#include <stdio.h>

long int FindNFact() {
    long int nfact = 1, n, i;

    printf("\nEnter Value of n: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++) {
        nfact *= i;
    }

    return nfact;
}

int main() {
    long int result = FindNFact();
    printf("Factorial of n: %ld\n", result);
    return 0;
}



