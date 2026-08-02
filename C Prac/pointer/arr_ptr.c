#include <stdio.h>
int main() {
    int a[]={6, 78, 87, 32, 55};
    int (*ptr)[5]=&a;
    printf("%d\n", *(*ptr+1));
    return 0;
}