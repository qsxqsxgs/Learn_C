#include <stdio.h>

int main(void) {
    int para_1, para_2;

    printf("This program computes moduli.\n");
    
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &para_1);

    printf("Now enter the first operand: ");
    scanf("%d", &para_2);

    while (para_2 > 0) {
        printf("%d %% %d is %d\n", para_2, para_1, para_2 % para_1);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &para_2);
    }

    printf("Done");
    return 0;
}