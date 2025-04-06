#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char face[3];  
    char suit;    
    int value;    
} Card;

int getFaceValue(char *face) {
    if (strcmp(face, "A") == 0) 
		return 1;
    if (strcmp(face, "J") == 0) 
		return 11;
    if (strcmp(face, "Q") == 0) 
		return 12;
    if (strcmp(face, "K") == 0) 
		return 13;
    return atoi(face);  
}

int compareCards(const void *a, const void *b) {
    return ((Card *)a)->value - ((Card *)b)->value;
}

int main() {
    int n;
    scanf("%d", &n);
    Card deck[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%s %c", deck[i].face, &deck[i].suit);
        deck[i].value = getFaceValue(deck[i].face);
    }
    qsort(deck, n, sizeof(Card), compareCards);
    for (int i = 0; i < n; i++) {
        printf("%s-%c", deck[i].face, deck[i].suit);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += deck[i].value;
    }
    printf("%d\n", sum);
    return 0;
}



