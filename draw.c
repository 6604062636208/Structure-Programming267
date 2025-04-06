#include <stdio.h>

void drawline(char c, int begin, int end) {
    for (int i = begin; i <= end; i++) {
        printf("%c", c);
    }
    printf("\n");
}
void drawpoints(char c, int *list, int n) {
    for (int i = 1; i <= 10; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (i == list[j]) {
                printf("%c", c);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf(" ");
        }
    }
    printf("\n");
} 
int main()
{
	int list[10];
	char c = '*';
	/* draw triangle */
	list[0] = 5;
	drawpoints(c, list, 1);
	list[0] = 3; list[1] = 7;
	drawpoints(c, list, 2);
	list[0] = 1; list[1] = 9;
	drawpoints(c, list, 2);
	drawline(c, 1, 10);
	/* draw rectangle */
	printf("\n");
	c = '#';
	drawline(c, 1, 10);
	list[0] = 1; list[1] = 10;
	drawpoints(c, list, 2);
	drawpoints(c, list, 2);
	drawline(c, 1, 10);
	getchar();
}
