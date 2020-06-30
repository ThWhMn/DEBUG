#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char names[100][102];
    char max[102];
    for (int i = 0; i < n; i++) {
        int z = 0;
        while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
            z++;
        }
    }
    strcpy(max, names[0]);
    int i = 1;
    do {
        if (strlen(names[i]) > strlen(max)) {
            strcpy(max, names[i]);
        }
        i++;
    } while (i < n);
    printf("%s\n", max);
    return 0;
}
