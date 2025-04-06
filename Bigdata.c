#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_DIGITS 200

void multiplyStrings(const char *num1, const char *num2, char *result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;
    int *temp = (int *)calloc(result_len, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j;
            int p2 = i + j + 1;
            int sum = temp[p2] + mul;
            temp[p2] = sum % 10;
            temp[p1] += sum / 10;
        }
    }

    int index = 0;
    while (index < result_len && temp[index] == 0) {
        index++;
    }

    int result_index = 0;
    for (; index < result_len; index++) {
        result[result_index++] = temp[index] + '0';
    }
    result[result_index] = '\0';

    free(temp);
}

int isValidNumber(const char *num) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9') return 0;
    }
    return 1;
}

int main() {
    char num1[101], num2[101], result[MAX_DIGITS + 1];
    scanf("%100s", num1);
    scanf("%100s", num2);

    if (!isValidNumber(num1) || !isValidNumber(num2)) {
        printf("Invalid input\n");
        return 1;
    }

    multiplyStrings(num1, num2, result);
    printf("%s\n", result);
    return 0;
}
