#include <stdio.h>

int main(void) {
    char ch;
    int  change = 0;

    printf("Enter a text to be changed(# to terminate): ");
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            change++;
            printf("!");
        } else if (ch == '!') {
            change++;
            printf("!!");
        } else
            printf("%c", ch);
    }
    printf("\n%d %s have been changed.", change,
           (change > 1) ? "characters" : "character");

    return 0;
}