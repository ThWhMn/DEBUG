#include <stdio.h>
#include <string.h>

int main()
{
    char name[100][101];
    char largest[101];
    int  i, j, n;

    scanf("%d\n", &n);      // input
    for (i = 0; i < n; i++) // read name[][]
        for (j = 0; scanf("%c", &name[i][j]) != EOF && name[i][j] != '\n'; j++)
            ;
    for (strcpy(largest, name[0]), i = 1; i < n; i++) // find the longest
        if (strlen(largest) < strlen(name[i]))
            strcpy(largest, name[i]);
    printf("%s", largest);

    return 0;
}
