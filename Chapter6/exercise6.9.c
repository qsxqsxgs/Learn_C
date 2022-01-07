#include <stdio.h>

double compute(double m, double n);

int main(void) {
    double para_1, para_2;

    printf("Enter two parameters: ");
    while (scanf("%lf%lf", &para_1, &para_2) == 2) {
        printf("The result is %.2f\n", compute(para_1, para_2));
        printf("Enter next pair of parameters: ");
    }

    return 0;
}

double compute(double m, double n) {
    double res;
    res = (m - n) / (m * n);
    return res;
}