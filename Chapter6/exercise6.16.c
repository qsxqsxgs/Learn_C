#include <stdio.h>
#define DEBT 100

int main(void) {
    int   year;
    float daph, deir;

    daph = deir = DEBT;

    for (daph = DEBT, deir = DEBT, year = 0;
         daph >= deir;
         daph += 0.1 * DEBT, deir *= 1.05)
        year++;
    printf("Loop ends at the %d year,"
           "Daph have %.2f, Deir have %.2f",
           year, daph, deir);

    return 0;
}