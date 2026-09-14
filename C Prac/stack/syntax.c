#include <stdio.h>

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

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    //push(5); stack overflow
    return 0;
}