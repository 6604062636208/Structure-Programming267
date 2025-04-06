#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float z1, float x2, float y2, float z2){
	return sqrt(pow(z2-z1, 2) + pow(y2-y1, 2) + pow(x2-x1, 2));
}

int main(){
	float x1, y1, z1, x2, y2, z2;
	scanf("%f %f %f %f %f %f", &x1, &y1, &z1, &x2, &y2, &z2);
	printf("%.2f\n", distance(x1, y1, z1, x2, y2, z2));
	return 0;
}



