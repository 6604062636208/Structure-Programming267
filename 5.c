#include <stdio.h>
#include <stdlib.h>
#define MAX 100 

typedef struct {
    int data[MAX];  
    int top;      
} Stack;

void initialize(Stack *s) {
    s->top = -1; 
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
        return;
    }
    s->data[++s->top] = value;  
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->data[s->top--]; 
}

int main() {
    Stack s;
    initialize(&s);  
    char operation;
    int value;
    while (1) {
        printf("Please select operation: ");
        scanf(" %c", &operation);
        if (operation == 'P') { 
            printf("Please input data: ");
            scanf("%d", &value);
            push(&s, value);
        } 
        else if (operation == 'X') { 
            if (!isEmpty(&s)) {
                printf("Data is : %d\n", pop(&s));
            }
        } 
        else {
            break; 
        }
    }
    return 0;
}







