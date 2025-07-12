//.Find ascii value of given number
#include <stdio.h>

int main() {
    int code;
    char ch;

    printf("Enter an ASCII code (0–127): ");
    if (scanf("%d", &code) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (code < 0 || code > 127) {
        printf("Error: Please enter a value between 0 and 127.\n");
        return 1;
    }

    ch = (char)code;
    printf("ASCII code %d corresponds to character '%c'\n", code, ch);
    return 0;
}
