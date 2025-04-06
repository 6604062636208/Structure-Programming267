#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the input value
    // Check if the input is odd
    if (n % 2 == 1) {
        // Top half of the diamond
        for (int i = 1; i <= n; i += 2) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
        // Bottom half of the diamond
        for (int i = n - 2; i > 0; i -= 2) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        // If input is even, generate a pattern as specified earlier
        // Top half
        for (int i = 2; i <= n; i += 2) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
        // Bottom half
        for (int i = n - 2; i > 0; i -= 2) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}



