#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char id[10];
    char name[50];
    char surname[50];
    char occupation[50];
    int age;
    char sex;
    char address[100];
} Person;

int main() {
    Person people[10]; 
    int count = 0;     
    char filename[50];
    char choice;
    FILE *file;
    
    printf("Please enter name of file: ");
    scanf("%s", filename);
    
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    do {
        if (count >= 10) {
            printf("Maximum number of people (10) reached.\n");
            break;
        }
        
        printf("Please enter ID: ");
        scanf("%s", people[count].id);
        
        printf("Please enter name: ");
        scanf("%s", people[count].name);
        
        printf("Please enter surname: ");
        scanf("%s", people[count].surname);
        
        printf("Please enter occupation: ");
        scanf("%s", people[count].occupation);
        
        printf("Please enter age: ");
        scanf("%d", &people[count].age);
        
        printf("Please enter sex: ");
        scanf(" %c", &people[count].sex);
        
        printf("Please enter address: ");
        getchar(); 
        scanf("%[^\n]", people[count].address);
        
        fprintf(file, "%s %s %s %s %d %c %s\n", 
                people[count].id,
                people[count].name, 
                people[count].surname,
                people[count].occupation,
                people[count].age,
                people[count].sex,
                people[count].address);
        
        count++;
        printf("Do you want to continue ('y/n'): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(file);
    printf("-------------------------------\n");
    printf("The list of person whose age over 20 are\n");
    
    for (int i = 0; i < count; i++) {
        if (people[i].age >= 20) {
            printf("%s %s %s %s %d %c\n", 
                   people[i].id,
                   people[i].name, 
                   people[i].surname,
                   people[i].occupation,
                   people[i].age,
                   people[i].sex);
        }
    }
    printf("-------------------------------\n");
    return 0;
}
