//#include <stdio.h>
//
//int fibonacci(int n){
//	if(n==0){
//		return 0;
//	} else if(n==1){
//		return 1;
//	} else {
//		return fibonacci(n-1) + fibonacci(n-2);
//	}
//}
//
//int main(){
//	printf("%d", fibonacci(20));
//	return 0;
//}

//#include <stdio.h>
//
//int fibonacci(int n);
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	int result = fibonacci(n);
//	printf("%d", result);
//	return 0;
//}
//
//int fibonacci(int n){
//	if(n == 1)
//		return 1;
//	if(n == 2)
//		return 1;
//		
//	int L = fibonacci(n-1);
//	int R = fibonacci(n-2);
//	
//	int total = L + R;
//	return total;
//}

//#include <stdio.h>
//
//int calculateParkingFee(int hours);
//
//int main() {
//    int hours;
//    scanf("%d", &hours);
//    int fee = calculateParkingFee(hours);
//    printf("%d", fee);
//    return 0;
//}
//
//int calculateParkingFee(int hours) {
//    if (hours == 1) {
//        return 10; 
//    } else if (hours == 2) {
//        return 20; 
//    } else if (hours == 3) {
//        return 40; 
//    } else {
//        return 40 + (hours - 3) * 20;
//        return calculateParkingFee(hours - 1) + calculateParkingFee(hours - 2);
//    }
//}

#include <stdio.h>

int CalculateParkingFee(int hours);

int main(){
	int hours;
	scanf("%d", &hours);
	int fee = CalculateParkingFee(hours);
	printf("%d", fee);
	return 0;
}

int CalculateParkingFee(int hours) {
	if(hours == 1)
		return 10;
	else if(hours == 2)
		return 20;
	else if(hours == 3)
		return 40;
	else 
		return 40 + (hours - 3) * 20;
}





