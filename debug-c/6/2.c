#include <stdio.h>
#include <string.h>

int main()
{
    int  r = 0;
    int  w = 0;
    int  x = 0;
    char sign[4];
    char temp[3];

    scanf("%s", sign);
    for (int i = 0; i < strlen(sign); i++) { // initialize r, w, x
        if (sign[i] == 'r') {
            r = 1;
        }
        if (sign[i] == 'w') {
            w = 1;
        }
        if (sign[i] == 'x') {
            x = 1;
        }
    }

    while (scanf("%s", temp) != EOF) { // judge order
        if (strcmp(temp, "+x") == 0) {
            if (x == 0) {
                x++;
            }
        }
        if (strcmp(temp, "-x") == 0) {
            if (x == 1) {
                x--;
            }
        }
        if (strcmp(temp, "+r") == 0) {
            if (r == 0) {
                r++;
            }
        }
        if (strcmp(temp, "-r") == 0) {
            if (r == 1) {
                r--;
            }
        }
        if (strcmp(temp, "+w") == 0) {
            if (w == 0) {
                w++;
            }
        }
        if (strcmp(temp, "-w") == 0) {
            if (w == 1) {
                w--;
            }
        }
    }
    printf("%d", r * 4 + w * 2 + x);
    return 0;
}