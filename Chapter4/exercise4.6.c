#include <stdio.h>
#include <string.h>

int main(void) {
    char fam[10];
    char sur[10];

    printf("Enter your surname: ");
    scanf("%s", sur);
    printf("Enter your familyname: ");
    scanf("%s", fam);

    printf("\n%s %s", sur, fam);
    printf("\n%*d %*d", strlen(sur), strlen(sur), strlen(fam), strlen(fam));
    printf("\n%s %s", sur, fam);
    printf("\n%-*d %-*d", strlen(sur), strlen(sur), strlen(fam), strlen(fam));

    return 0;
}