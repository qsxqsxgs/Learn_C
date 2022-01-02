#include <stdio.h>
#define BIT_TO_BYTE 8

int main(void) {
    float speed, size;
    float time;

    printf("Enter the download speed "
           "and the file size: ");
    scanf("%f %f", &speed, &size);

    time = BIT_TO_BYTE * size / speed;

    printf("At %.2f megabits per second, "
           "a file of %.2f megabytes\n",
           speed, size);
    printf("downloads in %.2f seconds.", time);

    return 0;
}