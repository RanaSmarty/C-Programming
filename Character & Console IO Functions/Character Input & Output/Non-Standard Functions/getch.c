#include <stdio.h>
#include <conio.h>

int main() {
    printf("Welcome to Non-Standard Function.\n");

    char userDefinedcharacter;
    printf("\nEnter any key: ");
    /**
     * getch()...is a non-standard C programming function traditionally provided by <conio.h>
     * Reads a single character/key immediately without displaying it (the pressed key).
    */
    userDefinedcharacter = getch();

    printf("\nYou pressed: ");
    putchar(userDefinedcharacter);
    return 0;
}