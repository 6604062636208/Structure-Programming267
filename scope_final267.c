//#include <stdio.h>
//
//int main() {
//    int x[] = {1, 2, 3, 4, 5, 6, 7};
//    int b = 3;
//    int *c;
//    int *a1, *a2;
//
//    c = &x[2];  
//    a1 = &x[1]; 
//    a2 = &x[0]; 
//
//    printf("*a2 = %d\n", *a2); // 1
//    printf("*a2 + b = %d\n", *a2 + b); // 1 + 3 = 4
//    printf("x[*a2] = %d\n", x[*a2]); // x[1] = 2
//    printf("*(x + 4) = %d\n", *(x + 4)); // x[4] = 5
//    printf("*(c + b) = %d\n", *(c + b));
//
//    return 0;
//}

//#include <stdio.h>
//
//int fx(int *x, int *y, int z){
//	if(z==0){
//		*y = z;
//	} else if(x[z] > fx(x, y, z-1)){
//		*y = z;
//	}
//	printf("%d return %d\n", z, x[*y]);
//	return x[*y];
//}
//
//int main(){
//	int a[5] = {5,8,10,7,3};
//	int x = 4;
//	int m = fx(a, &x, x);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct student {
//    char name[60];
//    int score[3];
//    int total_score;
//};
//
//void read_data(struct student S[], const char *filename) {
//    FILE *fp = fopen(filename, "r");
//    if (fp == NULL) {
//        printf("Error opening file %s\n", filename);
//        exit(1);
//    }
//
//    for (int i = 0; i < 3; i++) {
//        fscanf(fp, "%s %d %d %d", S[i].name, &S[i].score[0], &S[i].score[1], &S[i].score[2]);
//        S[i].total_score = 0;  
//    }
//
//    fclose(fp);
//}
//
//void compute_total_score(struct student S[]) {
//    for (int i = 0; i < 3; i++) {
//        S[i].total_score = S[i].score[0] + S[i].score[1] + S[i].score[2];
//    }
//}
//
//void write_data(struct student S[], const char *filename) {
//    FILE *fp = fopen(filename, "w");
//    if (fp == NULL) {
//        printf("Error opening file %s\n", filename);
//        exit(1);
//    }
//
//    for (int i = 0; i < 2; i++) {
//        for (int j = i + 1; j < 3; j++) {
//            if (S[i].total_score < S[j].total_score) {
//                struct student temp = S[i];
//                S[i] = S[j];
//                S[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        fprintf(fp, "%s %d %d %d %d\n", S[i].name, S[i].score[0], S[i].score[1], S[i].score[2], S[i].total_score);
//    }
//
//    fclose(fp);
//}
//
//int main() {
//    struct student S[3];
//    const char *infile = "test.txt";
//    const char *outfile = "out.txt";
//
//    read_data(S, infile);
//    compute_total_score(S);
//    write_data(S, outfile);
//
//    printf("Data processed successfully. Check %s for results.\n", outfile);
//    return 0;
//}

//#include <stdio.h>
//
//int f(int x, int y) {
//    if (x == y) { 
//        return x + y;
//    } 
//    else if (y == 0) { 
//        return 1;
//    } 
//    else if (x > 0 && y > 0) { 
//        int min1 = f(x - 1, y - 1);
//        int min2 = f(x - 1, y);
//        return (min1 < min2) ? min1 : min2; 
//    return 0; 
//	}
//}
//
//int main() {
//    int result = f(6, 3);
//    printf("f(6, 3) = %d\n", result);
//    return 0;
//}

//#include <stdio.h>
//
//int main(){
//	char str[] = "Hello World";
//	char* ptr = str;
//	while(*ptr != '\0'){
//		printf("%c", *ptr);
//		ptr++;
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main(){
//	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	printf("%d\n", strlen(alphabet));
	char str1[] = "Hello";
	char str2[] = "Hi";
	if(strcmp(str1, str2) == 0){
		printf("Equal\n");
	} else {
		printf("Not Equal\n");
	}
//	printf("%d\n", strcmp(str1, str2));
//	char 
	return 0;
}
