#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define WIDTH 50

double rad(double degree) {
    return degree * PI / 180.0;  
}

double SINE(double u, double z) {
    return sin(rad(z)) * u; 
}

void plotSineWave(double u) {
    for (double z = 0; z <= 360; z += 10) {
        double sineValue = SINE(u, z);
        int position = (int)((sineValue + u) / (2 * u) * WIDTH);

        // Print spaces before the '*'
        for (int i = 0; i < position; i++) {
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    double u = 2.0; 
    double z;

    printf("Angle (degrees) | SINE(u, z)\n");
    printf("-----------------------------\n");

    for (z = 0; z <= 360; z += 30) {
        printf("    %6.2f      |   %6.3f\n", z, SINE(u, z));
    }
	plotSineWave(u);
    return 0;
}





