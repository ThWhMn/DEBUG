#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d-%d-%d", &a, &b, &c);
    if ((b < 1) || (b > 12)) { // invalid month number
        printf("NO");
    } else if ((b == 1) && ((c < 1) || (c > 31))) { // January
        printf("NO");
    } else if ((b == 3) && ((c < 1) || (c > 31))) { // March
        printf("NO");
    } else if ((b == 4) && ((c < 1) || (c > 30))) { // April
        printf("NO");
    } else if ((b == 5) && ((c < 1) || (c > 31))) { // May
        printf("NO");
    } else if ((b == 6) && ((c < 1) || (c > 30))) { // June
        printf("NO");
    } else if ((b == 7) && ((c < 1) || (c > 31))) { // July
        printf("NO");
    } else if ((b == 8) && ((c < 1) || (c > 31))) { // August
        printf("NO");
    } else if ((b == 9) && ((c < 1) || (c > 30))) { // September
        printf("NO");
    } else if ((b == 10) && ((c < 1) || (c > 31))) { // October
        printf("NO");
    } else if ((b == 11) && ((c < 1) || (c > 30))) { // November
        printf("NO");
    } else if ((b == 12) && ((c < 1) || (c > 31))) { // December
        printf("NO");
    } else if ((a % 400 == 0) && b == 2 && (c < 1 || c > 29)) {
        // February in leap year
        printf("NO");
    } else if ((a % 100 != 0 || a % 4 == 0) && b == 2 && (c < 1 || c > 29)) {
        // February in leap year
        printf("NO");
    } else if ((b == 2 && (c < 1 || c > 28))) {
        // February in Non-leap year
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}