#include <stdio.h>
#include <stdbool.h>

#define PAY_RATE_1 8.75
#define PAY_RATE_2 9.33
#define PAY_RATE_3 10.0
#define PAY_RATE_4 11.2

#define EXCEED 40
#define EXCEED_RATE 1.5
#define TAX_1 0.15
#define TAX_RATE_1 300
#define TAX_2 0.2
#define TAX_RATE_2 150
#define TAX_3 0.25

void printTitle(void);
void printSign(int count, char sign);
void printResult(float pays);

int main(void) {
    int   rate;
    float pays;
    bool  flag = true;

    printTitle();
    while (scanf("%d", &rate) == 1) {
        switch (rate) {
        case 1:
            pays = PAY_RATE_1;
            printResult(pays);
            printTitle();
            break;
        case 2:
            pays = PAY_RATE_2;
            printResult(pays);
            printTitle();
            break;
        case 3:
            pays = PAY_RATE_3;
            printResult(pays);
            printTitle();
            break;
        case 4:
            pays = PAY_RATE_4;
            printResult(pays);
            printTitle();
            break;
        case 5:
            flag = false;
            break;
        default:
            printf("Please enter correct number!\n");
            printTitle();
        }
        if (flag == false)
            break;
    }

    return 0;
}

void printTitle(void) {
    printSign(65, '*');
    putchar('\n');

    printf("Enter the number corresponding to"
           " the desired pay rate or action:\n");
    putchar('\n');

    printf("1) %.2f/hr", PAY_RATE_1);
    printSign(30, ' ');
    printf("2) %.2f/hr", PAY_RATE_2);
    putchar('\n');
    putchar('\n');

    printf("3) %.2f/hr", PAY_RATE_3);
    printSign(29, ' ');
    printf("4) %.2f/hr", PAY_RATE_4);
    putchar('\n');
    putchar('\n');

    printf("5) quit");
    putchar('\n');
    putchar('\n');

    printSign(65, '*');
    putchar('\n');
}

void printSign(int count, char sign) {
    for (int i = 0; i < count; i++)
        printf("%c", sign);
}

void printResult(float pays) {
    float time, taxe, wage;

    printf("Enter weekly working hours: ");
    scanf("%f", &time);

    if (time <= EXCEED)
        wage = pays * time;
    else
        wage = pays * (EXCEED + EXCEED_RATE * (time - EXCEED));

    if (wage <= TAX_RATE_1)
        taxe = TAX_1 * wage;
    else if (wage > TAX_RATE_1 && wage <= TAX_RATE_1 + TAX_RATE_2)
        taxe = TAX_1 * TAX_RATE_1 + TAX_2 * (wage - TAX_RATE_1);
    else
        taxe = TAX_1 * TAX_RATE_1 + TAX_2 * TAX_RATE_2
               + TAX_3 * (wage - TAX_RATE_1 - TAX_RATE_2);

    printf("Your wage are: %.2f\n"
           "Your taxe are: %.2f\n"
           "Your income are: %.2f\n",
           wage, taxe, wage - taxe);
}