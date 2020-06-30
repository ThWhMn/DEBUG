#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // input
    int a[51];
    if (n == 2) {
        printf("1");
    }
    if (n == 3) {
        printf("1");
    }
    if (n > 3) {
        a[2] = 1;
        a[3] = 1;
        a[1] = 0;
        int i;
        for (i = 4; i <= n; i++) {
            a[i] = a[i - 2] + a[i - 3];
        }
        printf("%d", a[i - 1]); // i=n+1 ouput
    }
    return 0;
}