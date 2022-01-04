#include <float.h>
#include <stdio.h>

int main(void) {
    double var_1 = 1.0 / 3.0;
    float  var_2 = 1.0 / 3.0;

    printf("Result of double variable:\n");
    printf("%20.6f %20.12f %20.16f\n\n", var_1, var_1, var_1);

    printf("Result of float variable:\n");
    printf("%20.6f %20.12f %20.16f\n\n", var_2, var_2, var_2);

    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);

    return 0;
}