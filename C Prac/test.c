#include <stdio.h>
#define STRING "%s\n"
#define NESO "Welcome to NESO Academy!"

int main() {
    int var = 5;
    var = var++;
    printf(STRING, NESO);
    printf("%d\n", var);
    int b=6, c=7;
    printf("%d\n", b+++c);
    printf("%d\n", b);
    return 0;
}