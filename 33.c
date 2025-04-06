#include <stdio.h>
#include <stdbool.h>

void insertionSort(int list[], int last) {
    int walk, temp;
    bool located;
    for (int current = 1; current < last; current++) {
        located = false;
        temp = list[current];
        for (walk = current - 1; walk >= 0 && !located; walk--) {
            if (temp < list[walk]) { 
                list[walk + 1] = list[walk];
            } else {
                located = true;
            }
        }
        list[walk + 1] = temp;
    }
}

int main() {
    int n;
    printf("Please enter number of digit for sorting: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    char randomFileName[100], sortedFileName[100]; // Increased buffer size to prevent overflow
    // Saving Unsorted Data
    printf("Please enter file name to save: ");
    scanf("%s", randomFileName);
    FILE *randomFile = fopen(randomFileName, "w");
    if (randomFile == NULL) {
        printf("Error opening file %s!\n", randomFileName);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(randomFile, "%d ", arr[i]);
    }
    fclose(randomFile);
    // Sorting the Array
    insertionSort(arr, n);
    // Display Sorted Data
    printf("-------------------------------\n");
    printf("Now, you have the following sorted number:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Saving Sorted Data
    printf("Please enter file name: ");
    scanf("%s", sortedFileName);
    FILE *sortedFile = fopen(sortedFileName, "w");
    if (sortedFile == NULL) {
        printf("Error opening file %s!\n", sortedFileName);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(sortedFile, "%d ", arr[i]);
    }
    fclose(sortedFile);
    printf("FILE IS ALREADY SAVED.\n");
    return 0;
}




