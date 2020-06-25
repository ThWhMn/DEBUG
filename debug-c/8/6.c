#include <stdio.h>
#include <string.h>

int main()
{
    int  n;
    int  i, j;
    char names[101][101], temp[101];
    int  max, number;

    scanf("%d", &n);                           // input
    while (scanf("%c", &names[i][j]) != EOF) { // read names[][]
        for (i = 0; i < n; i++) {
            for (j = 0; j < 101; j++) {
                scanf("%c", &names[i][j]);
                if (names[i][j] == '\n') {
                    names[i][j] = '\0';
                    break;
                }
            }
        }
    }

    max    = strlen(names[0]);
    number = 0;
    for (i = 1; i < n; i++) { // find the longest
        if (max < strlen(names[i])) {
            max    = strlen(names[i]);
            number = i;
        }
    }

    printf("%s\n", names[number]);
    return 0;
}