#include <stdio.h>

int main(void) {
    int   year;
    float cash;

    for (cash = 100, year = 0;
         cash > 0;
         cash -= 10, cash *= 1.08, year++)
        ;
    printf("At %d year, cash are all withdrawn.", year);
    return 0;
}