#include <stdio.h>

int main()
{
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        // months with 31 days
        if (d <= 31) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else if (m != 2 && m > 1 && m < 12) { // not Feb & months with 31 days
        if (d <= 30) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else if (1 < m && m < 12) {                         // February
        if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0) { // leap year
            if (d <= 29) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else { // Non-leap year
            if (d <= 28) {
                printf("YES");
            } else {
                printf("NO");
            }
        }
    } else {
        printf("NO");
    }
    return 0;
}