#include <stdio.h>

int main(void) {
    int week;
    int mate;

    for (mate = 5, week = 0;
         mate < 150;
         mate--, mate *= 2, week++)
        printf("At week %d, Rabnud has %d friends.\n", week, mate);

    return 0;
}