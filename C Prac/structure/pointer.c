#include <stdio.h>

typedef struct abc {
    int x, y;
}abc;

int main(){
    abc a={10, 20};
    abc *ptr=&a;
    printf("%d %d", ptr->x, ptr->y);
    return 0;
}