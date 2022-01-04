#include <stdio.h>
//#define MASS_PER_QUART 950
//#define MASS_PER_MOLE 3E-23

int main(void) {
    float  qua;
    double gram;
    double mole;

    printf("Enter quarts of water: ");
    scanf("%f", &qua);

    gram = qua * 950;
    mole = gram / 3E-23;
    printf("Number of molecules are: %e", mole);

    return 0;
}