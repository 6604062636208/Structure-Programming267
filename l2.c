#include <stdio.h>

#define MAX_RUNNERS 10

int main() {
    int id[MAX_RUNNERS];
    double time[MAX_RUNNERS];
    
    printf("Enter runner data (ID and time for each runner):\n");
    for(int i = 0; i < MAX_RUNNERS; i++) {
        printf("Runner %d - Enter ID and time: ", i+1);
        scanf("%d %lf", &id[i], &time[i]);
        
        if(time[i] > 20.00) {
            printf("Invalid time. Must be <= 20.00 seconds\n");
            i--; 
            continue;
        }
    }
    
    for(int i = 0; i < MAX_RUNNERS-1; i++) {
        for(int j = 0; j < MAX_RUNNERS-i-1; j++) {
            if(time[j] > time[j+1]) {
                double tempTime = time[j];
                time[j] = time[j+1];
                time[j+1] = tempTime;
                
                int tempId = id[j];
                id[j] = id[j+1];
                id[j+1] = tempId;
            }
        }
    }
    
    printf("\nTop 3 runners:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d: Runner ID %d - %.2f seconds\n", i+1, id[i], time[i]);
    }
    
    return 0;
}


