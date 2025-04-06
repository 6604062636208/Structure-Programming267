#include <stdio.h>
#include <string.h>

int main() {
    char id[14]; 
    int weights[12] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2}; 
    int sum = 0;

    printf("Please Enter ID: ");
    scanf("%s", id);

    if (strlen(id) != 13) {
        printf("Invalid input! Please enter exactly 13 digits.\n");
        return 1;
    }

    for (int i = 0; i < 13; i++) {
        if (id[i] < '0' || id[i] > '9') {
            printf("Invalid input! Please enter only digits\n");
            return 1;
        }
    }

    for (int i = 0; i < 12; i++) {
        sum += (id[i] - '0') * weights[i];
    }

    int check_digit = (11 - (sum % 11)) % 10;

    if (check_digit == (id[12] - '0')) {
        printf("Your ID is Valid\n");
    } else {
        printf("Your ID is Invalid\n");
    }

    return 0;
}





