//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n;
//    if (scanf("%d", &n) != 1 || n <= 1) {
//        printf("Error\n");
//        return 1;
//    }
//    double heights[n];
//    double sum = 0.0, mean;
//    for (int i = 0; i < n; i++) {
//        if (scanf("%lf", &heights[i]) != 1) {
//            printf("Error: Invalid input.\n");
//            return 1;
//        }
//        sum += heights[i];
//    }
//    mean = sum / n;
//    double sumSquareDiff = 0.0;
//    for (int i = 0; i < n; i++) {
//        double diff = heights[i] - mean;
//        sumSquareDiff += diff * diff;
//    }
//    double variance = sumSquareDiff / (n - 1);
//    double sd = sqrt(variance);
//    printf("%.2f\n", sd);
//    return 0;
//}
#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Error\n");
        return 1;
    }

    double *heights = (double*)malloc(n * sizeof(double));
    if (heights == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    double sum = 0.0, mean;
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &heights[i]) != 1) {
            printf("Error: Invalid input.\n");
            free(heights); 
            return 1;
        }
        sum += heights[i];
    }

    mean = sum / n;
    double sumSquareDiff = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = heights[i] - mean;
        sumSquareDiff += diff * diff;
    }

    double variance = sumSquareDiff / (n - 1);
    double sd = sqrt(variance);
    printf("%.2f\n", sd);

    free(heights); 
    return 0;
}

