#include <stdio.h>

#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.28

#define STATE_BACH 17850
#define STATE_PLAC 23900
#define STATE_MARR 29750
#define STATE_DIVO 14875

int main(void) {
    float tax;
    float money;
    int   state;

    printf("1) Bachelor     "
           "2) Placeholder\n"
           "3) Married      "
           "4) Divorced\n");
    printf("Choose your state from the form: ");

    while (scanf("%d", &state) == 1) {
        if (state < 1 || state > 4) {
            printf("Please enter correct number from the form: ");
            continue;
        }

        printf("Enter your income: ");
        scanf("%f", &money);

        switch (state) {
        case 1:
            tax = (money > STATE_BACH) ?
                      (money - STATE_BACH) * TAX_RATE_2 + STATE_BACH * TAX_RATE_1 :
                      money * TAX_RATE_1;
            break;
        case 2:
            tax = (money > STATE_PLAC) ?
                      (money - STATE_PLAC) * TAX_RATE_2 + STATE_PLAC * TAX_RATE_1 :
                      money * TAX_RATE_1;
            break;
        case 3:
            tax = (money > STATE_MARR) ?
                      (money - STATE_MARR) * TAX_RATE_2 + STATE_MARR * TAX_RATE_1 :
                      money * TAX_RATE_1;
            break;
        case 4:
            tax = (money > STATE_DIVO) ?
                      (money - STATE_DIVO) * TAX_RATE_2 + STATE_DIVO * TAX_RATE_1 :
                      money * TAX_RATE_1;
            break;
        default:;
        }

        printf("Your tax amount are: %.2f\n\n", tax);
        printf("1) Bachelor     "
               "2) Placeholder\n"
               "3) Married      "
               "4) Divorced\n");
        printf("Choose your state from the form: ");
    }

    return 0;
}