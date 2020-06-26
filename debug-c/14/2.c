#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            if (j > 1) {
                printf("%d", j);
                printf(" ");
            } else {
                printf("%d", j);
                if (i != 1) {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}