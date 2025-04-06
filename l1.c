#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float average = 0 , SD = 0, sum = 0, sum1 = 0, variance;
	scanf("%d", &n);
	int A[n];
	for(int i=0; i<n; i++){
		scanf("%d", &A[i]);
		sum = sum + A[i];
	}
	average = sum / n;
	int max = A[0], min = A[0];
	for(int i=0; i<n; i++){
		if(A[i] > max){
		max = A[i];
		} else {
		min = A[i];
		}
	}
	for(int i=0; i<n; i++){
		sum1 = sum1 + pow((A[i] - average), 2);
	}
	variance = sum1 / n;
	SD = sqrt(variance);
	printf("Average : %.2f\n", average);
	printf("Maximum : %d\n", max);
	printf("Minimum : %d\n", min);
	printf("Standard Deviation : %.2f\n", SD);
}






