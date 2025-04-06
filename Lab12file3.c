#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    long fileSize;
    
    inputFile = fopen("Test2.txt", "r");
    if (inputFile == NULL) {
        printf("Unable to open Test2.txt\n");
        return 1;
    }

    outputFile = fopen("Result3.txt", "w");
    if (outputFile == NULL) {
        printf("Unable to create Result3.txt\n");
        fclose(inputFile);
        return 1;
    }

    fseek(inputFile, 0, SEEK_END);
    fileSize = ftell(inputFile);

    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(inputFile, i, SEEK_SET);
        char ch = fgetc(inputFile);
        putchar(ch);
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("\nReverse display completed. Output saved in Result3.txt\n");
    return 0;
}

