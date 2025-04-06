#include <stdio.h>

int main() {
    int orders[7], total_orders = 0;
    int cost, revenue, profit;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &orders[i]);
        total_orders += orders[i];
    }
    // Calculate cost
    if (total_orders <= 100) {
        cost = total_orders * 80;
    } else if (total_orders <= 250) {
        cost = (100 * 80) + ((total_orders - 100) * 70);
    } else {
        cost = (100 * 80) + (150 * 70) + ((total_orders - 250) * 60);
    }
    // Calculate revenue
    revenue = total_orders * 100;
    profit = revenue - cost;
    printf("%d\n", cost);
    printf("%d\n", revenue);
    printf("%d\n", profit);

    return 0;
}



