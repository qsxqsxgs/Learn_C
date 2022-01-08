#include <stdio.h>
#define LENGTH 8

void printArray(double n[]);

int main(void) {
    int    i;
    double array_1[LENGTH];
    double array_2[LENGTH];

    for (i = 0; i < LENGTH; i++) {
        printf("Enter element %d of array_1: ", i + 1);
        scanf("%lf", &array_1[i]);
    }

    array_2[0] = array_1[0];
    for (i = 1; i < LENGTH; i++)
        array_2[i] = array_2[i - 1] + array_1[i];
    printArray(array_1);
    printArray(array_2);

    return 0;
}

void printArray(double n[]) {
    int i;
    for (i = 0; i < LENGTH; i++)
        printf("%10.2f ", n[i]);
    printf("\n");
}