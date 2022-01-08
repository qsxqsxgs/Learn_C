#include <stdio.h>
#include <math.h>

int main(void) {
    int i, j;
    int array[8];

    for (i = 0, j = 0; i < 8; i++)
        array[i] = pow(2, i + 1);
    do
        printf("%d\n", array[j]);
    while (++j < 8);

    return 0;
}