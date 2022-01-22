#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int  upper = 0;
    int  lower = 0;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch))
            upper++;
        if (islower(ch))
            lower++;
    }

    printf("Uppercase character: %d", upper);
    putchar('\n');
    printf("Lowercase character: %d", lower);

    return 0;
}