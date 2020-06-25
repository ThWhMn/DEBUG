#include <stdio.h>
#include <string.h>

int main()
{
    char before[100];
    char calculate[100][100];
    int  i;
    int  count  = 0;
    int  result = 0;

    scanf("%s", before);                         // input in initial permissions
    while (scanf("%s", calculate[i++]) != EOF) { // input permission changes
        count++;
    }

    for (i = 0; i < 3; i++) { // calculate the initial value
        if (before[i] == 'r')
            result += 4;
        if (before[i] == 'w')
            result += 2;
        if (before[i] == 'x')
            result += 1;
    }

    for (i = 0; i < count; i++) { // perform calculations on authority values
        if (calculate[i][0] == '+') {
            if (calculate[i][1] == 'r')
                result += 4;
            if (calculate[i][1] == 'w')
                result += 2;
            if (calculate[i][1] == 'x')
                result += 1;
        } else if (calculate[i][0] == '-') {
            if (calculate[i][1] == 'r')
                result -= 4;
            if (calculate[i][1] == 'w')
                result -= 2;
            if (calculate[i][1] == 'x')
                result -= 1;
        }
    }
    printf("%d", result);
    return 0;
}