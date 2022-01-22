#include <stdio.h>
#define PATTERN 10

int main(void) {
    char ch;
    int  count = 0;

    while ((ch = getchar()) != EOF) {
        if (count++ % PATTERN == 0)
            printf("\n");
        /* Line counter */
        if (ch >= '\040')
            printf("\'%c\'--%3d ", ch, ch);
        else if (ch == '\n') {
            printf("\'\\n\'--\\n\n ");
            count = 0;
        } else if (ch == '\t')
            printf("\'\\t\'--\\t ");
        else
            printf("\'%c\'--^%c", ch, (ch + 64));
    }

    return 0;
}