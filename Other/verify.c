#include <stdio.h>

char get_first(void);
char get_choice(void);
void count(void);

int main(void) {
    int choice;

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
        case 'a':
            printf("Buy low, sell high.\n");
            break;
        case 'b':
            putchar('\a'); /* ANSI */
            break;
        case 'c':
            count();
            break;
        default: printf("Program error!\n"); break;
        }
    }

    return 0;
}

char get_choice(void) {
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. advice         b. bell\n");
    printf("c. count          q. quit\n");

    ch = get_first();

    while ((ch < 'a' || ch > 'c') && ch != 'q') {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }

    return ch;
}
char get_first(void) {
    int ch;

    while ((ch = getchar()) == '\n')
        continue; /* 读取下一个非空字符 */

    while (getchar() != '\n')
        continue; /* 跳过该行剩下的内容 */
    return ch;
}

void count(void) {
    int n, i;

    printf("Count how far? Enter an integer:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d\n", i);
}