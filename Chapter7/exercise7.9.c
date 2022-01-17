#include <stdio.h>
#include <stdbool.h>

bool isPrime(unsigned int num);

int main(void) {
    unsigned int num;

    printf("Enter a positive integer: ");
    // printf("%d", isPrime(3));
    scanf("%u", &num);
    for (int i = 1; i <= num; i++)
        if (isPrime(i))
            printf("Prime: %d\n", i);
}

bool isPrime(unsigned int num) {
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}