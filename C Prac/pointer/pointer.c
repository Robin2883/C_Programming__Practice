#include <stdio.h>
int main() {
    int i=10;
    int *ptr=&i;
    printf("address of i is %p\n", ptr);
    return 0;
}