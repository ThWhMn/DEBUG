#include <stdio.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n + 1 - i; j >= 1; j--) {
            if (j > 1) {
                printf("%d", j);
                printf(" ");
            } else {
                printf("%d\n", j);
            }
        }
    }
    return 0;
}