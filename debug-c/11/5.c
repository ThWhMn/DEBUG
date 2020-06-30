#include <stdio.h>
#include <string.h>

int main()
{
    int arr[32];
    char str[32];
    int  bits[32];
    char result[32];
    char input;
    int  j = 1;
    for (int i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    while (scanf("%c", &input) != EOF) { // input
        if (input == '\n') {
            break;
        }
        arr[j % 32] = arr[j % 32] + (int)(input);
        j++;
    }
    for (int i = 0; i < 32; i++) {
        bits[i]   = (arr[31 - i]) ^ (arr[i] << 1);
        int b     = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    for (int i = 0; i < 32; i++) {
        printf("%c", result[i]); // output
    }
    return 0;
}