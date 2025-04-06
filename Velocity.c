#include <stdio.h>

int main() {
    int n; 
	float speed, time;
    float totalDistance = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &speed, &time);
        float distance = speed * (time*0.0166666667);
        totalDistance += distance;
    }
    printf("%.1f\n", totalDistance);
    return 0;
}


