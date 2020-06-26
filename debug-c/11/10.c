#include <stdio.h>
#include <string.h>

int main()
{
    int  i, j, k;
    int  arr[32] = {0};
    int  bits[32];
    char str[501], rstr[501];

    i = 1;
    while (scanf("%c", &str[i]) != EOF) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    k = strlen(str);
    for (i = 1; i <= k; i++) {
        arr[i % 32] += str[i];
    }

    for (j = 0; j < 32; j++) {
        bits[j]     = arr[31 - j] ^ (arr[j] << 1);
        rstr[j + 1] = bits[j] % 85 + 34;
    }

    for (i = 1; i < 33; i++) {
        printf("%c", rstr[i]);
    }
    return 0;
}