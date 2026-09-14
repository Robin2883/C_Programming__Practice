#include <stdio.h>
#include <stdlib.h>

int stack_arr[4];
int top=-1;

void push (int data){
    if (top==3){
        printf("stack overflow");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
    printf("%d\n", stack_arr[top]);
}

int pop(){
    int value;
    if (top==-1){
        printf("stack underflow");
        exit(1); //abnormal termination of the program
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}

int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    //push(5); stack overflow
    data=pop();
    printf("%d\n", data);
    return 0;
}