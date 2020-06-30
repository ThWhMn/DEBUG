#include <stdio.h>
#include <string.h>

int main()
{
    int  arr[32] = {0};
    char input[500];
    int  bits[32];
    char result[32];
    int  i = 1, j = 0;
    while (scanf("%c", &input[i - 1]) != EOF) { // input
        if (input[i - 1] == '\n') {
            break;
        }
        arr[i % 32] = arr[i % 32] + (int)input[i - 1];
        i++;
    }
    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }
    for (j = 0; j <= 31; j++) {
        result[j] = (char)((bits[j] % 85) + 34);
        printf("%c", result[j]); // output
    }
    return 0;
}