#include <stdio.h>

int main()
{
    int  arr[33] = {0};
    int  bits[33], i, j;
    char output[34], input;
    int  counter = 0;

    while (scanf("%c", &input) != EOF && input != '\n') {
        counter++;
        arr[counter % 32] += input;
    } // second step

    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    } // third step

    for (int j = 0; j < 32; j++) {
        output[j + 1] = (bits[j] % 85 + 34);
        printf("%c", output[j + 1]);
    } // fourth step
    return 0;
}