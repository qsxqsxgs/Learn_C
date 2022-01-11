#include <stdio.h>

int main(void) {
    int   num;
    int   odd, eve;
    float avg_odd, avg_eve;

    odd = eve = 0;
    avg_odd = avg_eve = 0.0;

    printf("Enter set of numbers(0 to quit): ");
    while (scanf("%d", &num) == 1 && num != 0) {
        if (num % 2 == 1) {
            odd++;
            avg_odd += num;
        } else {
            eve++;
            avg_eve += num;
        }
    }

    printf("Number of even integers is: %d\n", eve);
    printf("Their average: %.2f\n", avg_eve / (float)eve);
    printf("Number of odd integers is: %d\n", odd);
    printf("Their average: %.2f\n", avg_odd / (float)odd);

    return 0;
}