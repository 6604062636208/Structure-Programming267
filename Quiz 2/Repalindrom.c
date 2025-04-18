#include <stdio.h>
#include <string.h>

int palindrom(char *string , int left , int right);
int main(){
    char std[100];
    scanf("%s", std);
    int len = strlen(std);
    if(len == 0 || len == 1){
        printf("IS PALINDROM %s",std);
    }
    int check = palindrom(std,0,len - 1);
    if(check){
        printf("IS PALINDROM %s",std);
    }else{
        printf("IS not PALINDROM");
    }
    return 0;
}

int palindrom(char *string , int left , int right){
    if(left >= right){
        return 1;
    }else if(string[left] == string[right]){
        return palindrom(string , left + 1 , right - 1);
    }else{
        return 0;
    }
}
