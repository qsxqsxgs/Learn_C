#include <stdio.h>

int main(void) {
    int age;
    double second;

    printf("Enter your age: ");
    scanf("%d", &age);

    second = age * 3.156E7;
    printf("Seconds are: %e", second);

    return 0;
}