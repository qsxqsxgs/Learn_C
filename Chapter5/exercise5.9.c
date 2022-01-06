#include <stdio.h>

void Temperatures(double n);

int main(void) {
    int    flag;
    double temp;

    printf("Enter a temperature: ");
    flag = scanf("%lf", &temp);

    while (flag == 1) {
        Temperatures(temp);
        printf("Enter next temperature: ");
        flag = scanf("%lf", &temp);
    }

    return 0;
}

void Temperatures(double n) {
    const float PARA_1 = 5.0;
    const float PARA_2 = 9.0;
    const float PARA_3 = 32.0;
    const float PARA_4 = 273.16;

    double cels, kelv;
    cels = PARA_1 / PARA_2 * (n - PARA_3);
    kelv = cels + PARA_4;

    printf("Your input temperatures: %.2lf\n", n);
    printf("Celsius temperatures: %.2lf\n", cels);
    printf("Kelvin temperatures: %.2lf\n", kelv);
}