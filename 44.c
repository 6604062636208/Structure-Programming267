#include <stdio.h>
#include <stdlib.h>

int main() {
    char filenameRead[50];
    char filenameSave[50];
    char buffer[1000];

	printf("Please enter file name to read: ");
	scanf("%s", filenameRead);
	printf("Please enter file name to save: ");
	scanf("%s", filenameSave);
	
    FILE *readFile = fopen(filenameRead, "r");
    if (readFile == NULL) {
        printf("Error opening file %s for reading!\n", filenameRead);
        return 1;
    }
    FILE *saveFile = fopen(filenameSave, "w");
    if (saveFile == NULL) {
        printf("Error opening file %s for saving!\n", filenameSave);
        fclose(readFile);
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), readFile) != NULL) {
        fputs(buffer, saveFile);
    }
    fclose(readFile);
    fclose(saveFile);
    printf("-------------------------------\n");
    printf("FILE IS ALREADY SAVED.\n");
    printf("-------------------------------\n"); 
    printf("Number of Vowels in %s are\n", filenameRead);
    readFile = fopen(filenameRead, "r");
    if (readFile == NULL) {
        printf("Error opening file %s for reading again!\n", filenameRead);
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), readFile) != NULL) {
        printf("%s", buffer);
    }
    fclose(readFile);
    return 0;
}





