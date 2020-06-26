#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = num + 1 - i; j >= 1; j--) {
            printf("%d", j);
            if (j != 1) {
                printf(" ");
            }
        }
        if (i != num) {
            printf("\n");
        }
    }

    return 0;
}