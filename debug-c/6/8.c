#include <stdio.h>

int main()
{
    char n, o;
    int  a[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++) { // initialize a[]
        scanf("%c", &n);
        if (n == '\n') {
            break;
        }
        if (n == 'r') {
            a[0] = 1;
        }
        if (n == 'w') {
            a[1] = 1;
        }
        if (n == 'x') {
            a[2] = 1;
        }
    }
    while (scanf("%c", &n) != EOF) {
        if (n == '\n') {
            continue;
        }
        if (n == '+') {      // read operator
            scanf("%c", &n); // read authority sign
            if (n == 'r') {
                a[0] = 1;
            }
            if (n == 'w') {
                a[1] = 1;
            }
            if (n == 'x') {
                a[2] = 1;
            }
        }
        if (n == '-') {
            scanf("%c", &n);
            if (n == 'r') {
                a[0] = 0;
            }
            if (n == 'w') {
                a[1] = 0;
            }
            if (n == 'x') {
                a[2] = 0;
            }
        }
    }
    o = a[0] * 4 + a[1] * 2 + a[2];
    printf("%d", o);
    return 0;
}