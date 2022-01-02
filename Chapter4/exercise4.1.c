#include <stdio.h>

int main(void) {
    char fam[10];
    char sur[10];

    printf("Enter your name: ");
    scanf("%s %s", sur, fam);

    printf("Your name is: %s,%s", sur, fam);

    return 0;
}