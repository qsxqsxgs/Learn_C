#include <stdio.h>

int main(void) {
    int  i;
    char alpha[26];

    for (i = 0; i < 26; i++)
        alpha[i] = 'a' + i;
    for (i = 0; i < 26; i++)
        printf("%c", alpha[i]);
    return 0;
}