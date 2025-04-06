//#include <stdio.h>
//
//int main() {
//    int a, b, c, d;      
//    char grade[3];       
//    
//    do {
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//        if (a == -1 || b == -1 || c == -1 || d == -1) {
//            break;
//        }
//        int total = a + b + c + d;
//        if (total >= 80) {
//            sprintf(grade, "A");
//        } else if (total >= 75) {
//            sprintf(grade, "B+");
//        } else if (total >= 70) {
//            sprintf(grade, "B");
//        } else if (total >= 65) {
//            sprintf(grade, "C+");
//        } else if (total >= 60) {
//            sprintf(grade, "C");
//        } else if (total >= 55) {
//            sprintf(grade, "D+");
//        } else if (total >= 50) {
//            sprintf(grade, "D");
//        } else {
//            sprintf(grade, "F");
//        }
//        printf("%s\n", grade);
//    } while (1);
//    
//    return 0;
//}


//#include <stdio.h>
//
//int power(int base, int n){
//	int num = 1;
//	for(int i=1; i<=n; i++){
//		num = base*num;
//	}
//	return num;
//}
//
//int main(){
//	int base, n;
//	printf("Input base and n : ");
//	scanf("%d %d", &base, &n);
//	int result = power(base, n);
//	printf("result is : %d\n", result);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char name[20] = "kongruksiam";
//	char copyName[20];
//	strcpy(copyName, name);
////	strcat(copyName, "studio");
//	printf("%s\n", name);
//	printf("%s\n", copyName);
//	if(strcmp(copyName, name) == 0){
//		printf("Equal\n");
//	} else {
//		printf("Not Equal\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main(){
	int number = 10;
	int *p1 = &number;
	printf("value = %d\n", number); //value
	printf("address = %p\n", &number); //address
	printf("pointer address = %p\n", p1); //address
	printf("pointer value = %d\n", *p1); //value 
	
	char letter = 'A';
	char *p2 = &letter;
	printf("value = %c\n", letter); //value
	printf("address = %p\n", &letter); //address
	printf("pointer address = %p\n", p2); //address
	printf("pointer value = %c\n", *p2); //value
	
	return 0;
}
