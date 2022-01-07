#include <stdio.h>

int main(void) {
    double para_1, para_2;
    double res;

    printf("Enter two parameters: ");
    while (scanf("%lf%lf", &para_1, &para_2) == 2) {
        res = (para_1 - para_2) / (para_1 * para_2);
        printf("The result is %.2f\n", res);
        printf("Enter next pair of parameters: ");
    }

    return 0;
}