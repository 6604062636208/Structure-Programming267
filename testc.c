//#include <stdio.h>
//
//int checkscore(char std[]);
//
//int main() {
//    int i;
//    char ans[8][10] = {
//        {'A','B','A','C','C','D','E','E','A','D'}, 
//        {'D','B','A','B','C','A','E','E','A','D'},
//        {'E','D','D','A','C','B','E','E','A','D'},
//        {'C','B','A','E','D','C','E','E','A','D'},
//        {'A','B','D','C','C','D','E','E','A','D'},
//        {'B','B','E','C','C','D','E','E','A','D'},
//        {'B','B','A','C','C','D','E','E','A','D'},
//        {'E','B','E','C','C','D','E','E','A','D'}
//    };
//    char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
//
//    for (i = 0; i < 8; i++) {
//        printf("std %d => %d\n", (i+1), checkscore(ans[i]));  
//    }
//
//    return 0;
//}
//
//int checkscore(char std[]) {
//    char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
//    int score = 0;
//    
//    for (int i = 0; i < 10; i++) {
//        if (std[i] == keys[i]) {
//            score++; 
//        }
//    }
//    
//    return score;
//}
//
//int countCorrectAnswers(char ans[8][10], char keys[10], int numStudents) {
//    int count = 0;
//    for (int i = 0; i < numStudents; i++) {
//        int score = checkscore(ans[i]);
//        if (score == 10) {
//            count++; 
//        }
//    }
//    return count;
//}
//
//int findHardestQuestion(char ans[8][10], char keys[10], int numQuestions, int numStudents) {
//    int minCorrect = numStudents;
//    int hardestQuestion = 0;
//
//    for (int i = 0; i < numQuestions; i++) {
//        int correctCount = 0;
//        for (int j = 0; j < numStudents; j++) {
//            if (ans[j][i] == keys[i]) {
//                correctCount++;
//            }
//        }
//
//        if (correctCount < minCorrect) {
//            minCorrect = correctCount;
//            hardestQuestion = i;
//        }
//    }
//
//    return hardestQuestion;
//}

//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//    char loginname[64];
//    char password[64];
//} account;
//
//typedef struct {
//    char stdID[16];
//    char nameSurname[25];
//    account stdACC;
//} hoststd;
//
//int checkLogin(char *login, char *passwd, hoststd cs[], int size);
//
//int main() {
//    hoststd cs[5] = {
//        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
//        {"66-040626-2686-10", "MR.B", {"user2", "passwd2"}},
//        {"66-040626-2686-11", "MR.C", {"user3", "passwd3"}},
//        {"66-040626-2686-12", "MR.D", {"user4", "passwd4"}},
//        {"66-040626-2686-13", "MR.E", {"user5", "passwd5"}}
//    };
//
//    char inputLogin[64], inputPassword[64];
//    int found = 0;
//
//    printf("Enter your username: ");
//    scanf("%s", inputLogin);
//
//    printf("Enter your password: ");
//    scanf("%s", inputPassword);
//
//    for (int i = 0; i < 5; i++) {
//        if (checkLogin(inputLogin, inputPassword, cs, 5)) {
//            printf("Welcome %s\n", inputLogin);
//            found = 1;
//            break;
//        }
//    }
//
//    if (!found) {
//        printf("Incorrect login or password\n");
//    }
//
//    return 0;
//}
//
//int checkLogin(char *login, char *passwd, hoststd cs[], int size) {
//    for (int i = 0; i < size; i++) {
//        if (strcmp(login, cs[i].stdACC.loginname) == 0 && strcmp(passwd, cs[i].stdACC.password) == 0) {
//            return 1;
//        }
//    }
//    return 0;
//}

#include <stdio.h>
#include <math.h>

typedef struct {
	char *name;
	int height;
	int weight;
	char gender;
} PERSON;

double bmi(int height, int weight){
	return weight / pow(height / 100.0, 2);
}

void demo(){
	PERSON p[] = {
		{"Fon", 170, 70, 'M'},
		{"Fah", 165, 55, 'F'},
		{"Noon", 175, 72, 'M'},
		{"Fai", 162, 48, 'F'},
		{"Fin", 169, 50, 'F'},
		{"Fun", 179, 70, 'M'},
	};
	int size = sizeof(p)/sizeof(p[0]);
	for(int i=0; i<size; i++){
		printf("%7s: height = %d, weight = %d, bmi = %.2f\n", p[i].name, p[i].height, p[i].weight, bmi(p[i].height, p[i].weight));
	}
}


int main(){
	demo();
	return 0;
}

//#include <stdio.h>
//
//void printHead(int w) {
//  for (int i = 0; i < w; i++) {
//    printf("* ");
//  }
//  printf("\n");
//}
//
//void printBody(int w, int h) {
//  for (int i = 0; i < h; i++) {
//    printf("* ");
//    for (int j = 0; j < w - 2; j++) {
//      printf("  ");
//    }
//    printf("*\n");
//  }
//}
//
//int main() {
//  int width, height;
//  scanf("%d %d", &width, &height);
//  printHead(width);
//  printBody(width, height - 2); 
//  printHead(width);
//  return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int findMax(int num[]);
//void addone(int number[], int add[]);
//void addtwo(int number[], int pos[], int x);
//void addthree(int number[], int pos[][2], int size);
//
//int main() {
//  int number[5] = {20, 50, 100, 99, 9};
//  int add[5] = {1, 2, 3, 4, 5};
//  int pos1[] = {1, 3, 4};
//  int pos2[][2] = {{0, 10}, {2, 20}, {4, 30}};
//  int max;
//  max = findMax(number);
//
//  printf("Original array:\n");
//  for (int i = 0; i < 5; i++) {
//    printf("number[%d] : %d\n", i, number[i]); 
//  }
//
//  addone(number, add);
//  printf("\nArray after addone:\n");
//  for (int i = 0; i < 5; i++) {
//    printf("number[%d] : %d\n", i, number[i]); 
//  }
//
//  addtwo(number, pos1, 5);
//  printf("\nArray after addtwo:\n");
//  for (int i = 0; i < 5; i++) {
//    printf("number[%d] : %d\n", i, number[i]); 
//  }
//
//  addthree(number, pos2, 3); 
//  printf("\nArray after addthree:\n");
//  for (int i = 0; i < 5; i++) {
//    printf("number[%d] : %d\n", i, number[i]); 
//  }
//
//  printf("\nMaximum of these number is %d\n", max);
//  return 0;
//}
//
//int findMax(int num[]) {
//  int maximum, i = 0;
//  maximum = num[i];
//
//  for (i = 0; i < 5; i++) {
//    if (num[i] > maximum) 
//		maximum = num[i];
//  }
//  return maximum;
//}
//
//void addone(int number[], int add[]) {
//  for (int i = 0; i < 5; i++) {
//    number[i] += add[i];
//  }
//}
//
//void addtwo(int number[], int pos[], int x) {
//  for (int i = 0; i < 3; i++) {
//    number[pos[i]] += x;
//  }
//}
//
//void addthree(int number[], int pos[][2], int size) { 
//  for (int i = 0; i < size; i++) {
//    number[pos[i][0]] += pos[i][1];
//  }
//}


