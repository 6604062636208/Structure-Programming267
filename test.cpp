#include <iostream>
using namespace std;

//int sumArray(int A[], int n){
//	if(n==0)
//		return 0;
//	else 
//		return A[n-1] + sumArray(A, n-1);
//}
//
//int main(){
//	int A[] = {1,2,3,4,5};
//	int n = sizeof(A)/sizeof(A[0]);
//	cout << "Sum of Array is : " << sumArray(A,n) << endl;
//	return 0;
//}

int sum(int n){
	if(n==1)
		return 1;
	else 
		return (n*n*n) + sum(n-1);
}

int main(){
	int A[] = {1,2,3,4,5};
	int n = sizeof(A)/sizeof(A[0]);
	cout << "Sum is : " << sum(n) << endl;
	return 0;
}

















