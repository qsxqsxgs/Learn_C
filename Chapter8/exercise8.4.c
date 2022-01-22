#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char ch;
    int  n_chars = 0;
    int  n_words = 0;
    bool inword  = false;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch))
            n_chars++;
        if (isalpha(ch) && !inword) {
            inword = true;
            n_words++;
        }
        if (ispunct(ch) || isspace(ch) && inword)
            inword = false;
    }

    printf("Characters: %d\n", n_chars);
    printf("Words: %d\n", n_words);
    printf("Average chars: %.2f", (float)n_chars / (float)n_words);

    return 0;
}