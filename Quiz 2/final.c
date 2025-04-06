#include <stdio.h>

char *strev(char *s){
	static char r[512];
	int length = 0;
	while(*(s+length) != '\0'){
		length++;
	}
	for(int i=0; i<length; i++){
		r[i] = s[length-1-i];
	}
	r[length] = '\0';
	return r;
}

int main(){
	char str[512];
	gets(str);
	printf("%s", strev(str));
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[60];
	int score[3];
	int total_score;
};

void read_data(struct student S[], const char *filename){
	FILE *file = fopen(filename, "r");
	if(file == NULL){
		printf("Unable to open file %s\n", filename);
		exit(1);
	}
	
	for(int i=0; i<3; i++){
		fscanf(file, "%s %d %d %d", S[i].name, &S[i].score[0], &S[i].score[1], &S[i].score[2]);
	}
	
	fclose(file);
}

void compute_total_score(struct student S[]){
	for(int i=0; i<3; i++){
		S[i].total_score = S[i].score[0] + S[i].score[1] + S[i].score[2];
	}
}

void sort_students(struct student S[]){
	for(int i=0; i<2; i++){
		for(int j=i+1; j<3; j++){
			if(S[i].total_score < S[j].total_score){
				struct student temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}
}

void write_data(struct student S[], const char *filename){
	FILE *file = fopen(filename, "w");
	if(file == NULL){
		printf("Unable to open file %s\n", filename);
		exit(1);
	}
	
	for(int i=0; i<3; i++){
		fprintf(file, "%s %d %d %d %d\n", S[i].name, S[i].score[0], S[i].score[1], S[i].score[2], S[i].total_score);
	}
	fclose(file);
}

int main(){
	struct student S[3];
	char *infile = "test.txt";
	char *outfile = "out.txt";
	
	read_data(S, infile);
	compute_total_score(S);
	sort_students(S);
	write_data(S, outfile);
	
	return 0;
}

#include <stdio.h>

int x(int a);

int main(){
	int n;
	scanf("%d", &n);
	int result = x(n);
	printf("%d\n", result);
	return 0;
}

int x(int a){
	int sum = 0;
	while(a > 0){
		int y = a % 10;
		sum += y;
		a = a / 10;
	}
	return sum;
}
