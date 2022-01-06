#include <stdio.h>

void Temperatures(double n);

int main(void) {
    int    flag;
    double temp;

    printf("Enter a temperature: ");
    flag = scanf("%lf", &temp);

    while (flag == 1) {
        Temperatures(temp);
        flag = scanf("%lf", &temp);
    }

    return 0;
}

void Temperatures(double n) {
    const float PARA_1, PARA_2, PARA_3;
    const float PARA_4;

    PARA_1 = 5.0;
    
}