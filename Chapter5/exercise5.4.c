#include <stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54

int main(void) {
    int   feet;
    float inch;
    float height;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);

    while (height > 0) {
        feet = height / FEET_TO_CM;
        inch = (height - feet * FEET_TO_CM) / INCH_TO_CM;
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);

        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
    }

    printf("bye");
    return 0;
}