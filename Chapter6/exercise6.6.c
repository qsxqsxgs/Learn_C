#include <stdio.h>
#define COLUMN 3

int main(void) {
    int lower, upper;
    int i, j;
    int temp;

    printf("Enter lower and upper integer limits: ");
    scanf("%d%d", &lower, &upper);

    for (i = lower; i <= upper; i++) {
        temp = i;
        for (j = 0; j < COLUMN; j++, temp *= temp)
            printf("%8d", temp);
        printf("\n");
    }

    return 0;
}