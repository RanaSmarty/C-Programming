#include <stdio.h>
int main() {

    printf("Welcome to Character Input & Output Function.\n");
    char singleCharacter;
    printf("\nEnter the character you want to store: ");
    singleCharacter = getchar();

    /*
    NOTE: getchar() is a standard C library function used to read one character from the keyboard. 
        And its declared in <stdio.h> library.
    */

    printf("\nYour single character: %c", singleCharacter);

    return 0;
}