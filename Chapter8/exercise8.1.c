#include <stdio.h>

int main(void) {
    char ch;
    int  count = 0;

    while ((ch = getchar()) != EOF)
        count++;
    printf("Characters: %d", count);
    return 0;
}