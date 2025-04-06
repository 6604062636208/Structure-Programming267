#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("5most.txt", "r");
    if (inputFile == NULL) {
        printf("Unable to open 5most.txt\n");
        return 1;
    }

    outputFile = fopen("Result1.txt", "w");
    if (outputFile == NULL) {
        printf("Unable to create Result1.txt\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        ch = toupper(ch);
        putchar(ch);
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("\nConversion completed. Output saved in Result1.txt\n");
    return 0;
}




