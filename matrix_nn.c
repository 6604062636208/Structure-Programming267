//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int matrix[n][n];
//    for (int i = 0; i < n; i++) {
//        matrix[0][i] = i + 1;
//    }
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            matrix[i][j] = matrix[i - 1][(j + 1) % n];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int Matrix[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &Matrix[i][j]);
		}
	}
	int max = -9999, second_max = -9999;
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (Matrix[i][j] > max) {
                second_max = max;
                max = Matrix[i][j];
            } else if (Matrix[i][j] > second_max && Matrix[i][j] < max) {
                second_max = Matrix[i][j];
            }
        }
    }
    printf("%d\n", second_max);
    return 0;
}

