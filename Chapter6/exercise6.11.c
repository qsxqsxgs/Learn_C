#include <stdio.h>

int main(void) {
    int i;
    int array[8];

    printf("Enter 8 integers to array: ");
    for (i = 0; i < 8; i++)
        scanf("%d", &array[i]);
    printf("Reverse output is: ");
    for (i = 7; i >= 0; i--)
        printf("%d ", array[i]);

    return 0;
}