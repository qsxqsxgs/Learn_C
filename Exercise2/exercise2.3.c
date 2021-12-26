#include <stdio.h>

int main(void) {
    int age;

    printf("Please enter your age:");
    scanf("%d",&age);
    printf("Your age are %d, number of days are %d.\n", age, age * 365);

    return 0;
}