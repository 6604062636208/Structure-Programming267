#include <stdio.h>
#include <string.h>

int main() {
    char isbn[11];
    scanf("%s", isbn);
    int sum = 0;
    int weight = 10;

    for (int i = 0; i < 10; i++) {
        sum += (isbn[i] - '0') * weight;
        weight--;
    }
    if (sum % 11 == 0) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }
    return 0;
}


