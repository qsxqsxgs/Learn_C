#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main(void) {
    char ch;
    int  n_chars = 0;
    int  n_lines = 0;
    int  n_space = 0;

    printf("Enter text to be analyzed (# to terminate): \n");
    while ((ch = getchar()) != STOP) {
        n_chars++;
        if (ch == '\n')
            n_lines++;
        if (isspace(ch))
            n_space++;
    }

    printf("characters = %d, lines = %d, spaces = %d",
           n_chars, n_lines, n_space);

    return 0;
}