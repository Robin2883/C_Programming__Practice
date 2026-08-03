#include <stdio.h>

enum color {red, green, blue};

int main(){
    enum color c1;
    c1=blue;
    printf("%d", c1);
    return 0;
}