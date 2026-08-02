#include <stdio.h>
int main() {
    int a[]={6,8,13,23,67};
    int sum=0, *ptr;
    for (ptr=&a[0];ptr<=&a[4];ptr++) 
    //for (ptr=a;ptr<=a+4;ptr++)
    {
        sum+=*ptr;
    }
    printf("sum is %d\n", sum);
    return 0;
}