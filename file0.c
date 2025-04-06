#include <stdio.h>
#include <stdlib.h>

typedef struct student_tag {
    char id[15];        
    char firstname[50]; 
    char lastname[50];  
    char email[100];   
    double scores[5];  
    double total;       
} student_tag;

int Load_Midterm_Score(char filename[], student_tag student[], int *stcount) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        return 0; 
    }

    *stcount = 0;
    while (fscanf(fp, "%s %s %s %s %lf %lf %lf %lf %lf", 
                  student[*stcount].id, 
                  student[*stcount].firstname, 
                  student[*stcount].lastname, 
                  student[*stcount].email, 
                  &student[*stcount].scores[0], 
                  &student[*stcount].scores[1], 
                  &student[*stcount].scores[2], 
                  &student[*stcount].scores[3], 
                  &student[*stcount].scores[4]) == 9) { 
       
        student[*stcount].total = student[*stcount].scores[0] +
                                  student[*stcount].scores[1] +
                                  student[*stcount].scores[2] +
                                  student[*stcount].scores[3] +
                                  student[*stcount].scores[4];
        (*stcount)++;
    }

    fclose(fp);
    return *stcount;  
}

int main() {
    student_tag student[200]; 
    int stcount; 
    int ok; 
    double min, max, mean, sd;

    ok = Load_Midterm_Score("MID156.TXT", student, &stcount);

    if (ok == 0) {
        printf("Error: Cannot open file.\n");
    } else {
        printf("Successfully loaded %d students.\n", stcount);
    }

    return 0;
}

