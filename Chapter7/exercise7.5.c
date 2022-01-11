#include <stdio.h>

int main(void) {
    char ch;
    int  change = 0;

    printf("Enter a text to be changed(# to terminate): ");
    while ((ch = getchar()) != '#') {
        switch (ch) {
        case '.':
            change++;
            printf("!");
            break;
        case '!':
            change++;
            printf("!!");
            break;
        default:
            printf("%c", ch);
        }
    }
    printf("\n%d %s have been changed.", change,
           (change > 1) ? "characters" : "character");

    return 0;
}