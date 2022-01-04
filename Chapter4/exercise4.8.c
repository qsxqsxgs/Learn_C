#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KILOMETER 1.609

int main(void) {
    float mile, tank;
    float mile_t, tank_t;

    printf("Enter mile and gasoline: ");
    scanf("%f %f", &mile, &tank);

    printf("Consumption per mile: %.1f", mile / tank);

    mile_t = mile * MILE_TO_KILOMETER;
    tank_t = tank * GALLON_TO_LITRE;

    printf("Consumption per km: %.1f", 100 * tank_t / mile_t);

    return 0;
}