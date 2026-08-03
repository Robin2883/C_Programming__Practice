#include <stdio.h>
//#pragma pack(1) //used for packing. size becomes 6 bytes instead of 12 bytes.

typedef struct abc {
    char a;
    int c;
    char b;
}var;

int main(){
    var v;
    printf("%d", sizeof(v));
    return 0;
}