#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    int n;
    scanf("%d", &n);
    struct Point points[100];
    for(int i = 0; i < n; i++) {
        scanf("%lf %lf", &points[i].x, &points[i].y);
    }
    double min_dist = 1000000000; 
    int point1 = 0, point2 = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            double dist = distance(points[i], points[j]);
            if(dist < min_dist) {
                min_dist = dist;
                point1 = i;
                point2 = j;
            }
        }
    }
    
    printf("%d %d %.2lf\n", point1 + 1, point2 + 1, min_dist);
    
    return 0;
}
