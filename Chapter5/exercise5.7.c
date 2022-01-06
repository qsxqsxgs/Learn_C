#include <stdio.h>

void cubic(double n);

int main(void) {
    double num;

    printf("Enter a double variable: ");
    scanf("%lf", &num);
    cubic(num);

    return 0;
}

void cubic(double n) {
    double res = n * n * n;
    printf("The cubic number is: %lf", res);
}