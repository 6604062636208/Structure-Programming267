#include <stdio.h>

int minArray(int arr[], int n);
int maxArray(int arr[], int n);
int sumArray(int arr[], int n);

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int result1 = minArray(arr, n);
	printf("minArray is : %d\n", result1);
	int result2 = maxArray(arr, n);
	printf("maxArray is : %d\n", result2);
	int sumarr = sumArray(arr, n);
	printf("sumArray is : %d\n", sumarr);
	return 0;
}

int minArray(int arr[], int n){
	int min = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int maxArray(int arr[], int n){
	int max = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int sumArray(int arr[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	return sum;
}




