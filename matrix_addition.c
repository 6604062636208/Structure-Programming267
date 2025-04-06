#include <stdio.h>

int main(){
	int r, c, a[100][100], b[100][100], addtion[100][100], i, j;
	scanf("%d %d", &r, &c);
	
	for(i=0; i<r; ++i)
		for(j=0; j<c; ++j){
			scanf("%d", &a[i][j]);
	}
	for(i=0; i<r; ++i)
		for(j=0; j<c; ++j){
			scanf("%d", &b[i][j]);
	}
	for(i=0; i<r; ++i)
		for(j=0; j<c; ++j){
			addtion[i][j] = a[i][j] + b[i][j];
	}
	for(i=0; i<r; ++i)
		for(int j=0; j<c; ++j){
			printf("%d ", addtion[i][j]);
			if(j == c - 1) {
				printf("\n");
		}
	}
}
