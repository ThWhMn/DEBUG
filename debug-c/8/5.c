#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char name[100][102];
    for (int i = 0; i < n; i++) {
        gets(name[i]); // input
    }
    char name_max[102];
    strcpy(name_max, name[0]);
    for (int i = 1; i < n; i++) {
        if (strlen(name_max) < strlen(name[i]))
            strcpy(name_max, name[i]);
    }
    printf("%s", name_max);
    return 0;
}