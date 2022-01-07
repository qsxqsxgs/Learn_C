#include <stdio.h>
#define ROW 6

int main(void) {
    int i, j, k;

    for (i = 1, j = 'A'; i <= ROW; i++) {
        for (k = 1; k <= i; k++, j++)
            printf("%c", j);
        printf("\n");
    }

    return 0;
}