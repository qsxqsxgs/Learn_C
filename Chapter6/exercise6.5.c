#include <stdio.h>

int main(void) {
    char alpha;
    int  count;
    int  i, j, k;

    printf("Input: ");
    scanf("%c", &alpha);
    printf("Output: \n");

    count = alpha - 'A' + 1;
    for (i = 0; i < count; i++) {
        for (j = 'A'; j <= 'A' + i; j++)
            printf("%c", j);
        for (k = 'A' + i; k > 'A'; k--)
            printf("%c", k - 1);
        printf("\n");
    }

    return 0;
}