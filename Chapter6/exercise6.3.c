#include <stdio.h>
#define ROW 6

int main(void) {
    int i, j;

    for (i = 1; i <= ROW; i++) {
        for (j = 'F'; j > 'F' - i; j--)
            printf("%c", j);
        printf("\n");
    }

    return 0;
}