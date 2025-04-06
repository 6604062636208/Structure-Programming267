#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);
        if (is_prime(number)) {
            printf("y\n");
        } else {
            printf("n\n");
        }
    }
    return 0;
}


