#include<stdio.h>
#include<stdlib.h>
#define max 20
typedef struct stack{
    int top;
    char arr[max];
}stack;
char peek(stack st) {
    return st.arr[st.top];
}
int push(stack* st, char value) {
    if (st -> top == max - 1) {
        printf("String size is too large");
        exit(0);
    }
    st -> top++;
    st -> arr[st -> top] = value;
}
void pop(stack* st) {
    printf("%c", peek(*st));  // I havn't declared underflow condition. I think here it is not require.
    st -> top--;
}
int main()
{   
    stack st;
    st.top = -1;
    char str[20];
    printf("Enter the string you want to reverse: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        push(&st, str[i]);
    }
    printf("Reveresed String: ");
    for (int i = st.top; i > -1; i--) {
        pop(&st);
    }
    return 0;
}
/*
Enter the string you want to reverse: Hello World! 
Reveresed String:  !dlroW olleH

*/