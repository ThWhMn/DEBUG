#include <stdio.h>
#include <string.h>

int main() {
    char str[500], fs[32]; 
    int arr[32], bits[32];
    int i,num;
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    scanf("%s", str);
    for (i = 1; i <= strlen(str); i++) {
        if (str[i-1] == '\n') {
            break;
        }
        arr[i % 32] = arr[i % 32] + (int)str[i-1];
    }
    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
    }
    for (i = 0; i <= 31; i++) {
        num = (bits[i] % 85) + 34;
        fs[i] = (char)num;
        printf("%c", fs[i]);//output
    }
    return 0;
}