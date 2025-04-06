#include <stdio.h>

void printPlusSign(int n) {
    int i, j;
    int mid = n / 2;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == mid || j == mid) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
	int n;
	scanf("%d", &n);
	printPlusSign(n);
	return 0;
}



