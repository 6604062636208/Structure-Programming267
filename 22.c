#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PRODUCTS 100
#define MAX_STRING_LENGTH 15

typedef struct {
    int code;
    char name[MAX_STRING_LENGTH + 1];
    float price;
    int quantity;
} Product;

int readProducts(const char* filename, Product products[]) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 0;
    }

    int count = 0;
    while (!feof(file) && count < MAX_PRODUCTS) {
        if (fscanf(file, "%d %s %f %d", 
                  &products[count].code, 
                  products[count].name, 
                  &products[count].price, 
                  &products[count].quantity) == 4) {
            count++;
        }
    }

    fclose(file);
    return count;
}

void displayProducts(Product products[], int count) {
    printf("The list of product:\n");
    for (int i = 0; i < count; i++) {
        printf("%-5d %-15s %-10.1f %d\n", 
               products[i].code, 
               products[i].name, 
               products[i].price, 
               products[i].quantity);
    }
}

int findProduct(Product products[], int count, int code) {
    for (int i = 0; i < count; i++) {
        if (products[i].code == code) {
            return i;
        }
    }
    return -1;
}

void saveProducts(const char* filename, Product products[], int count) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %.1f %d\n", 
               products[i].code, 
               products[i].name, 
               products[i].price, 
               products[i].quantity);
    }

    fclose(file);
}

int main() {
    Product products[MAX_PRODUCTS];
    int productCount;
    int code, quantity;
    char choice;
    float totalPrice;
    
    printf("Welcome to KMUTNB Shop\n");
    
    productCount = readProducts("input.txt", products);
    if (productCount == 0) {
        printf("No products found in input file.\n");
        return 1;
    }
    
    displayProducts(products, productCount);
    
    do {
        printf("Please enter the product code: ");
        scanf("%d", &code);
        
        int index = findProduct(products, productCount, code);
        if (index == -1) {
            printf("Product not found!\n");
            continue;
        }
        
        printf("You have chosen %s with Price %.2f.\n", 
               products[index].name, products[index].price);
        
        printf("How many? ");
        scanf("%d", &quantity);
        
        if (quantity > products[index].quantity) {
            printf("Sorry, only %d items available.\n", products[index].quantity);
            continue;
        }
        
        totalPrice = products[index].price * quantity;
        printf("Your total price is %.0f\n", totalPrice);
        
        products[index].quantity -= quantity;
        
        printf("THANK YOU.\n");
        printf("\nDo you want to continue ('y'/'n'): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    saveProducts("input.txt", products, productCount);
    
    printf("THE SHOP IS CLOSING.\n");
    printf("NOW, WE ARE WRITING THE REMAINING QTY OF GOODS FOR TOMORROW!\n");
    
    return 0;
}
