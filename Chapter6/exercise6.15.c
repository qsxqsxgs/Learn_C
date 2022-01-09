#include <stdio.h>
#include <string.h>

int main(void) {
    int  i;
    int  length;
    char word[256];

    printf("Enter a string: ");
    for (i = 0; word[i - 1] != '\n'; i++, length = i - 2)
        scanf("%c", &word[i]);

    printf("Reverse string: ");
    for (i = length; i >= 0; i--)
        printf("%c", word[i]);
        
    return 0;
}