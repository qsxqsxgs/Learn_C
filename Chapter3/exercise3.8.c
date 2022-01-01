#include <stdio.h>
#define PINT_TO_CUP 2
#define CUP_TO_OUNCE 8
#define OUNCE_TO_SPOON 2
#define SPOON_TO_TEA 3

int main(void) {
    float pint, cup, ounce, spoon, tea_spoon;

    printf("Enter how many cup: ");
    scanf("%f", &cup);

    pint = cup / PINT_TO_CUP;
    ounce = cup * CUP_TO_OUNCE;
    spoon = ounce * OUNCE_TO_SPOON;
    tea_spoon = spoon * SPOON_TO_TEA;

    printf("%.1f cup equals %.1f pint, %.1f ounce, %.1f spoon, %.1f tea_spoon.\n",
    cup, pint, ounce, spoon, tea_spoon);

    return 0;
}