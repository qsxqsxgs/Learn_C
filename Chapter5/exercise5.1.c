#include <stdio.h>
#define MIN_TO_HOUR 60

int main(void) {
    int time;
    int hour, mins;

    printf("Enter time by number of minutes: ");
    scanf("%d", &time);

    while (time > 0) {
        printf("Time: %d minute(s)\n", time);

        hour = time / MIN_TO_HOUR;
        mins = time % MIN_TO_HOUR;
        printf("Time: %d hour(s) and %d minute(s)\n", hour, mins);

        printf("Enter time by number of minutes: ");
        scanf("%d", &time);
    }

    return 0;
}