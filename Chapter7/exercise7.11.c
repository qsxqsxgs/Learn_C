#include <stdio.h>
#include <stdbool.h>

#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09

#define DISCOUNT_CILL 100
#define DISCOUNT_RATE 0.05

#define PACKAGE_CILL_1 5
#define PACKAGE_FEE_1 6.5
#define PACKAGE_CILL_2 20
#define PACKAGE_FEE_2 14
#define PACKAGE_FEE_PER_EXCEED 0.5

int main(void) {
    bool  flag;
    char  stat;
    float temp;
    float sum             = 0;
    float pound_artichoke = 0;
    float pound_beet      = 0;
    float pound_carrot    = 0;

    printf("Select one item to add to cart: \n");
    printf("a) Artichoke     "
           "b) Beet\n"
           "c) Carrot        "
           "q) Quit\n");

    flag = true;
    while (scanf(" %c", &stat) == 1) {
        switch (stat) {
        case 'a':
            printf("Enter weight of artichoke: ");
            scanf("%f", &temp);
            pound_artichoke += temp;
            break;
        case 'b':
            printf("Enter weight of beet: ");
            scanf("%f", &temp);
            pound_beet += temp;
            break;
        case 'c':
            printf("Enter weight of carrot: ");
            scanf("%f", &temp);
            pound_carrot += temp;
            break;
        case 'q':
            flag = false;
            break;
        default:
            printf("Please select correct item!");
        }

        if (flag == false)
            break;

        printf("\n");
        printf("Select one item to add to cart: \n");
        printf("a) Artichoke     "
               "b) Beet\n"
               "c) Carrot        "
               "q) Quit\n");
    }

    sum = pound_artichoke + pound_beet + pound_carrot;
    return 0;
}