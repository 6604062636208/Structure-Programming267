#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y, z;
} Vector3D;

double FindLength(Vector3D v) {
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

int main() {
    int n;
    scanf("%d", &n);
    Vector3D vectors[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &vectors[i].x, &vectors[i].y, &vectors[i].z);
    }
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", FindLength(vectors[i]));
    }
    return 0;
}



