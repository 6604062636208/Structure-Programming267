#include <stdio.h>

int main() {
    int totalPrice = 0;
    int category, item;
    char continueShopping;

    do {
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("                     VENDING MACHINE                         \n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("Welcome to vending machine. Enter 1-Sandwich, 2-Cake, 3-Beverage: ");
        scanf("%d", &category);

        if (category == 1) {
            // Sandwich menu
            printf("Enter 1-Tuna (30), 2- Hamburger (40), 3- Ham (35): ");
            scanf("%d", &item);
            if (item == 1) totalPrice += 30;
            else if (item == 2) totalPrice += 40;
            else if (item == 3) totalPrice += 35;
        } else if (category == 2) {
            // Cake menu
            printf("Enter 1- Donut (17), 2- JamRoll (15), 3- Pastry (25), 4- Cookie (10): ");
            scanf("%d", &item);
            if (item == 1) totalPrice += 17;
            else if (item == 2) totalPrice += 15;
            else if (item == 3) totalPrice += 25;
            else if (item == 4) totalPrice += 10;
        } else if (category == 3) {
            // Beverage menu
            printf("Enter 1- Coke (15), 2- Est (15), 3- GreenTea (60): ");
            scanf("%d", &item);
            if (item == 1) totalPrice += 15;
            else if (item == 2) totalPrice += 15;
            else if (item == 3) totalPrice += 60;
        } else {
            printf("Invalid category selection.\n");
        }

        // Ask if the user wants to continue
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &continueShopping);

    } while (continueShopping == 'Y' || continueShopping == 'y');

    // Final price display
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("THANK YOU VERY MUCH. THE PRICE IS: %d BAHT\n", totalPrice);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    return 0;
}
