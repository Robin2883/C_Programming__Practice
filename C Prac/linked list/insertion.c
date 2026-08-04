#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_node(struct node *head);
void add_at_end(struct node *head, int data); //function prototype

int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node)); 
    head->data=83;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node)); 
    current->data=98;
    current->link=NULL;
    head->link=current;   
 
    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    add_at_end(head, 66);
    count_node(head);
}

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr=head;
    temp=malloc(sizeof(struct node));

    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;

}

void count_node(struct node *head){
    int count=0;
    if (head==NULL)
    printf("linked list is empty");
    struct node *ptr=head;
    while(ptr!=NULL){
        count++;
        printf("%d ", ptr->data);
        ptr=ptr->link;
    }
    printf("\nnumber of node is %d", count);
}