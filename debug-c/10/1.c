#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a); // input
    for (d = 2; d <= a; d += 1) {
        c = 0;
        for (b = 2; b < d; b += 1) {
            if (d % b == 0) {
                c += 1;
            }
        }
        if (c == 0) {
            printf("%d\n", d); // output
        }
    }
    return 0;
}