#include <stdio.h>
#define ROW 5

int main(void) {
    int i, j;

    for (i = 1; i <= ROW; i++) {
        for (j = 1; j <= i; j++)
            printf("$");
        printf("\n");
    }

    return 0;
}