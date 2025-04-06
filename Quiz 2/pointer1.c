#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#define N 5

// final examiniation structure programming
int main(){
	int* ptr1 = (int*)malloc(sizeof(int)*N);
	int* ptr2 = ptr1;
	
	for(int i=0; i<N; i++){
		*ptr2++ = i;
	}
	*ptr2--;
	for(int i=0; i<N; i++){
		printf("%d ", *ptr2--); // change to printf("%d ", *ptr);
	}
	printf("\n");
	return 0;
}

// write code 
//int mysterysumnum(int *a, int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] % 2 == 0)
//            sum += a[i];
//    }
//    return sum;
//}


//char *reverse(char *X) {
//    int left = 0;
//    int right = strlen(X) - 1;
//    while (left < right) {
//        char temp = X[left];
//        X[left] = X[right];
//        X[right] = temp;
//        left++;
//        right--;
//    }
//    return X;
//}
//
//int main() {
//    char str[512];
//    gets(str);
//    printf("%s\n", reverse(str));
//    return 0;
//}

//int main() {
//    int arr[] = {5, 7, 8, 77, 88, 25, 14, 66};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    for (int limit = size - 1; limit > 0; limit--) {
//    	for (int i = 0; i < limit; i++) {
//            if (arr[i] > arr[i + 1]) {
//                int temp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


