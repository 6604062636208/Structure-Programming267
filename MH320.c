#include <stdio.h>

int main() {
    int N, M, L, K, C;
    scanf("%d %d", &N, &M);
    scanf("%d %d", &L, &K);
    scanf("%d", &C);
    int total_electricity_cost = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int cost;
            scanf("%d", &cost);
            total_electricity_cost += cost;
        }
    }
    int total_fuel_cost = C * L * K;
    int total_cost = total_electricity_cost + total_fuel_cost; 
    int min_rent = (total_cost + C - 1) / C; 
    printf("%d\n", min_rent);
    return 0;
}






