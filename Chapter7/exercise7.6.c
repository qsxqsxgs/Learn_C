#include <stdio.h>

int main(void) {
    char ch;
    char prev = '\0';
    int  time = 0;

    printf("Enter a text to be analyzed(# to terminate): ");
    while ((ch = getchar()) != '#') {
        if (ch == 'i' && prev == 'e')
            time++;
        prev = ch;
    }
    printf("Number of string \'ei\' are: %d", time);

    return 0;
}