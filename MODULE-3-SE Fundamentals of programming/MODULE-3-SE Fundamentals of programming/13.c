//Find character value from ascii
#include <stdio.h>

int main() {
    int ascii;
    char ch;

    printf("Enter an ASCII code (0–127): ");
    if (scanf("%d", &ascii) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (ascii < 0 || ascii > 127) {
        printf("Error: code should be in the range 0–127.\n");
        return 1;
    }

    ch = (char)ascii;  // convert integer to character
    printf("Character for ASCII code %d is '%c'\n", ascii, ch);

    return 0;
}
