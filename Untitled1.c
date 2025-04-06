//#include <stdio.h>
//#include <ctype.h>
//
//int myString(char *str);
//void printReverseString(char *str);
//void Countdigit(char *str);
//
//int main(){
////	char str[100] = "Hello World!";
//	char str[100];
//	scanf("%[^\n]", str); // space value 
////	scanf("%s", str); // Not space value 
////	fgets(str, sizeof(str), stdin); // space value 
//	
//	printf("Length of \"%s\" is %d\n", str, myString(str));
//	
//	printf("Reverese of string is: \"");
//	printReverseString(str);
//	printf("\"\n");
//	printf("The count of Digit is : ");
//	Countdigit(str);
//	return 0;
//}
//
//int myString(char *str){
//	int Length = 0, i;
////	for(i=0; str[i] != '\0'; i++){
////		Length++;
////	}
//	while(*(str++) != '\0'){
//		Length++;
//	}
//	return Length;
//}
//
//void printReverseString(char *str){
//	int l = myString(str); //want address not value in str
//	for(int i = l-1; i>=0; i--){
//		printf("%c", str[i]);
//	}
//}
//
//void Countdigit(char *str){
//	int count = 0;
//	for(int i=0; str[i] != '\0'; i++){
//		if(isdigit(str[i])){
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char *strev(char *s) {
//    int length = strlen(s);
//    char *r = malloc((length + 1) * sizeof(char));
//    int i, j;
//    for (i = length - 1, j = 0; i >= 0; i--, j++) { 
//        r[j] = s[i];
//    }
//    r[length] = '\0';
//    return r;
//}
//
//int main() {
//    char str[512];
//    fgets(str, sizeof(str), stdin); 
//    str[strcspn(str, "\n")] = '\0';
//    printf("%s", strev(str));
//    return 0;
//}

//#include <stdio.h>
//
//char *strev(char *s){
//    static char r[512];
//    int length = 0;
//    while(*(s + length) != '\0'){
//        length++;
//    }
//    for(int i = 0; i < length; i++){
//        r[i] = s[length-1-i];
//    }
//    r[length] = '\0'; 
//    return r;
//}
//
//int main(){
//    char str[512];
//    gets(str);
//    printf("%s", strev(str));
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int min(int a, int b) {
//    return (a < b) ? a : b;
//}
//
//int f(int x, int y) {
//    if (y == 0) {
//        return 1;
//    }
//    if (x == y) {
//        return x + y;
//    }
//    if (x > 0 && y > 0) {
//        return min(f(x - 1, y - 1), f(x - 1, y));
//    }
//}
//
//int main() {
//    int x = 6;
//    int y = 3;
//    int result = f(x, y);
//    printf("f(%d, %d) = %d\n", x, y, result);
//    return 0;
//}

//#include <stdio.h>
//
//int x(int a) {
//    int sum = 0; 
//    while (a > 0) {
//        int y = a % 10; 
//        sum += y;       
//        a = a / 10;     
//    }
//    return sum;
//}
//
//int main() {
//    int a = 123;
//    int result = x(a);
//    printf("Sum of digits of %d = %d\n", a, result);
//    return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int num = 9, num2;
//	float pi = 3.14, x;
//	char ch = 'A';
//	int *ptr_num = &num;
//	float *ptr_pi = &pi;
//	char *ptr_ch = &ch;
//	num2 = *ptr_num;
//	x = *ptr_pi;
//	printf("num2 = %d\n", num2);
//	printf("x = %.2f\n", x);
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int *p, q;
//	q = 100;
//	p = &q;
//	*p = 200;
//	printf("pointer value : %d\n", *p);
//	printf("address pointer : %p\n", p);
//	printf("pointer value : %d\n", q);
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int height[100], num=0, count, a=0, b=0, c=0, d=0;
//	int *ptr_height;
//	ptr_height = height;
//	printf("Enter number of people:");
//	scanf("%d", &num);
//	for(count = 0; count < num; count++){
//		printf("Enter high of people number[%d]:", count+1);
//		scanf("%d", &height[count]);
//	}
//	for(count = 0; count<num; count++){
//		if(*(ptr_height+count) < 161){
//			a++;
//		}
//		else if(*(ptr_height+count) <= 170){
//			b++;
//		}
//		else if(*(ptr_height+count) <= 180){
//			c++;
//		}
//		else if(*(ptr_height+count) > 180){
//			d++;
//		}
//		else {
//			return 0;
//		}
//	}
//	printf("The high of people in \nGroup A=%d\nGroup B=%d\nGroup C=%d\nGroup D=%d", a, b, c, d);
//	return 0;
//}

#include <stdio.h>

void grade(int point);

int main(){
	int n;
	struct subject{
		int id, mark_com, mark_cal, mark_phy;
	}s[1000];
	struct subject *ptr_s;
	ptr_s = s;
	printf("Enter number of student :");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Enter id of student:%d", i+1);
		scanf("%d", &ptr_s->id);
		printf("Enter mark Com of student :%d", i+1);
		scanf("%d", &ptr_s->mark_com);
		printf("Enter mark Cal of student :%d", i+1);
		scanf("%d", &ptr_s->mark_cal);
		printf("Enter mark Phy of studen3t :%d", i+1);
		scanf("%d", &ptr_s->mark_phy);
		ptr_s++;
	}
	ptr_s = s;
	for(int i=0; i<n; i++){
		printf("Student id[%d]\n", ptr_s->id);
		printf("Grade of computer programming \n");
		grade(ptr_s->mark_com);
		printf("Grade of calculus \n");
		grade(ptr_s->mark_cal);
		printf("Grade of physics \n");
		grade(ptr_s->mark_phy);
		ptr_s++;
	}
	return 0;
}

void grade(int point){
	if(point >= 80) printf("Grade is A\n");
	else if(point >= 70) printf("Grade is B\n");
	else if(point >= 60) printf("Grade is C\n");
	else if(point >= 50) printf("Grade is D\n");
	else printf("Grade is F\n");
}


