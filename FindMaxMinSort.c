//#include <stdio.h>
//
//void FindMinMaxSort(int data[], int size){
//	int min = data[0], max = data[0];
//	double sum = 0.0, avg = 0.0;
//	
//	for(int i=0; i<size; i++){
//		if(data[i] > max){
//			max = data[i];
//		} else {
//			min = data[i];
//		}
//		sum += data[i];
//	}
//	
//	for(int i=0; i<size-1; i++){
//		for(int j=0; j<size-i-1; j++){
//			if(data[j] > data[j+1]){
//				int temp = data[j];
//				data[j] = data[j+1];
//				data[j+1] = temp;
//			}
//		}
//	}
//	
//	printf("Maximum Value : %d\n", max);
//	printf("Minimum Value : %d\n", min);
//	printf("Sort array : ");
//	for(int i=0; i<size; i++){
//		printf("%d ", data[i]);
//	}
//	avg = sum / size;
//	printf("\nAverage Value : %.2lf", avg);
//}
//
//int main(){
//	int data[10];
//	for(int i=0; i<10; i++){
//		scanf("%d", &data[i]);
//	}
//	FindMinMaxSort(data, 10);
//	return 0;
//}

#include <stdio.h>

void Find_Min_Max_sorting_avg(int data[], int n);

int main(){
	int data[10];
	for(int i=0; i<10; i++){
		scanf("%d", &data[i]);
	}
	Find_Min_Max_sorting_avg(data, 10);
	return 0;
}

void Find_Min_Max_sorting_avg(int data[], int n){
	int MIN = data[0], MAX = data[0];
	float sum = 0, avg = 0;
	for(int i=0; i<n; i++){
		if(data[i] > MAX){
			MAX = data[i];
		} else{
			MIN = data[i];
		}
		sum += data[i];
	}
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(data[j] < data[i]){
				int x = data[i];
				data[i] = data[j];
				data[j] = x;
			}
		}
	}
	avg = sum / n;
	printf("Maximum value : %d\n", MAX);
	printf("Minimum value : %d\n", MIN);
	printf("Sorting array : ");
	for(int i=0; i<n; i++){
		printf("%d ", data[i]);
	}
	printf("\n");
	printf("Average value : %.2f\n", avg);
}



