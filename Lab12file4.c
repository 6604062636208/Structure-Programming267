#include <stdio.h>
#include <windows.h>

COORD coord = {0, 0};

void gotoxy(int x, int y) {
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    FILE *file;
    int x, y;
    char c[10]; 

    system("cls");
    system("COLOR F1"); 

    file = fopen("File001.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file\n");
        return 1;
    }

    while (fscanf(file, "%d %d %s", &x, &y, c) == 3) {
        gotoxy(x, y);
        printf("%s", c);
    }

    fclose(file);
    return 0;
}

