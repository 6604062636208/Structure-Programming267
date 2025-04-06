#include <stdio.h>

float calculaterectangle(float width, float height);
float calculatecircle(float radius, float pi);

int main(){
	int choice;
	float result1 = 0, result2 = 0;
	float pi = 3.141592654, width, height, radius;
	printf("============ MENU ============\n");
	printf("1. Calculate area of rectangle\n");
	printf("2. Calculate area of circle\n");
	printf("\nPlease enter 1 or 2: ");
	scanf("%d", &choice);
	if(choice == 1){
		printf("Please enter width: ");
		scanf("%f", &width);
		printf("Please enter height: ");
		scanf("%f", &height);
		result1 = calculaterectangle(width, height);
		printf("\nArea = %.2f\n", result1);
	} else if(choice == 2){
		printf("Please enter radius: ");
		scanf("%f", &radius);
		result2 = calculatecircle(radius, pi);
		printf("\nArea = %.2f\n", result2);
	}
	return 0;
}

float calculaterectangle(float width, float height){
	return width * height;
}

float calculatecircle(float radius, float pi){
	return pi * radius * radius;
}









