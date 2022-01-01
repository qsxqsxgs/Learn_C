#include <stdio.h>

int main(void) {
    int code;

    printf("Enter a integer: ");
    printf("__\b\b");
    scanf("%d", &code);
    printf("Corresponding ASCII is: %c", code);

    return 0;
}