#include <stdio.h>
#include <string.h>

int main(void) {
    int width;
    char sur[10];

    printf("Enter your name: ");
    scanf("%s", sur);

    width = strlen(sur);

    printf("\"%s\"\n", sur);
    printf("\"%20s\"\n", sur);
    printf("\"%-20s\"\n", sur);
    printf("\"%*s\"", width + 3, sur);

    return 0;
}