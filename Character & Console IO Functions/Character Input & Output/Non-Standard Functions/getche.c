#include <stdio.h>
#include <conio.h>

int main() {
    printf("Welcome to Non-standard Function: getche()\n");

    char characterUserPressed;
    printf("\nPress any key: ");
    /**
    * getche()...is a non-standard function that reads one character immediately and displays (echoes) 
       that character on the screen.
     
    * getch() and getche() both read a character immediately without requiring Enter; 
       getche() displays the pressed character, while getch() does not.
    */

    characterUserPressed = getche();
    printf("\nYou pressed: ");
    putchar(characterUserPressed);
    return 0;
}