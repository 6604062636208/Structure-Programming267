#include <stdio.h>

typedef struct {
    int denomination; 
    int count;        
} Banknote;

void countBanknotes(int amount, Banknote banknotes[], int size) {
    for (int i = 0; i < size; i++) {
        banknotes[i].count = amount / banknotes[i].denomination;  
        amount %= banknotes[i].denomination;  
    }
}

int main() {
    int amount;
    scanf("%d", &amount);
    Banknote banknotes[] = {
        {1000, 0}, {500, 0}, {100, 0}, {50, 0}, {20, 0}, {10, 0}, {1, 0}
    };
    int size = sizeof(banknotes) / sizeof(banknotes[0]);
    countBanknotes(amount, banknotes, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", banknotes[i].count);
    }
    return 0;
}



