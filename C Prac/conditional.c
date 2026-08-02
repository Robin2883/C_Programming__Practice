#include <stdio.h>

int main() {
    int var=75;
    int var2=56;
    int num;
    num=sizeof(var)? (var2>23? ((var==75)?'A':0):0):0;
    printf("%d\n", num);

    int a;
    a=(3,5,6);
    printf("%d", a);

    return 0;

}