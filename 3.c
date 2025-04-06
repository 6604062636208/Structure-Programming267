#include <stdio.h>
#include <ctype.h>
#include <string.h>

void printReverseString(char *str);
int FindLengthOfString(char *str);
int countdigit(char *str);

int main() {
    char str[100];
    scanf("%[^\n]", str); // space value
//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0';
    printReverseString(str);
    printf("\n");
    int result = countdigit(str);
    printf("%d", result);
    return 0;
}

int FindLengthOfString(char *str){
	int Length = 0;
	while(*(str++) != '\0'){
		Length++;
	}
	return Length;
}

void printReverseString(char *str){
	int l = FindLengthOfString(str);
	for(int i = l-1; i>=0; i--){
		printf("%c", str[i]);
	}
}

int countdigit(char *str){
	int count = 0;
	for(int i=0; str[i] != '\0'; i++){
		if(isdigit(str[i])){ // Is the control system numerical?
			count++;
		}
	}
	return count;
}



