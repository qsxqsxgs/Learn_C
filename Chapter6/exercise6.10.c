#include <stdio.h>

int main(void) {
    int lower, upper;
    int sum;
    int i;

    printf("Enter lower and upper integer limits: ");
    while (scanf("%d%d", &lower, &upper) == 2
           && lower < upper) {
        sum = 0;
        for (i = lower; i <= upper; i++)
            sum += i * i;
        printf("The sums of the squares "
               "from %d to %d is %d\n",
               lower, upper, sum);
        printf("Enter next set of limits: ");
    }

    printf("Done");
    return 0;
}