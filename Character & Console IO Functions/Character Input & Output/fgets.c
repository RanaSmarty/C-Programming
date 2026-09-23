#include <stdio.h>
int main() {
    printf("Welcome to Character Input & Output Functions.\n");

    char name[50];
    printf("\nEnter your name: ");

    /*
    fgets()...is a starndard C library function used to read a line of text from an input stream.
    It can read spaces and helps safely limit the amount of input stored in a character array.
    */

    fgets(name, 50, stdin);

    printf("\nName is %s", name);
    
    return 0;
}