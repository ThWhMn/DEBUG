#include <stdio.h>

int main()
{
    int n, i, j;
    int flag = 1;

    scanf("%d", &n);
    if (n == 2) {
        printf("2\n");
    } else {
        printf("2\n");
        for (i = 3; i <= n; i++) {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                printf("%d\n", i);
            }
            flag = 1;
        }
    }
    return 0;
}
