#include <stdio.h>

int main(void) {
    int sum;
    int count;
    int count_t;

    sum   = 0;
    count = 0;

    printf("Enter an integer: ");
    scanf("%d", &count_t);

    while (count++ < count_t)
        sum += count;
    printf("sum = %d\n", sum);

    return 0;
}