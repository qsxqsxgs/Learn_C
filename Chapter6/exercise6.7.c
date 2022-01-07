#include <stdio.h>
#include <string.h>

int main(void) {
    int  i;
    int  length;
    char word[10];

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);
    for (i = length; i >= 0; i--)
        printf("%c", word[i]);
    return 0;
}