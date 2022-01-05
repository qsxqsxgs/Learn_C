#include <stdio.h>
#define DAY_TO_WEEK 7

int main(void) {
    int num;
    int week, days;

    printf("Enter number of days: ");
    scanf("%d", &num);

    while (num > 0) {
        week = num / DAY_TO_WEEK;
        days = num % DAY_TO_WEEK;
        printf("%d days are %d weeks, %d days.\n", num, week, days);

        printf("Enter number of days: ");
        scanf("%d", &num);
    }

    return 0;
}