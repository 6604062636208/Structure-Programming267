#include <stdio.h>
#include <stdlib.h>

void Load_Matrix(char *filename, double M[][10], int *row, int *col);
void Print_Matrix(char *name, double M[][10], int row, int col);
void Multiply_Matrix(double M1[][10], int row1, int col1, double M2[][10], int row2, int col2, double M3[][10], int *row3, int *col3);

void main()
{
    double MA[10][10], MB[10][10], MC[10][10];
    int rowa, cola, rowb, colb, rowc, colc;
    
    Load_Matrix("MA.TXT", MA, &rowa, &cola);
    printf("Matrix A:\n");
    Print_Matrix("A", MA, rowa, cola);
    
    Load_Matrix("MB.TXT", MB, &rowb, &colb);
    printf("Matrix B:\n");
    Print_Matrix("B", MB, rowb, colb);
    
    if (cola == rowb) {
        Multiply_Matrix(MA, rowa, cola, MB, rowb, colb, MC, &rowc, &colc);
        printf("Result of multiplication (Matrix C):\n");
        Print_Matrix("C", MC, rowc, colc);
    } else {
        printf("Error can't multiply Matrix\n");
    }
}

void Load_Matrix(char *filename, double M[][10], int *row, int *col)
{
    FILE *infile;
    int i, j;
    
    infile = fopen(filename, "r");
    
    if (infile == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }
    
    fscanf(infile, "%d %d", row, col);
    
    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            fscanf(infile, "%lf", &M[i][j]);
        }
    }
    
    fclose(infile);
}

void Print_Matrix(char *name, double M[][10], int row, int col)
{
    int i, j;
    
    printf("Matrix %s (%dx%d):\n", name, row, col);
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%8.2f ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void Multiply_Matrix(double M1[][10], int row1, int col1, double M2[][10], int row2, int col2, double M3[][10], int *row3, int *col3)
{
    int i, j, k;
    if (col1 != row2) {
        printf("Error: Cannot multiply matrices. Dimension mismatch.\n");
        return;
    }
    *row3 = row1;
    *col3 = col2;
    
    for (i = 0; i < *row3; i++) {
        for (j = 0; j < *col3; j++) {
            M3[i][j] = 0;
            for (k = 0; k < col1; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}



