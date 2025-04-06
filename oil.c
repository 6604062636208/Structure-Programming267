#include <stdio.h>

double oil_reserve(double oil, int years) {
    if (years == 0)
        return oil;
    return 0.9 * oil_reserve(oil, years - 1);
}

int main(){
	// Calculate remaining oil
	double oil_start = 25;
	int years = 2580 - 2557;
	printf("Oil remaining in 2580: %.2f million barrels\n", oil_reserve(oil_start, years));
	return 0;
}



