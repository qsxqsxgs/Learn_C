#include <stdio.h>
#define COUNT 10

int main(void) {
    int num;
    int num_t;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num_t = 0;
    while (num_t <= COUNT) {
        printf("%d\n", num);
        num++;
        num_t++;
    }

    return 0;
}