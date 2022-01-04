#include <stdio.h>

int main(void) {
    float height;
    char  name[10];

    printf("Enter your height and name: ");
    scanf("%f %s", &height, name);

    printf("%s, you are %.2f meters tall", name, height / 100);

    return 0;
}