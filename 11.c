#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100

typedef struct {
    char code[MAX_STRING];
    char title[MAX_STRING];
    char artist[MAX_STRING];
    char issueDate[MAX_STRING];
    char company[MAX_STRING];
    int price;
} MusicCD;

void inputCD(MusicCD *cd) {
    printf("Please enter the product code: ");
    scanf("%s", cd->code);
    getchar();
    
    printf("Please enter the product title: ");
    fgets(cd->title, MAX_STRING, stdin);
    cd->title[strcspn(cd->title, "\n")] = 0; 
    
    printf("Please enter the name of artist: ");
    fgets(cd->artist, MAX_STRING, stdin);
    cd->artist[strcspn(cd->artist, "\n")] = 0; 
    
    printf("Please enter the issue date: ");
    scanf("%s", cd->issueDate);
    getchar(); 
    
    printf("Please enter the company: ");
    fgets(cd->company, MAX_STRING, stdin);
    cd->company[strcspn(cd->company, "\n")] = 0; 
    
    printf("Please enter the price: ");
    scanf("%d", &cd->price);
    getchar(); 
}

void saveToFile(MusicCD *cds, int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s,%s,%s,%s,%d\n", 
                cds[i].code, cds[i].title, cds[i].artist, 
                cds[i].issueDate, cds[i].company, cds[i].price);
    }
    
    fclose(file);
}

int main() {
    MusicCD cds[100]; 
    int count = 0;
    char choice;
    char filename[MAX_STRING];
    
    printf("Welcome to CS-KMUTNB MUSIC Shop\n");
    
    printf("Please enter name of file: ");
    scanf("%s", filename);
    getchar();
    
    do {
        inputCD(&cds[count]);
        count++;
        
        printf("Do you want to continue ('y'/'n'): ");
        scanf("%c", &choice);
        getchar(); 
    } while (choice == 'y' || choice == 'Y');
    
    saveToFile(cds, count, filename);
    
    printf("\nTHANK YOU.\n");
    printf("THE CS-KMUTNB MUSIC Shop IS CLOSING.\n");
    printf("NOW, WE ARE WRITING THE REMAINING GOODS FOR TOMORROW!\n");
    
    return 0;
}



