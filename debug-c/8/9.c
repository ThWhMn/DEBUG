#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int i, j;
    scanf("%d\n", &n);
    char string[100][102];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 101; j++) {
            scanf("%c", &string[i][j]);
            if (string[i][j] == '\n') {
                string[i][j] = '\0';
                break;
            }
        }
    }
    char str[102];
    strcpy(str, string[0]);
    for (i = 1; i < n; i++) {
        if (strlen(str) < strlen(string[i])) {
            strcpy(str, string[i]);
        }
    }
    printf("%s", str);
    return 0;
}