#include <stdio.h>

int main(void) {
    int   i;
    int   flag;
    int   count;
    float sum_1, sum_2;
    float operand_1, operand_2;

    flag  = -1;
    sum_1 = sum_2 = 0;

    printf("Enter executing times of the loop: ");

    while (scanf("%d", &count) == 1) {
        for (i = 1, operand_1 = 1.0;
             i <= count;
             i++, operand_1 = 1.0 / (float)i)
            sum_1 += operand_1;
        printf("Result of first loop is %.2f\n", sum_1);

        for (i = 1, operand_2 = 1.0;
             i <= count;
             i++, operand_2 = 1.0 / (float)i * flag, flag *= -1)
            sum_2 += operand_2;
        printf("Result of second loop is %.2f\n", sum_2);

        printf("Enter next executing timee: ");
    }

    return 0;
}