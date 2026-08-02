#include <stdio.h>
int i;
int main() {
    int j;
    const int k;
    static int l;
    int var=052;
    printf("%d\n", var);
    printf("%o\n", var);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", l);
    printf("%s\n", __TIME__);
    printf("%s\n", __DATE__);
}