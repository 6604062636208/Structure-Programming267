#include <stdio.h>

void printBinary(int num) {
    printf("0b");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) n = 0;
    if (n > 255) n = 255;

    int result1 = n & ~(1 << 0) & ~(1 << 2);  

    int result2 = n | (1 << 3) | (1 << 5);    

    int result3 = n ^ (1 << 1);               

    int result4 = n;

    printf("%d ", result1);
    printBinary(result1);
    printf("\n");

    printf("%d ", result2);
    printBinary(result2);
    printf("\n");

    printf("%d ", result3);
    printBinary(result3);
    printf("\n");

    printf("%d ", result4);
    printBinary(result4);
    printf("\n");

    return 0;
}

