#include <stdio.h>
int main() {
    printf("Welcome to Character Input & Output Function.\n");

    char username[50];
    printf("\nEnter your name: ");
    fgets(username, 50, stdin);

    // puts()...is a standard C library function used to display a string of characters on the screen.

    puts(username);

    return 0;
}