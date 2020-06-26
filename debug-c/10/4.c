#include <stdio.h>

int main()
{
    int num, digit, a;
    int flag = 1;

    scanf("%d", &num);
    for (digit = 2; digit <= num; digit++) {
        for (a = 2; a < digit; a++) {
            if (digit % a == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d\n", digit);
        }
        flag = 1;
    }
    return 0;
}