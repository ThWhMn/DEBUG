#include <stdio.h>
#include <string.h>

int main()
{
    char string[4];
    scanf("%s", string); // output
    int current = 0;
    for (int i = 0; i < 3; i++) { // first time
        if (string[i] == 'r') {
            current += 2 * 2;
        } else if (string[i] == 'w') {
            current += 2;
        } else if (string[i] == 'x') {
            current += 1;
        }
    }
    char reqrmt[3];
    int  req = 0;
    while (scanf("%s", reqrmt) != EOF) // correct
    {
        if (reqrmt[1] == 'r') {
            req = 2 * 2;
        } else if (reqrmt[1] == 'w') {
            req = 2;
        } else {
            req = 1;
        }
        if (reqrmt[0] == '+') {
            current += req;
        } else {
            current -= req;
        }
    }
    printf("%d\n", current); // output
    return 0;
}