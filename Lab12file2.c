#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch, prev = '\0';
    int wordCount = 0, sentenceCount = 0, specialCharCount = 0;

    inputFile = fopen("5ways.txt", "r");
    if (inputFile == NULL) {
        printf("Unable to open 5ways.txt\n");
        return 1;
    }

    outputFile = fopen("Result2.txt", "w");
    if (outputFile == NULL) {
        printf("Unable to create Result2.txt\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        if (isalnum(ch)) {
            if (!isalnum(prev)) {
                wordCount++;
            }
        } else if (ch == '.' || ch == '!' || ch == '?') {
            sentenceCount++;
        } else if (!isspace(ch) && !isalnum(ch)) {
            specialCharCount++;
        }
        prev = ch;
    }

    fprintf(outputFile, "Words: %d\nSentences: %d\nSpecial Characters: %d\n", 
            wordCount, sentenceCount, specialCharCount);

    fclose(inputFile);
    fclose(outputFile);

    printf("Counting completed. Results saved in Result2.txt\n");
    return 0;
}



