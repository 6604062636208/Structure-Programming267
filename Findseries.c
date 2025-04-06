#include <stdio.h>

double FindSeries() {
    int n, i;
    double sum = 0.0;
    
    printf("\nEnter Value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum += ((i % 2) ? 1.0 : -1.0) / (2 * i - 1);
    }
    
    return sum;
}

int main() {
    double result = FindSeries();
    printf("Sum of the series: %.6lf\n", result);
    return 0;
}






