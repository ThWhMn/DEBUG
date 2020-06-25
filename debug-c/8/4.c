#include <stdio.h>
#include <string.h>

int main()
{
    int  n;
    char name[101][101];
    char temp[101];

    scanf("%d", &n);              // input
    getchar();                    // read '\n'
    for (int i = 0; i < n; i++) { // read name[][]
        gets(name[i]);
    }

    for (int j = 0; j < n; j++) { // bubble sort & put the longest to the last
        for (int k = 0; k < n - 1 - j; k++) {
            if ((strlen(name[k]) >= strlen(name[k + 1]))) {
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
            }
        }
    }

    printf("%s", name[n - 1]);
    return 0;
}