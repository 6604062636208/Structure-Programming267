#include <stdio.h>

double oilremaining(double Oil, int years);

int main(){
	double initialOil = 25;
	int years = 2580 - 2557;
	printf("Oil remaining in 2580: %.2lf million barrels\n", oilremaining(initialOil, years-1));
	return 0;
}

double oilremaining(double Oil, int years){
	if(years == 0)
		return Oil;
	return 0.9 * oilremaining(Oil, years-1);
}



