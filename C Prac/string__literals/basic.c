#include <stdio.h>
int main() {
    char *ptr="Hello!";
    printf("%c\n", *ptr);
    printf("%s\n", ptr);
    puts(ptr); //automatically creates a new line after print
    puts(ptr);
    //char a[50];
    //printf("Type your name: ");
    //scanf("%s", a); //won't work if there is a space
    //printf("%s\n", a);
    char b[50];
    printf("Type your full name: ");
    fgets(b, sizeof(b), stdin); //to read whole line
    printf("%s\n", b); 
}
