#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0 || r > MAX_SIZE || c > MAX_SIZE) {
        printf("Invalid matrix dimensions\n");
        return 1;
    }
    
    int matrix[MAX_SIZE][MAX_SIZE];
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
