#include <stdio.h>
#include <string.h>

int main()
{
    int  arr[32];
    char str[32], result[32];
    int  bits[32], b;
    int  j = 0;
    char input;

    for (int i = 0; i < 32; i++) { // initialize arr[]
        arr[i] = 0;
    }

    while (scanf("%c", &input) != EOF) {
        if (input == '\n') {
            break;
        }
        j++;
        arr[j % 32] += input;
    }

    for (int i = 0; i < 32; i++) {
        bits[i]       = (arr[31 - i]) ^ (arr[i] << 1);
        b             = (bits[i] % 85) + 34;
        result[i + 1] = b;
    }

    for (int i = 1; i < 33; i++) {
        printf("%c", result[i]);
    }
    return 0;
}