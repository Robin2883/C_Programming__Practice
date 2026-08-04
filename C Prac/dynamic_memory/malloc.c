#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr1=(int*)calloc(10,sizeof(int)); //initialized with 0
    printf("value of pointer1 is: %d\n", *ptr1);

    int *ptr=(int*)malloc(sizeof(int)); //initialized with garbage value
    if(ptr==NULL){
        printf("memory allocation failed\n");
    }
    else{
        *ptr=83;
        printf("value of pointer is: %d\n", *ptr); 
    }

    ptr=(int*)realloc(ptr, 5*sizeof(int));
    printf("value of pointer after realloc is: %d\n", *ptr);
    printf("size of pointer after realloc is: %d\n", sizeof(ptr));

}