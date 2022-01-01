#include <stdio.h>
#define INCH_TO_CENTIMETER 2.54

int main(void) {
    float height;
    float height_cm;

    printf("Enter height by inch: ");
    scanf("%f", &height);

    height_cm = height * INCH_TO_CENTIMETER;
    printf("Height by centimeter are: %.2f", height_cm);

    return 0;
}