#include <stdio.h>

int main(void) {
    char res;
    int  guess = 50;

    printf("Pick an integer from 1 to 100.\n"
           "I will try to  guess it.\n");
    printf("Respond with a y if my guess is right.\n"
           "With an n if it is wrong.\n");

    printf("Uh...is your number %d?\n", guess);

    while ((res = getchar()) != 'y') {
        if (res == 'n') {
            
        } else
            printf("Sorry, I understand only y or n.\n");
        /* 输入验证 */

        while (getchar() != '\n')
            continue;
    }
    /* 获取响应，与 y 做对比 */

    printf("I knew I could do it!\n");

    return 0;
}