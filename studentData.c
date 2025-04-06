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
//void read_data(struct student S[], const char *filename);
//void compute_total_score(struct student S[]);
//void write_data(struct student S[], const char *filename);
//void sort_students(struct student S[]);
//
//int main() {
//    struct student S[3];
//    char *infile = "test.txt", *outfile = "out.txt";
//
//    read_data(S, infile);
//    compute_total_score(S);
//    sort_students(S);
//    write_data(S, outfile);
//
//    return 0;
//}
//
//void read_data(struct student S[], const char *filename) {
//    FILE *file = fopen(filename, "r");
//    if (file == NULL) {
//        printf("Error opening file %s\n", filename);
//        exit(1);
//    }
//    for (int i = 0; i < 3; i++) {
//        fscanf(file, "%s %d %d %d", S[i].name, &S[i].score[0], &S[i].score[1], &S[i].score[2]);
//        S[i].total_score = 0;
//    }
//    fclose(file);
//}
//
//void compute_total_score(struct student S[]) {
//    for (int i = 0; i < 3; i++) {
//        S[i].total_score = S[i].score[0] + S[i].score[1] + S[i].score[2];
//    }
//}
//
//void sort_students(struct student S[]) {
//    struct student temp;
//    for (int i = 0; i < 2; i++) {
//        for (int j = i + 1; j < 3; j++) {
//            if (S[i].total_score < S[j].total_score) {
//                temp = S[i];
//                S[i] = S[j];
//                S[j] = temp;
//            }
//        }
//    }
//}
//
//void write_data(struct student S[], const char *filename) {
//    FILE *file = fopen(filename, "w");
//    if (file == NULL) {
//        printf("Error opening file %s\n", filename);
//        exit(1);
//    }
//    for (int i = 0; i < 3; i++) {
//        fprintf(file, "%s %d %d %d %d\n", S[i].name, S[i].score[0], S[i].score[1], S[i].score[2], S[i].total_score);
//    }
//    fclose(file);
//}
//
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[60];
	int score[3];
	int total_score;
};

void read_data(struct student S[], const char *filename);
void compute_total_score(struct student S[]);
void sort_students(struct student S[]);
void write_data(struct student S[], const char *filename);

int main(){
	struct student S[3];
	char *infile = "test9.txt";
	char *outfile = "out9.txt";
	
	read_data(S, infile);
	compute_total_score(S);
	sort_students(S);
	write_data(S, outfile);
	
	return 0;
}

void read_data(struct student S[], const char *filename){
	FILE *file = fopen(filename, "r");
	if(file == NULL){
		printf("Error open file %s\n", filename);
		exit(1);
	}
	for(int i=0; i<3; i++){
		fscanf(file, "%s %d %d %d\n", &S[i].name, &S[i].score[0], &S[i].score[1], &S[i].score[2]);
		S[i].total_score = 0;
	}
	fclose(file);
}

void compute_total_score(struct student S[]){
	for(int i=0; i<3; i++){
		S[i].total_score = S[i].score[0] + S[i].score[1] + S[i].score[2];
	}
}

void sort_students(struct student S[]) {
	struct student temp;
	for(int i=0; i<2; i++){
		for(int j = i + 1; j < 3; j++){
			if(S[i].total_score < S[j].total_score){
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}
}

void write_data(struct student S[], const char *filename) {
	FILE *file = fopen(filename, "w");
	if(file == NULL){
		printf("Error open file %s\n", filename);
		exit(1);
	}
	for(int i=0; i<3; i++){
		fprintf(file, "%s %d %d %d %d\n", S[i].name, S[i].score[0], S[i].score[1], S[i].score[2], S[i].total_score);
	}
	fclose(file);
}
