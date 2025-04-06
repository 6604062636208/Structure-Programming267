#include <windows.h>
#include <stdio.h>
#include <math.h>

COORD coord = {0, 0};

void gotoxy(int x, int y) {
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x;
    double y;
    const int width = 80;
    const int height = 30;
    
    for (x = 0; x < width; x++) {
        gotoxy(x, height / 2);
        printf("-");
    }
    for (int y = 0; y < height; y++) {
        gotoxy(width / 2, y);
        printf("|");
    }
    
    for (x = 0; x < width; x++) {
        y = sin(x * 5.0 / 90.0) * (height / 2 - 1);
        int plotY = height / 2 - (int)y; 
        gotoxy(x, plotY);
        printf("*");
    }
    
    gotoxy(0, height);
    printf("\nThis is demo of gotoxy function");
    return 0;
}






