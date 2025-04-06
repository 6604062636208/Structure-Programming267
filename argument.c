#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mergeArguments(int n, char **args, char *result) {
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int len = strlen(args[i]);
        if (len > maxLen) maxLen = len;
    }

    int index = 0;
    for (int i = 0; i < maxLen; i++) {
        for (int j = 0; j < n; j++) {
            if (i < strlen(args[j])) {
                *(result + index) = *(*(args + j) + i);
                index++;
            }
        }
    }
    *(result + index) = '\0';
}

int main() {
    int n;
    scanf("%d", &n);
    char **args = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        args[i] = (char *)malloc(100 * sizeof(char));
        scanf("%s", args[i]);
    }
    char *result = (char *)malloc(100 * sizeof(char));
    mergeArguments(n, args, result);
    printf("%s\n", result);
    return 0;
}




