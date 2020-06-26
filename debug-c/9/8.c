#include <stdio.h>

int main()
{
    int x, y, n;
    int m = 0;
    int b = 1;
    int k = 1;
    int i = 1;

    scanf("%d", &n);
    for (x = 2; x <= n - 2; x++) {
        i = m + b;
        m = b;
        b = k;
        k = i;
    }
    printf("%d", i);
    return 0;
}