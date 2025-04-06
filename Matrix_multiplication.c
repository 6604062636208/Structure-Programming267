#include <stdio.h>

void AskSizeMatrix(int *row, int *col);
int CheckPossible(int rowA, int colA, int rowB, int colB);
void EnterMatrix(int Matrix[5][5], int row, int col);
void DisplayMatrix(int Matrix[5][5], int row, int col);
void MultiplyMatrix(int A[5][5], int rowA, int colA, int B[5][5], int rowB, int colB, int C[5][5]);

int main() {
	// initial variables
    int a[5][5], b[5][5], c[5][5];
    int rowA, colA, rowB, colB;
    
    // Enter the dimension of two matrixs
    printf("Enter the row and column of first matrix: ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter the row and column of second matrix: ");
    scanf("%d %d", &rowB, &colB);

	// Check if these two matrix can be multipled
    if (!CheckPossible(rowA, colA, rowB, colB)) {
        return 1;
    }

	// Enter values to matrix#1
    printf("\nEnter elements for first matrix:\n");
    EnterMatrix(a, rowA, colA);
    // Enter values to matrix#2
    printf("\nEnter elements for second matrix:\n");
    EnterMatrix(b, rowB, colB);
    
	// Show the first matrix
    printf("\nFirst Matrix:\n");
    DisplayMatrix(a, rowA, colA);
    // Show the second matrix
    printf("\nSecond Matrix:\n");
    DisplayMatrix(b, rowB, colB);
    
	// Multipy 2 matrix
    MultiplyMatrix(a, rowA, colA, b, rowB, colB, c);
    
	// display the result matrix C
    printf("\nResultant Matrix (Multiplication):\n");
    DisplayMatrix(c, rowA, colB);

    return 0;
}

int CheckPossible(int rowA, int colA, int rowB, int colB) {
	// Check if these two matrix can be multipled
    if (colA != rowB) {
        printf("Matrix multiplication is not possible.\n");
        printf("Column of first matrix must be same as row of second matrix.\n");
        return 0;
    }
    return 1;
}

void EnterMatrix(int Matrix[5][5], int row, int col) {
	// Enter values to matrix
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &Matrix[i][j]);
        }
    }
}

void DisplayMatrix(int Matrix[5][5], int row, int col) {
	// Show the element of matrix
	// display the result matrix C
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}

void MultiplyMatrix(int A[5][5], int rowA, int colA, int B[5][5], int rowB, int colB, int C[5][5]) {
    int i, j, k, sum;
    
    // Initial Matrix C to be 0
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            C[i][j] = 0;
        }
    }
	
	// Multipy 2 matrix
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            sum = 0;
            for (k = 0; k < colA; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

