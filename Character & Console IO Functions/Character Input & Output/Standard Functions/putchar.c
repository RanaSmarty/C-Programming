#include <stdio.h>
int main() {
    
    printf("Welcome to Character Input & Output Function.\n");
    char singleCharacter;
    printf("\nThe character you want to store: ");
    singleCharacter = getchar();

    /*
    putchar()...is a standard C library function used to display a single character on the sreen.
    * No needed to format specifier because putchar() is specially designed for one character.
        So, don't need %c format specifier.
    */
   
   printf("\n");
   putchar(singleCharacter);

    return 0;
}