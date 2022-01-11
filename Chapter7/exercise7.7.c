#include <stdio.h>
#define BASIC 1000
#define EXCEED 40
#define EXCEED_RATE 1.5
#define TAX_1 0.15
#define TAX_RATE_1 300
#define TAX_2 0.2
#define TAX_RATE_2 150
#define TAX_3 0.25

int main(void) {
    float time, taxe, wage;

    printf("Enter weekly working hours: ");
    scanf("%f", &time);

    if (time <= EXCEED)
        wage = BASIC * time;
    else
        wage = BASIC * (EXCEED + EXCEED_RATE * (time - EXCEED));

    if (wage <= TAX_RATE_1)
        taxe = TAX_1 * wage;
    else if (wage > TAX_RATE_1 && wage <= TAX_RATE_1 + TAX_RATE_2)
        taxe = TAX_1 * TAX_RATE_1 + TAX_2 * (wage - TAX_RATE_1);
    else
        taxe = TAX_1 * TAX_RATE_1 + TAX_2 * TAX_RATE_2
               + TAX_3 * (wage - TAX_RATE_1 - TAX_RATE_2);

    printf("Your wage are: %.2f\n"
           "Your taxe are: %.2f\n"
           "Your income are: %.2f",
           wage, taxe, wage - taxe);

    return 0;
}