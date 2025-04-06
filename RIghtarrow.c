#include <stdio.h>

int main() {
    int rows1, r, c;
    printf("Enter number of rows to print the Right Arrow Pattern: ");
    scanf("%d", &rows1);

    printf("The Right Arrow Pattern is:\n");
    for (r = 1; r < rows1; r++) {
        for (c = 1; c <= (2 * r - 2); c++) {
            printf(" ");
        }
        for (c = r; c <= rows1; c++) {
            printf("*");
        }
        printf("\n");
    }
    for (r = 1; r <= rows1; r++) {
        for (c = 1; c <= (2 * rows1 - 2 * r); c++) {
            printf(" ");
        }
        for (c = 1; c <= r; c++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}








