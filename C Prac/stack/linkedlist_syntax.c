#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
} *top=NULL; //global pointer variable

void push (int data){
    struct node* newnode;
    newnode=(struct node*) malloc (sizeof(struct node));
    if (newnode==NULL){
        printf("stack overflow");
        exit(1);
    }
    newnode->data=data;
    newnode->link=NULL;
    newnode->link=top;
    top=newnode;
}

void print(){
    struct node* temp;
    temp=top;
    while (temp){
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}

int main(){
    int choice, data;
    while (1){
        printf("1. push\n2. print\n3. exit\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter data to push: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                print();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}