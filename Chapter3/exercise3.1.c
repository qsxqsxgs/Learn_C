#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void) {
    int big_int = INT_MAX;
    float big_float = FLT_MAX;
    float small_float = 10.0/3;

    printf("int overflow: %d\n", big_int + 1);
    printf("float overflow: %f\n", big_float * 10);
    printf("float underflow: %f", small_float);

    return 0;    
}