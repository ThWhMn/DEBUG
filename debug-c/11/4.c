#include <stdio.h>
#include <string.h>

int f(char k[])
{
    char s[33]; // string to output
    int  bits[32], i, j;
    int  arr[32] = {0};
    int  m       = strlen(k);

    for (i = 1; i <= m + 1; i++) { //(1<=i<=k)
        arr[i % 32] += k[i - 1];
    }

    for (j = 0; j <= 31; j++) { //(0<=j<=31)
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (j = 0; j <= 31; j++) {
        s[j + 1] = (bits[j] % 85 + 34);
        printf("%c", s[j + 1]);
    }
    return 0;
}

int main()
{
    char k[500];

    scanf("%s", k);
    f(k);
    return 0;
}