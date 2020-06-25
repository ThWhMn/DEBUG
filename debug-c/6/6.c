#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int  r            = 0;
    int  w            = 0;
    int  x            = 0;
    char plus[2]      = "+";
    char minus[2]     = "-";
    char operator_[2] = "@";
    char rr[2]        = "r";
    char ww[2]        = "w";
    char xx[2]        = "x";
    char str[2];
    char input[3];

    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++) { // initialize r, w, x
        if (input[i] == 'r') {
            r = 1;
        }
        if (input[i] == 'w') {
            w = 1;
        }
        if (input[i] == 'x') {
            x = 1;
        }
    }

    while (scanf("%s", input) != EOF) {
        memset(str, '\0', 2);
        memset(operator_, '\0', 2);
        operator_[0] = input[0];
        str[0]       = input[1];
        if (strcmp(str, rr) == 0) {             // operate on r
            if (strcmp(operator_, plus) == 0) { // plus 1
                r = 1;
            } else if (strcmp(operator_, minus) == 0) { // minus 1
                r = 0;
            } else {
                r = 1;
            }
        } else if (strcmp(str, ww) == 0) {      // operate on w
            if (strcmp(operator_, plus) == 0) { // plus 1
                w = 1;
            } else if (strcmp(operator_, minus) == 0) { // minus 1
                w = 0;
            } else {
                w = 1;
            }
        } else if (strcmp(str, xx) == 0) {      // operate on x
            if (strcmp(operator_, plus) == 0) { // plus 1
                x = 1;
            } else if (strcmp(operator_, minus) == 0) { // minus 1
                x = 0;
            } else {
                x = 1;
            }
        }
    }

    int output = x + w * 2 + r * 4;
    printf("%d", output);

    return 0;
}