#include <stdio.h>
#define PATTERN 8

int main(void) {
    char ch;
    int  loop = 0;

    printf("Enter a set of characters: ");
    while ((ch = getchar()) != '#') {
        if (ch == '\n') {
            printf("\nEnter another set (# to quit): ");
            loop = 0;
            continue;
        }
        printf("%c : %d ", ch, ch);
        if (++loop % PATTERN == 0)
            printf("\n");
    }

    return 0;
}