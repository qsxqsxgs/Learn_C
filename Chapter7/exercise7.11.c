#include <stdio.h>
#include <stdbool.h>

#define PRICE_ARTICHOKE 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROT 1.09

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

    float total_weight;
    float total_cost;
    float dis;
    float fee;

    float pound_artichoke = 0;
    float pound_beet      = 0;
    float pound_carrot    = 0;

    printf("a) Artichoke     "
           "b) Beet\n"
           "c) Carrot        "
           "q) Quit\n");
    printf("Select one item from the form: ");

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
            printf("Please select correct item!\n");
        }

        if (flag == false)
            break;

        printf("\n");
        printf("a) Artichoke     "
               "b) Beet\n"
               "c) Carrot        "
               "q) Quit\n");
        printf("Select one item from the form: ");
    }

    total_weight = pound_artichoke + pound_beet + pound_carrot;
    total_cost   = pound_artichoke * PRICE_ARTICHOKE
                 + pound_beet * PRICE_BEET
                 + pound_carrot * PRICE_CARROT;

    dis = (total_cost >= DISCOUNT_CILL) ?
              -total_cost * DISCOUNT_RATE :
              0;

    if (total_weight <= 0)
        fee = 0;
    else if (total_weight <= PACKAGE_CILL_1)
        fee = PACKAGE_FEE_1;
    else if (total_weight <= PACKAGE_CILL_2)
        fee = PACKAGE_FEE_2;
    else
        fee = PACKAGE_FEE_2
              + (total_weight - PACKAGE_CILL_2)
                    * PACKAGE_FEE_PER_EXCEED;

    printf("\n");
    printf("%-15s %-10s %-10s %s\n",
           "Item", "Price", "Weight", "Cost");
    printf("%-15s %5.2f %11.2f %8.2f\n", "Artichoke",
           PRICE_ARTICHOKE,
           pound_artichoke,
           pound_artichoke * PRICE_ARTICHOKE);
    printf("%-15s %5.2f %11.2f %8.2f\n", "Beet",
           PRICE_BEET,
           pound_beet,
           pound_beet * PRICE_BEET);
    printf("%-15s %5.2f %11.2f %8.2f\n", "Carrot",
           PRICE_CARROT,
           pound_carrot,
           pound_carrot * PRICE_CARROT);

    printf("\n");
    printf("%-16s %16.2f %8.2f\n",
           "Subtotal", total_weight, total_cost);
    printf("%-27s %14.2f\n",
           "Discount", dis);
    printf("%-27s %+14.2f\n",
           "Shipping", fee);

    for (int i = 0; i < 42; i++)
        printf("-");

    printf("\n");
    printf("%-27s %14.2f",
           "Total", total_cost - dis + fee);

    return 0;
}