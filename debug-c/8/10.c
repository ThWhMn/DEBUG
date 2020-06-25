#include <stdio.h>
#include <string.h>

int main()
{
    int  i, j, k, n;
    char a[100][100] = {'0'};
    char temp[100]   = {'0'};

    scanf("%d\n", &n);        // input
    for (i = 0; i < n; i++) { // read a[][]
        for (j = 0; j < 100; j++) {
            if (scanf("%c", &a[i][j]) == EOF) {
                break;
            }
            if (a[i][j] == '\n') {
                break;
            }
        }
    }

    strcpy(temp, a[0]);
    for (i = 1; i < n; i++) { // find the longest
        if (strlen(a[i]) > strlen(temp)) {
            strcpy(temp, a[i]);
        }
    }

    printf("%s", temp);
    return 0;
}